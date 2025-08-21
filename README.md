![Alt text](<bplustree_removetest.gif>)

# Work Report

## Name: <ins> Eva Sangwan </ins>

# Custom BPlusTree Implementation 
This is a self-written implementation of a B+ Tree data structure from scratch, designed to deepen my understanding of how B+ Trees work internally. The implementation includes all the core operations: insertion, deletion, searching, and traversal, with comprehensive testing to ensure correctness. 

## Features:

Insertion: Efficent insertion with automatic node splitting

Deletion: Complete removal implementation with merging and redistribution

Search: Fast lookup operations 

Iteration: Forward iterator for in-order traversal

Copy Constructor & Assignment Operator: For deep copying 

Tree Traversals: In-order, pre-order, and post-order traversals

Range Queries: Iterator-based range operations

Leaf Node Linking: Connected leaf nodes for efficient range scans

## Implementation Details
Key Components: 

BPlusTree Class: Main tree structure with configurable node sizes

Iterator Class: For traversing elements in sorted order

Node Structure: Internal and leaf nodes with proper linkage

## Comprehensive Remove Testing
To test the BPlusTree Remove function, I wrote a test that ensures all edge cases are covered.
This can be found in - `_tests/_test_files/testB.cpp` and includes:

Randomized Testing: Generates unique random datasets for each test iteration

Multiple Removal Orders: Tests every possible removal sequence by shuffling indices

Complete Coverage: Ensures all elements can be removed in any order

Empty Tree Verification: Confirms the tree is properly emptied after all removals

Large Scale Testing: Runs 225 iterations (15×15) for thorough validation

## File Structure 
- `includes/` – header files for bplustree class and bplustree array functions
  
   `bplustree/bplustree.h` – BPlusTree class includes Iterator class
  
   `btree_array_funcs/btree_array_funcs.h` – utility functions to attach, detach, shift, move, and merge arrays, find max values, indices of max values, and swap values
- `functions.h`- Self written utility functions for array operations, shuffling, and printing
- `_tests/_test_files/testB.cpp` - debugging and testing purposes

