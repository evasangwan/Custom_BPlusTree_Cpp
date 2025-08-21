#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std; 

void shuffle(int arr[], int size){
    for (int k = 0; k < size*size; k++){
        int one = rand() % size;
        int two = rand() % size;
        int temp = arr[one];
        arr[one] = arr[two];
        arr[two] = temp;
    }
}

void print_array(const int arr[], int size){
    cout << "{";
    for (int i = 0; i < size; i++){
        if (i != size-1){
            cout << arr[i] << ", ";
        }
        else{
            cout << arr[i];
        }
    }
    cout << "}";
} 

#endif