#include "gtest/gtest.h"
#include <iostream>
#include <iomanip>
#include <vector> 
#include <algorithm>
#include "../../includes/bplustree/bplustree.h"
#include "../../functions.h"
using namespace std;

bool test_remove(bool debug = false)
{
    int size = 15;
    srand(time(nullptr));
    vector<int> unique; 
    int number = 0;
    for (int m = 0; m < size*size; m++){
      int arr[size];
      int count = 0;
      while (count < size){
          int num = rand() % 225;
          vector<int>::iterator it = find(unique.begin(),unique.end(),num);
          if (it == unique.end()){  //meaning it was not found 
            unique.push_back(num);
            arr[count] = num;
            count++;
          }
      }
      int indices[size];
      for (int j = 0; j < size; j++){
          indices[j] = j;
      }
      shuffle(indices,size);
      cout << "initial insertion order: ";
      print_array(arr,size);
      cout << endl;
      cout << "initial removal order: {";
      for (int b = 0; b < size; b++){
        if (b != size-1){
          cout << arr[indices[b]] << ", ";
        }
        else{
          cout << arr[indices[b]];
        }
      }
      cout << "}" << endl;
      cout << endl;

// initial insertion order: {71, 172, 164, 107, 180, 89, 160, 112, 122, 196, 145, 37, 102, 3, 224};
// initial removal order: {180, 172, 122, 107, 145, 112, 224, 160, 164, 71, 196, 37, 102, 89, 3};
  int arr2[15] = {71, 172, 164, 107, 180, 89, 160, 112, 122, 196, 145, 37, 102, 3, 224};
  int rem_order[15] = {180, 172, 122, 107, 145, 112, 224, 160, 164, 71, 196, 37, 102, 89, 3};
      int* ptr = arr;
      BPlusTree<int> btree(ptr,size);
      cout << "initial tree:" << endl;
      cout << "----------------------------------------------------------"<<endl;
      cout << btree << endl;
      cout << "----------------------------------------------------------"<<endl;
      // for (int i = 0; i < size; i++){
      //   cout << "-------removing " << rem_order[i] << "--------------"<<endl;
      //   btree.remove(rem_order[i]);
      //   cout << btree << endl;
      // }
      for (int i = 0; i < size; i++){
        cout << "-------removing " << arr[indices[i]] << "--------------"<<endl;
        btree.remove(arr[indices[i]]);
        cout << btree << endl;
      }
      bool is_empty = btree.empty();
      assert(is_empty == true && "should be empty but it's not!");
      if (is_empty){
        cout << "removed successfully." << endl;
        cout << "------------------------------" << endl;
        cout << endl;
        cout << endl;
      }
      unique.clear();
      number++;
    }
    cout << "finished "<< number << " iterations " <<endl;
    ////////////////////////////////////////////////////////////////////
    /*
the contents of the array is hard coded. Make it randomly generated. The size of the array is dependent on size, so no need for size*size
Then, you have an array that is filled with numbers from 0..size-1
now, you shuffle this array.
then use elements of this array as indices to the other array.
then for i:0->size you remove the elements of the tree.
At the very top, you print the initial insertion order AND the removal order.
It's important to know what the input was in case you want to repeat the experiment for debugging.
when you rint the arrays, print them in this format:
{3,5,,7,9} that way, you can just copy and paste this into your code and repeat the session.
    
    
    */
  return true;
}


TEST(TEST_REMOVE, TestRemove) {
  
  //EXPECT_EQ(0, <your individual test functions are called here>);

  EXPECT_EQ(1, test_remove(false));
}




int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  std::cout<<"\n\n----------running testB.cpp---------\n\n"<<std::endl;
  return RUN_ALL_TESTS();
}

