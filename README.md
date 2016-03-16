Hands On C++
=======

###Data Structure and Algorithms

- Array
  - Plus one: [LeetCode](https://leetcode.com/problems/plus-one/ "Plus One")#[66](./LeetCode/66_Plus%20One.cpp)
  - Merge sorted array: [LeetCode](https://leetcode.com/problems/merge-sorted-array/ "Merge Sorted Array")#[88](./LeetCode/88_Merge%20Sorted%20Array.cpp)

- Sorting
  - [Bubble sort](./DSA/sorting/bubble_sort.cpp)
  - [Insertion sort](./DSA/sorting/insertion_sort.cpp)
  - [Shell sort](./DSA/sorting/shell_sort.cpp)
  - [Selection sort](./DSA/sorting/selection_sort.cpp)
  - [Quick sort](./DSA/sorting/quick_sort.cpp)
  - [Merge sort](./DSA/sorting/merge_sort.cpp)
  - [Heap sort](./DSA/sorting/heap_sort.cpp)
  - [Count sort](./DSA/sorting/count_sort.cpp)

- Search
  - Binary search: code, [LeetCode](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/ "Find Minimum in Rotated Sorted Array")#[153](./LeetCode/153_Find%20Minimum%20in%20Rotated%20Sorted%20Array.cpp), [LeetCode](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/ "Find Minimum in Rotated Sorted Array II (with duplicates)")#[154](./LeetCode/154_Find%20Minimum%20in%20Rotated%20Sorted%20Array%20II.cpp), [LeetCode](https://leetcode.com/problems/sqrtx/ "Sqrt(x)")#[69](./LeetCode/69_Sqrt(x).cpp)

- Selection
  - Kth largest element in an array: [LeetCode](https://leetcode.com/problems/kth-largest-element-in-an-array/ "Kth Largest Element in an Array")#[215](./LeetCode/215_Kth%20Largest%20Element%20in%20an%20Array.cpp)


- Recursion
  - Permutation: [LeetCode](https://leetcode.com/problems/permutations/ "Permutations")#[46](./LeetCode/46_Permutations.cpp), [LeetCode](https://leetcode.com/problems/permutations-ii/ "Permutations II (with duplicates)")#[47](./LeetCode/47_Permutations%20II.cpp)

- Hash
  - Two sum: [LeetCode](https://leetcode.com/problems/two-sum/ "Two Sum")#[1](./LeetCode/1_Two%20Sum.cpp) 
  - Isomorphic strings: [LeetCode](https://leetcode.com/problems/isomorphic-strings/ "Isomorphic Strings")#[205](./LeetCode/205_Isomorphic%20Strings.cpp)


- [Heap and Priority Queue](http://www.geeksforgeeks.org/heap/)

   Note: Build heap, O(n); extract root and rebuild O(logn)
  * [Heap vs BST for priority queue](http://www.geeksforgeeks.org/why-is-binary-heap-preferred-over-bst-for-priority-queue/)
  * [Heap sort](./DSA/sorting/heap_sort.cpp)
  * [Sort a nearly sorted (or K sorted) array](http://www.geeksforgeeks.org/nearly-sorted-algorithm/)
  * [Kth largest element in unsorted array](./DSA/heap/kth_largest_element_in_unsorted_array.cpp)
  * [Kth largest element in a stream](./DSA/heap/kth_largest_element_in_a_stream.cpp)
  * Find median from data stream: [LeetCode](https://leetcode.com/problems/find-median-from-data-stream/ "Find Median from Data Stream")#[295](./LeetCode/295_Find%20Median%20from%20Data%20Stream.cpp)
  * Merge k sorted arrays/lists: [LeetCode](https://leetcode.com/problems/merge-k-sorted-lists/ "Merge k Sorted Lists")#[23](./LeetCode/23_Merge%20k%20Sorted%20Lists.cpp)
  * [Connect n ropes with minimum cost](http://www.geeksforgeeks.org/connect-n-ropes-minimum-cost/)
  * [Check if a given array represents a Binary Heap](http://www.geeksforgeeks.org/how-to-check-if-a-given-array-represents-a-binary-heap/)
  * [Check if a given binary tree is heap](http://www.geeksforgeeks.org/check-if-a-given-binary-tree-is-heap/)


- Linked List
  - [LeetCode](https://leetcode.com/problems/add-two-numbers/ "Add Two Numbers")#[2](./LeetCode/2_Add%20Two%20Numbers.cpp), [LeetCode](https://leetcode.com/problems/merge-two-sorted-lists/ "Merge Two Sorted Lists")#[21](./LeetCode/21_Merge%20Two%20Sorted%20Lists.cpp)


- Tree
  - Traversal: preorder, inorder, postorder, level
  - Same tree: [LeetCode](https://leetcode.com/problems/same-tree/ "Same Tree")#[./LeetCode/100_Same%20Tree.cpp]
  - Serialize and deserialize binary tree: [LeetCode](https://leetcode.com/problems/serialize-and-deserialize-binary-tree/)#[297](./LeetCode/297_Serialize%20and%20Deserialize%20Binary%20Tree.cpp)
  - Sum root to leaf numbers: [LeetCode](https://leetcode.com/problems/sum-root-to-leaf-numbers/ "Sum Root to Leaf Numbers")#[129](./LeetCode/129_Sum%20Root%20to%20Leaf%20Numbers.cpp)
  - Binary search tree
    - [Search/add key](http://geeksquiz.com/binary-search-tree-set-1-search-and-insertion/)
    - [Delete key](http://geeksquiz.com/binary-search-tree-set-2-delete/) 
    - [Find minimum](http://www.geeksforgeeks.org/find-the-minimum-element-in-a-binary-search-tree/)
    - [Inorder predecessor and successor for a given key](http://www.geeksforgeeks.org/inorder-predecessor-successor-given-key-bst/)
    - [Check if a binary tree is BST or not](http://www.geeksforgeeks.org/a-program-to-check-if-a-binary-tree-is-bst-or-not/)
    - [Sorted order printing of a given array that represents a BST](http://www.geeksforgeeks.org/sorted-order-printing-of-an-array-that-represents-a-bst/)
    - Lowest common ancestor: 1) [in a BST](http://www.geeksforgeeks.org/lowest-common-ancestor-in-a-binary-search-tree/); 2) [in a binary tree](http://www.geeksforgeeks.org/lowest-common-ancestor-binary-tree-set-1/)
  - Red-Black Tree
  - AVL Tree
  - Splay Tree
  - Segment Tree
    - RMQ: Range Minimum Query
  

- [Graph](http://www.geeksforgeeks.org/data-structures/#Graph)
  - DFS: by [recursion](./DSA/graph/DFS_recursion.cpp), by [stack](./DSA/graph/DFS.cpp)
  - [BFS](./DSA/graph/BFS.cpp)
  - [Dijkstra](./DSA/graph/Dijkstra.cpp) (Single source)
  - [Floyd Warshall](./DSA/graph/Floyd_Warshall.cpp) (All pairs)


- String
  - Palindrome (回文): [LeetCode](https://leetcode.com/problems/valid-palindrome/ "Valid Palindrome")#[125](./LeetCode/125_Valid%20Palindrome.cpp)
  - String match: 
    - [Brute Force](http://www.geeksforgeeks.org/searching-for-patterns-set-1-naive-pattern-searching/)
    - KMP [[ref1](http://www.geeksforgeeks.org/searching-for-patterns-set-2-kmp-algorithm/), [ref2](http://jakeboxer.com/blog/2009/12/13/the-knuth-morris-pratt-algorithm-in-my-own-words/)]: [code](./DSA/string/KMP.cpp), [LeetCode](https://leetcode.com/problems/shortest-palindrome/ "Shortest Palindrome")#[214](./LeetCode/214_Shortest%20Palindrome.cpp)
    - [Rabin-Karp](http://www.geeksforgeeks.org/searching-for-patterns-set-3-rabin-karp-algorithm/)
    - [Finite automata](http://www.geeksforgeeks.org/searching-for-patterns-set-5-finite-automata/)
    - [set 6](http://www.geeksforgeeks.org/pattern-searching-set-5-efficient-constructtion-of-finite-automata/)
    - [Boyer moore](http://www.geeksforgeeks.org/pattern-searching-set-7-boyer-moore-algorithm-bad-character-heuristic/)
    - [Suffix tree](http://www.geeksforgeeks.org/pattern-searching-set-8-suffix-tree-introduction/)


- Bit Manipulation
  - Power of two: [LeetCode](https://leetcode.com/problems/power-of-two/ "Power of Two")#[231](./LeetCode/231_Power%20of%20Two.cpp)


- Math
  - Power of three: [LeetCode](https://leetcode.com/problems/power-of-three/ "Power of Three")#[326](./LeetCode/326_Power%20of%20Three.cpp)

- Must Know
  - [Binary exponentiation](https://www.hackerearth.com/notes/mod-integer-exponentiation-useful-in-competetive-programming/): [LeetCode](https://leetcode.com/problems/powx-n/ "Pow(x, n)")#[50](./LeetCode/50_Pow(x%2C%20n).cpp)
  - Dynamic programming: LeetCode#xx, POJ#xx
  - Suffix array

