![Alt text](<bplustree_removetest.gif>)

# Work Report

## Name: <ins> Eva Sangwan </ins>

# Custom BPlusTree Implementation 
This is a self-written implementation of a B+ Tree data structure from scratch, designed to deepen my understanding of how B+ Trees work internally. The implementation includes all the core operations: insertion, deletion, searching, and traversal, with comprehensive testing to ensure correctness. 

## Features:

Insertion: efficent insertion with node splitting

Deletion: complete removal implementation with merging and redistribution

Search: fast lookup operation

Iteration: forward iterator for in-order traversal

Copy Constructor & Assignment Operator: for deep copying 

Tree Traversals: in-order, pre-order, and post-order traversals

Range Queries: iterator-based range operations

Leaf Node Linking: connected leaf nodes for efficient range scans

## Implementation Details
Key Components: 

BPlusTree Class: main tree structure with configurable node sizes

Iterator Class: for traversing elements in sorted order

Node Structure: root, internal and leaf nodes with proper linkage

## Comprehensive Remove Testing
To test the BPlusTree Remove function, I wrote a test that ensures all edge cases are covered.
This can be found in `_tests/_test_files/testB.cpp` and includes:

Randomized Testing: generates unique random datasets for each test iteration

Multiple Removal Orders: tests every possible removal sequence by shuffling indices

Complete Coverage: ensures all elements can be removed in any order

Empty Tree Verification: confirms the tree is properly emptied after all removals

Large Scale Testing: runs 225 iterations (15×15) for thorough validation

## File Structure 
- `includes/` – header files for bplustree class and bplustree array functions
  
   `bplustree/bplustree.h` – BPlusTree class includes Iterator class
  
   `btree_array_funcs/btree_array_funcs.h` – utility functions to attach, detach, shift, move, and merge arrays, find max values, indices of max values, and swap values
- `functions.h`- Self written utility functions for array operations, shuffling, and printing
- `_tests/_test_files/testB.cpp` - debugging and testing purposes

