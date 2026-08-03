# 📖 Phase 1 – STL + Arrays + Strings + Pair (Foundation)

## 🎯 Goal

Build a strong foundation in C++ STL and become comfortable with basic array and string manipulation before moving on to advanced DSA patterns.

---

# 📚 Part 1: C++ STL (No LeetCode Yet)

## 🔹 Vector

### Learn

* Declaration
* Traversal
* `push_back()`
* `pop_back()`
* `insert()`
* `erase()`
* `clear()`
* `resize()`
* `assign()`
* `swap()`
* `front()`
* `back()`
* `size()`
* `empty()`

---

## 🔹 STL Algorithms

Learn and practice the following:

* `sort()`
* `reverse()`
* `find()`
* `count()`
* `max_element()`
* `min_element()`
* `accumulate()`

---

## 🔹 String

### Learn

* `substr()`
* `find()`
* `erase()`
* `insert()`
* `append()`
* `replace()`
* `compare()`
* `push_back()`
* `pop_back()`
* `tolower()`
* `toupper()`
* `isdigit()`
* `isalpha()`

---

## 🔹 Pair

Learn

* `pair<int, int>`
* `make_pair()`
* `.first`
* `.second`
* `vector<pair<int, int>>`

---

# 🧩 Part 2: Practice Problems

## 📌 Arrays (Striver + NeetCode)

### Easy

* [ ] LC 1929 – Concatenation of Array
---------------------------------------------------------------------------------------------------------------------
* [ ] LC 1480 – Running Sum of 1D Array

### Related Problems (Prefix Sum / Running Sum)

- LC 1732 – Find the Highest Altitude
- LC 2574 – Left and Right Sum Differences
- LC 724 – Find Pivot Index
- LC 1991 – Find the Middle Index
- LC 303 – Range Sum Query – Immutable
- LC 238 – Product of Array Except Self
- LC 560 – Subarray Sum Equals K *(Phase 2)*

After you start Phase 2 (Hashing), continue with:

⭐ LC 560 – Subarray Sum Equals K
⭐ LC 523 – Continuous Subarray Sum
⭐ LC 930 – Binary Subarrays With Sum
⭐ LC 974 – Subarray Sums Divisible by K

---------------------------------------------------------------------------------------------------------------------
* [ ] LC 26 – Remove Duplicates from Sorted Array

### LC 26 – Remove Duplicates from Sorted Array

**Pattern**
- Two Pointers
- In-place Array Modification
- Slow & Fast Pointer
- Sorted Array

**Concepts Learned**
- Modify array without extra space
- Maintain two pointers
- Overwrite duplicate elements
- Return the new valid length

**Related Problems**

#### Easy
- [ ] LC 27 – Remove Element
- [ ] LC 283 – Move Zeroes
- [ ] LC 905 – Sort Array By Parity
- [ ] LC 88 – Merge Sorted Array

#### Medium
- [ ] LC 80 – Remove Duplicates from Sorted Array II ⭐
- [ ] LC 75 – Sort Colors
- [ ] LC 31 – Next Permutation
- [ ] LC 189 – Rotate Array

#### Advanced Two Pointer Problems
- [ ] LC 167 – Two Sum II
- [ ] LC 11 – Container With Most Water
- [ ] LC 42 – Trapping Rain Water

---------------------------------------------------------------------------------------------------------------------
* [ ] LC 27 – Remove Element
### LC 27 – Remove Element

**Pattern**
- Two Pointers
- In-place Array Modification
- Slow & Fast Pointer

**Concepts Learned**
- Remove elements without using extra space
- Overwrite unwanted elements
- Maintain the valid portion of the array
- Return the new valid length

**Time Complexity**
- O(n)

**Space Complexity**
- O(1)

**Related Problems**

#### Easy
- [ ] LC 26 – Remove Duplicates from Sorted Array
- [ ] LC 283 – Move Zeroes
- [ ] LC 905 – Sort Array By Parity
- [ ] LC 1929 – Concatenation of Array
- [ ] LC 88 – Merge Sorted Array

#### Medium
- [ ] LC 80 – Remove Duplicates from Sorted Array II ⭐
- [ ] LC 75 – Sort Colors
- [ ] LC 189 – Rotate Array
- [ ] LC 31 – Next Permutation

#### Advanced Two Pointer Problems
- [ ] LC 167 – Two Sum II
- [ ] LC 11 – Container With Most Water
- [ ] LC 42 – Trapping Rain Water

---------------------------------------------------------------------------------------------------------------------

* [ ] LC 66 – Plus One

### LC 66 – Plus One

**Pattern**
- Array Simulation
- Carry Propagation
- Digit Manipulation

**Concepts Learned**
- Traverse an array from right to left
- Handle carry while performing arithmetic
- Modify an array in-place
- Create a new array when overflow occurs (e.g., 999 → 1000)

**Time Complexity**
- O(n)

**Space Complexity**
- O(1) *(Ignoring the output array when a new one is created)*

**Related Problems**

#### Easy
- [ ] LC 989 – Add to Array-Form of Integer ⭐
- [ ] LC 67 – Add Binary
- [ ] LC 415 – Add Strings

#### Medium
- [ ] LC 43 – Multiply Strings
- [ ] LC 2 – Add Two Numbers *(Linked List)*
- [ ] LC 369 – Plus One Linked List

#### Advanced Digit Manipulation
- [ ] LC 7 – Reverse Integer
- [ ] LC 8 – String to Integer (atoi)
- [ ] LC 556 – Next Greater Element III

---------------------------------------------------------------------------------------------------------------------


* [ ] LC 88 – Merge Sorted Array

### LC 88 – Merge Sorted Array

**Pattern**
- Two Pointers
- Sorted Arrays
- In-place Array Modification
- Reverse Traversal

**Concepts Learned**
- Merge two sorted arrays efficiently
- Use pointers from the end to avoid overwriting elements
- Handle remaining elements after one array is exhausted
- Understand the merge step used in Merge Sort

**Time Complexity**
- O(m + n)

**Space Complexity**
- O(1)

**Related Problems**

#### Easy
- [ ] LC 26 – Remove Duplicates from Sorted Array
- [ ] LC 27 – Remove Element
- [ ] LC 977 – Squares of a Sorted Array

#### Medium
- [ ] LC 56 – Merge Intervals ⭐
- [ ] LC 57 – Insert Interval
- [ ] LC 75 – Sort Colors
- [ ] LC 31 – Next Permutation

#### Linked List Variations
- [ ] LC 21 – Merge Two Sorted Lists ⭐
- [ ] LC 23 – Merge k Sorted Lists

#### Advanced Merge Pattern
- [ ] LC 493 – Reverse Pairs
- [ ] LC 315 – Count of Smaller Numbers After Self
- [ ] Merge Sort (Algorithm)

**Interview Variations**
- Merge three sorted arrays
- Merge arrays without extra space
- Merge k sorted arrays
- Merge intervals after sorting

**Common Mistakes**
- Starting pointers from the beginning instead of the end
- Forgetting to copy remaining elements from `nums2`
- Incorrect pointer updates
- Confusing array sizes (`m`, `n`) with total vector size

**Prerequisites**
- Two Pointers
- Array Traversal
- Basic Sorting

**Next Problems**
- LC 21 – Merge Two Sorted Lists
- LC 56 – Merge Intervals
- LC 23 – Merge k Sorted Lists

---------------------------------------------------------------------------------------------------------------------

* [ ] LC 283 – Move Zeroes

### LC 283 – Move Zeroes

**Pattern**
- Two Pointers
- In-place Array Modification
- Stable Partition

**Concepts Learned**
- Move elements while maintaining their relative order
- Use slow and fast pointers efficiently
- Perform in-place swaps with O(1) extra space
- Understand stable partitioning of an array

**Time Complexity**
- O(n)

**Space Complexity**
- O(1)

**Related Problems**

#### Easy
- [ ] LC 27 – Remove Element
- [ ] LC 26 – Remove Duplicates from Sorted Array
- [ ] LC 905 – Sort Array By Parity
- [ ] LC 1089 – Duplicate Zeros

#### Medium
- [ ] LC 75 – Sort Colors ⭐
- [ ] LC 189 – Rotate Array
- [ ] LC 31 – Next Permutation
- [ ] LC 80 – Remove Duplicates from Sorted Array II

#### Advanced Two Pointer Problems
- [ ] LC 167 – Two Sum II
- [ ] LC 11 – Container With Most Water
- [ ] LC 42 – Trapping Rain Water

**Interview Variations**
- Move all negative numbers to the beginning
- Move all even numbers before odd numbers
- Partition an array based on a pivot
- Segregate 0s and 1s
- Segregate 0s, 1s, and 2s (Dutch National Flag)

**Common Mistakes**
- Swapping every element unnecessarily
- Not preserving the relative order of non-zero elements
- Forgetting to handle arrays with no zeros or all zeros
- Using extra arrays instead of solving in-place

**Prerequisites**
- Array Traversal
- Two Pointers
- Swapping Elements

**Next Problems**
- LC 75 – Sort Colors
- LC 905 – Sort Array By Parity
- LC 80 – Remove Duplicates from Sorted Array II
- LC 11 – Container With Most Water

---------------------------------------------------------------------------------------------------------------------

* [ ] LC 189 – Rotate Array

### LC 189 – Rotate Array

**Pattern**
- Array Manipulation
- Reversal Algorithm
- Cyclic Shift
- Two Pointers

**Concepts Learned**
- Rotate an array by `k` positions
- Reverse parts of an array
- Optimize space from O(n) to O(1)
- Handle `k > n` using modulo (`k %= n`)

**Time Complexity**
- O(n)

**Space Complexity**
- O(1) *(Using Reversal Algorithm)*

**Related Problems**

#### Easy
- [ ] LC 283 – Move Zeroes
- [ ] LC 977 – Squares of a Sorted Array
- [ ] LC 88 – Merge Sorted Array
- [ ] LC 485 – Max Consecutive Ones

#### Medium
- [ ] LC 31 – Next Permutation ⭐
- [ ] LC 75 – Sort Colors
- [ ] LC 48 – Rotate Image ⭐
- [ ] LC 396 – Rotate Function

#### Advanced Array Manipulation
- [ ] LC 41 – First Missing Positive
- [ ] LC 238 – Product of Array Except Self
- [ ] LC 1861 – Rotating the Box

**Interview Variations**
- Rotate array to the left
- Rotate array by one position
- Rotate a string
- Rotate a linked list
- Rotate a matrix by 90°
- Circular array traversal

**Common Mistakes**
- Forgetting `k %= n`
- Incorrect reverse ranges
- Using O(n) extra space when O(1) is possible
- Off-by-one errors while reversing

**Prerequisites**
- Array Traversal
- Two Pointers
- Reversing an Array

**Next Problems**
- LC 48 – Rotate Image
- LC 31 – Next Permutation
- LC 396 – Rotate Function
- LC 61 – Rotate List


---------------------------------------------------------------------------------------------------------------------


* [ ] LC 977 – Squares of a Sorted Array

### LC 977 – Squares of a Sorted Array

**Pattern**
- Two Pointers
- Sorted Arrays
- Array Construction

**Concepts Learned**
- Use two pointers from opposite ends of a sorted array
- Compare absolute values instead of actual values
- Build the answer array from the end
- Avoid sorting after squaring

**Time Complexity**
- O(n)

**Space Complexity**
- O(n)

**Related Problems**

#### Easy
- [ ] LC 26 – Remove Duplicates from Sorted Array
- [ ] LC 27 – Remove Element
- [ ] LC 88 – Merge Sorted Array
- [ ] LC 283 – Move Zeroes
- [ ] LC 189 – Rotate Array

#### Medium
- [ ] LC 167 – Two Sum II – Input Array Is Sorted ⭐
- [ ] LC 11 – Container With Most Water ⭐
- [ ] LC 15 – 3Sum ⭐
- [ ] LC 18 – 4Sum
- [ ] LC 16 – 3Sum Closest

#### Advanced Two Pointer Problems
- [ ] LC 42 – Trapping Rain Water
- [ ] LC 881 – Boats to Save People
- [ ] LC 948 – Bag of Tokens

**Interview Variations**
- Return cubes of a sorted array
- Merge squares of two sorted arrays
- Find pair with target sum in a sorted array
- Count pairs satisfying a condition

**Common Mistakes**
- Squaring every element and sorting again (O(n log n))
- Comparing values instead of absolute values
- Filling the answer array from the beginning instead of the end
- Incorrect pointer movement

**Prerequisites**
- Array Traversal
- Two Pointers
- Sorted Arrays

**Next Problems**
- LC 167 – Two Sum II
- LC 15 – 3Sum
- LC 11 – Container With Most Water
- LC 42 – Trapping Rain Water

---------------------------------------------------------------------------------------------------------------------

* [ ] LC 485 – Max Consecutive Ones

### LC 485 – Max Consecutive Ones

**Pattern**
- Array Traversal
- Counting
- Sliding Window (Foundation)

**Concepts Learned**
- Traverse an array in a single pass
- Maintain a running count
- Reset state when a condition changes
- Track the maximum value seen so far
- Foundation for variable-size sliding window problems

**Time Complexity**
- O(n)

**Space Complexity**
- O(1)

**Related Problems**

#### Easy
- [ ] LC 487 – Max Consecutive Ones II ⭐
- [ ] LC 414 – Third Maximum Number
- [ ] LC 1295 – Find Numbers with Even Number of Digits
- [ ] LC 1732 – Find the Highest Altitude

#### Medium
- [ ] LC 1004 – Max Consecutive Ones III ⭐⭐⭐
- [ ] LC 1493 – Longest Subarray of 1's After Deleting One Element ⭐⭐
- [ ] LC 904 – Fruit Into Baskets
- [ ] LC 424 – Longest Repeating Character Replacement

#### Advanced Sliding Window
- [ ] LC 3 – Longest Substring Without Repeating Characters
- [ ] LC 209 – Minimum Size Subarray Sum
- [ ] LC 76 – Minimum Window Substring

**Interview Variations**
- Maximum consecutive even numbers
- Maximum consecutive odd numbers
- Maximum consecutive positive numbers
- Longest streak after one modification
- Longest streak after deleting one element

**Common Mistakes**
- Forgetting to update the maximum after the loop
- Not resetting the counter correctly
- Using extra space unnecessarily
- Confusing counting with sliding window

**Prerequisites**
- Array Traversal
- Basic Loops
- Variables for running count

**Next Problems**
- LC 487 – Max Consecutive Ones II
- LC 1004 – Max Consecutive Ones III
- LC 1493 – Longest Subarray of 1's After Deleting One Element
- LC 904 – Fruit Into Baskets

---------------------------------------------------------------------------------------------------------------------
> These problems align with the **Arrays (Easy)** section of the Striver A2Z DSA Sheet.

---
# 🧩 DSA Pattern Playbook — Arrays & Strings

A pattern-first roadmap for cracking array & string problems. Each pattern groups problems that share the same underlying trick, so once you internalize the pattern, the whole cluster becomes easy.

> 💡 **How to use this:** Don't grind problems randomly. Pick a pattern, solve every problem in it back-to-back, then move to the next. Check items off as you go.

---

## 📖 Table of Contents

| # | Pattern | Problems |
|---|---------|----------|
| 1 | [Basic Array Traversal](#1--basic-array-traversal) | 5 |
| 2 | [Prefix Sum](#2--prefix-sum) | 10 |
| 3 | [Two Pointers — Same Direction](#3--two-pointers--same-direction) | 7 |
| 4 | [Digit Simulation](#4--digit-simulation) | 7 |
| 5 | [Merge Pattern](#5--merge-pattern) | 8 |
| 6 | [Stable In-place Rearrangement](#6--stable-in-place-rearrangement) | 7 |
| 7 | [Array Rotation & Reversal](#7--array-rotation--reversal) | 6 |
| 8 | [Two Pointers — Opposite Direction](#8--two-pointers--opposite-direction) | 8 |
| 9 | [Counting → Sliding Window](#9--counting--sliding-window) | 8 |

**Total: 66 problems** across 9 core patterns.

---

## 1 · Basic Array Traversal
*Warm-up pattern — single pass, index/value manipulation, no auxiliary structure needed.*

| Done | LC # | Problem |
|:---:|:---:|---|
| ☐ | 1929 | [Concatenation of Array](https://leetcode.com/problems/concatenation-of-array/) |
| ☐ | 1480 | [Running Sum of 1D Array](https://leetcode.com/problems/running-sum-of-1d-array/) |
| ☐ | 1920 | [Build Array from Permutation](https://leetcode.com/problems/build-array-from-permutation/) |
| ☐ | 1470 | [Shuffle the Array](https://leetcode.com/problems/shuffle-the-array/) |
| ☐ | 1921 | Build Array (Variations) |

---

## 2 · Prefix Sum
*Precompute cumulative sums to answer range/subarray queries in O(1)–O(n) instead of recomputing.*

| Done | LC # | Problem |
|:---:|:---:|---|
| ☐ | 1480 | [Running Sum of 1D Array](https://leetcode.com/problems/running-sum-of-1d-array/) |
| ☐ | 1732 | [Highest Altitude](https://leetcode.com/problems/find-the-highest-altitude/) |
| ☐ | 2574 | [Left and Right Sum Differences](https://leetcode.com/problems/left-and-right-sum-differences/) |
| ☐ | 724 | [Pivot Index](https://leetcode.com/problems/find-pivot-index/) |
| ☐ | 1991 | [Find the Middle Index in Array](https://leetcode.com/problems/find-the-middle-index-in-array/) |
| ☐ | 303 | [Range Sum Query — Immutable](https://leetcode.com/problems/range-sum-query-immutable/) |
| ☐ | 560 | [Subarray Sum Equals K](https://leetcode.com/problems/subarray-sum-equals-k/) |
| ☐ | 523 | [Continuous Subarray Sum](https://leetcode.com/problems/continuous-subarray-sum/) |
| ☐ | 930 | [Binary Subarrays With Sum](https://leetcode.com/problems/binary-subarrays-with-sum/) |
| ☐ | 974 | [Subarray Sums Divisible by K](https://leetcode.com/problems/subarray-sums-divisible-by-k/) |

---

## 3 · Two Pointers — Same Direction
*Slow/fast pointers moving in the same direction — classic for in-place filtering & compaction.*

| Done | LC # | Problem |
|:---:|:---:|---|
| ☐ | 26 | [Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/) |
| ☐ | 27 | [Remove Element](https://leetcode.com/problems/remove-element/) |
| ☐ | 283 | [Move Zeroes](https://leetcode.com/problems/move-zeroes/) |
| ☐ | 905 | [Sort Array By Parity](https://leetcode.com/problems/sort-array-by-parity/) |
| ☐ | 80 | [Remove Duplicates from Sorted Array II](https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/) |
| ☐ | 75 | [Sort Colors](https://leetcode.com/problems/sort-colors/) |
| ☐ | 1089 | [Duplicate Zeros](https://leetcode.com/problems/duplicate-zeros/) |

---

## 4 · Digit Simulation
*Treat numbers as digit arrays/strings and simulate manual arithmetic (carry propagation, etc.).*

| Done | LC # | Problem |
|:---:|:---:|---|
| ☐ | 66 | [Plus One](https://leetcode.com/problems/plus-one/) |
| ☐ | 989 | [Add to Array-Form of Integer](https://leetcode.com/problems/add-to-array-form-of-integer/) |
| ☐ | 67 | [Add Binary](https://leetcode.com/problems/add-binary/) |
| ☐ | 415 | [Add Strings](https://leetcode.com/problems/add-strings/) |
| ☐ | 43 | [Multiply Strings](https://leetcode.com/problems/multiply-strings/) |
| ☐ | 2 | [Add Two Numbers](https://leetcode.com/problems/add-two-numbers/) |
| ☐ | 369 | Plus One Linked List *(premium)* |

---

## 5 · Merge Pattern
*Combine two or more sorted structures — the backbone of merge sort and interval problems.*

| Done | LC # | Problem |
|:---:|:---:|---|
| ☐ | 88 | [Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/) |
| ☐ | 21 | [Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/) |
| ☐ | 23 | [Merge K Sorted Lists](https://leetcode.com/problems/merge-k-sorted-lists/) |
| ☐ | 56 | [Merge Intervals](https://leetcode.com/problems/merge-intervals/) |
| ☐ | 57 | [Insert Interval](https://leetcode.com/problems/insert-interval/) |
| ☐ | — | Merge Sort *(implement from scratch)* |
| ☐ | 493 | [Reverse Pairs](https://leetcode.com/problems/reverse-pairs/) |
| ☐ | 315 | [Count of Smaller Numbers After Self](https://leetcode.com/problems/count-of-smaller-numbers-after-self/) |

---

## 6 · Stable In-place Rearrangement
*Same problem set as Two Pointers, revisited with a focus on stability & in-place constraints.*

| Done | LC # | Problem |
|:---:|:---:|---|
| ☐ | 283 | [Move Zeroes](https://leetcode.com/problems/move-zeroes/) |
| ☐ | 27 | [Remove Element](https://leetcode.com/problems/remove-element/) |
| ☐ | 26 | [Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/) |
| ☐ | 905 | [Sort Array By Parity](https://leetcode.com/problems/sort-array-by-parity/) |
| ☐ | 75 | [Sort Colors](https://leetcode.com/problems/sort-colors/) |
| ☐ | 80 | [Remove Duplicates from Sorted Array II](https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/) |
| ☐ | 1089 | [Duplicate Zeros](https://leetcode.com/problems/duplicate-zeros/) |

---

## 7 · Array Rotation & Reversal
*Reversal tricks, cyclic shifts, and in-place matrix/list rotation.*

| Done | LC # | Problem |
|:---:|:---:|---|
| ☐ | 189 | [Rotate Array](https://leetcode.com/problems/rotate-array/) |
| ☐ | 48 | [Rotate Image](https://leetcode.com/problems/rotate-image/) |
| ☐ | 61 | [Rotate List](https://leetcode.com/problems/rotate-list/) |
| ☐ | 31 | [Next Permutation](https://leetcode.com/problems/next-permutation/) |
| ☐ | 396 | [Rotate Function](https://leetcode.com/problems/rotate-function/) |
| ☐ | 1861 | [Rotating the Box](https://leetcode.com/problems/rotating-the-box/) |

---

## 8 · Two Pointers — Opposite Direction
*Pointers starting at both ends and converging — ideal for sorted-array sum/area problems.*

| Done | LC # | Problem |
|:---:|:---:|---|
| ☐ | 977 | [Squares of a Sorted Array](https://leetcode.com/problems/squares-of-a-sorted-array/) |
| ☐ | 167 | [Two Sum II — Input Array Is Sorted](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/) |
| ☐ | 15 | [3Sum](https://leetcode.com/problems/3sum/) |
| ☐ | 16 | [3Sum Closest](https://leetcode.com/problems/3sum-closest/) |
| ☐ | 18 | [4Sum](https://leetcode.com/problems/4sum/) |
| ☐ | 11 | [Container With Most Water](https://leetcode.com/problems/container-with-most-water/) |
| ☐ | 42 | [Trapping Rain Water](https://leetcode.com/problems/trapping-rain-water/) |
| ☐ | 881 | [Boats to Save People](https://leetcode.com/problems/boats-to-save-people/) |

---

## 9 · Counting → Sliding Window
*Escalating difficulty: fixed counting → variable window → constraint-based window shrinking.*

| Done | LC # | Problem |
|:---:|:---:|---|
| ☐ | 485 | [Max Consecutive Ones](https://leetcode.com/problems/max-consecutive-ones/) |
| ☐ | 487 | Max Consecutive Ones II *(premium)* |
| ☐ | 1004 | [Max Consecutive Ones III](https://leetcode.com/problems/max-consecutive-ones-iii/) |
| ☐ | 1493 | [Longest Subarray of 1's After Deleting One Element](https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/) |
| ☐ | 904 | [Fruit Into Baskets](https://leetcode.com/problems/fruit-into-baskets/) |
| ☐ | 424 | [Longest Repeating Character Replacement](https://leetcode.com/problems/longest-repeating-character-replacement/) |
| ☐ | 209 | [Minimum Size Subarray Sum](https://leetcode.com/problems/minimum-size-subarray-sum/) |
| ☐ | 76 | [Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/) |

---

## 🗂️ Suggested Attack Order

```
Basic Traversal → Prefix Sum → Two Pointers (Same Dir.) → Stable Rearrangement
        ↓
Digit Simulation → Merge Pattern → Array Rotation & Reversal
        ↓
Two Pointers (Opposite Dir.) → Counting → Sliding Window
```

Patterns are ordered roughly by conceptual dependency — earlier ones build the intuition (index manipulation, prefix state, pointer movement) that later ones combine into harder tricks (sliding window especially leans on two-pointer intuition).

---

*Compiled as a personal DSA prep tracker · Pairs well with the Striver SDE Sheet.*

---------------------------------------------------------------------------------------------------------------------

## 📝 Strings

* [ ] Reverse String

### LC 344 – Reverse String

**Pattern**
- Two Pointers
- String Manipulation
- In-place Modification

**Concepts Learned**
- Reverse a string in-place
- Swap characters using two pointers
- Understand opposite-direction pointer movement
- Work with mutable character arrays

**Time Complexity**
- O(n)

**Space Complexity**
- O(1)

**Related Problems**

#### Easy
- [ ] LC 541 – Reverse String II
- [ ] LC 557 – Reverse Words in a String III
- [ ] LC 151 – Reverse Words in a String
- [ ] LC 125 – Valid Palindrome
- [ ] LC 345 – Reverse Vowels of a String

#### Medium
- [ ] LC 186 – Reverse Words in a String II
- [ ] LC 443 – String Compression
- [ ] LC 6 – Zigzag Conversion

#### Advanced String Manipulation
- [ ] LC 28 – Find the Index of the First Occurrence in a String
- [ ] LC 680 – Valid Palindrome II
- [ ] LC 844 – Backspace String Compare

**Interview Variations**
- Reverse only vowels
- Reverse every k characters
- Reverse words instead of characters
- Reverse a linked list
- Reverse an array in-place

**Common Mistakes**
- Incorrect pointer updates
- Swapping after pointers cross
- Using extra space when in-place is required
- Forgetting that `string` is mutable in C++

**Prerequisites**
- String Traversal
- Two Pointers
- Character Swapping

**Next Problems**
- LC 345 – Reverse Vowels of a String
- LC 541 – Reverse String II
- LC 557 – Reverse Words in a String III
- LC 151 – Reverse Words in a String

---------------------------------------------------------------------------------------------------------------------


* [ ] Length of Last Word

### LC 58 – Length of Last Word

**Pattern**
- String Traversal
- String Parsing
- Reverse Traversal

**Concepts Learned**
- Traverse a string from right to left
- Skip leading/trailing spaces
- Identify word boundaries
- Count characters without using extra space

**Time Complexity**
- O(n)

**Space Complexity**
- O(1)

**Related Problems**

#### Easy
- [ ] LC 151 – Reverse Words in a String
- [ ] LC 434 – Number of Segments in a String
- [ ] LC 1455 – Check If a Word Occurs As a Prefix of Any Word in a Sentence
- [ ] LC 1816 – Truncate Sentence

#### Medium
- [ ] LC 71 – Simplify Path ⭐
- [ ] LC 8 – String to Integer (atoi) ⭐
- [ ] LC 68 – Text Justification
- [ ] LC 6 – Zigzag Conversion

#### Advanced String Parsing
- [ ] LC 388 – Longest Absolute File Path
- [ ] LC 722 – Remove Comments
- [ ] LC 227 – Basic Calculator II

**Interview Variations**
- Find the first word
- Count the number of words
- Return the last word instead of its length
- Parse a sentence with multiple delimiters
- Ignore punctuation while counting

**Common Mistakes**
- Forgetting to skip trailing spaces
- Accessing an invalid index after reaching the beginning
- Counting spaces as part of the word
- Not handling a single-word string

**Prerequisites**
- String Traversal
- Loops
- Character Comparison

**Next Problems**
- LC 151 – Reverse Words in a String
- LC 434 – Number of Segments in a String
- LC 8 – String to Integer (atoi)
- LC 71 – Simplify Path

---------------------------------------------------------------------------------------------------------------------



* [ ] Merge Strings Alternately

### LC 1768 – Merge Strings Alternately

**Pattern**
- String Traversal
- Two Pointers
- String Construction

**Concepts Learned**
- Traverse two strings simultaneously
- Handle strings of different lengths
- Build a new string efficiently
- Manage multiple indices

**Time Complexity**
- O(n + m)

**Space Complexity**
- O(n + m)

**Related Problems**

#### Easy
- [ ] LC 28 – Find the Index of the First Occurrence in a String
- [ ] LC 392 – Is Subsequence
- [ ] LC 14 – Longest Common Prefix
- [ ] LC 415 – Add Strings

#### Medium
- [ ] LC 443 – String Compression ⭐
- [ ] LC 49 – Group Anagrams
- [ ] LC 6 – Zigzag Conversion
- [ ] LC 71 – Simplify Path

#### Advanced String Manipulation
- [ ] LC 151 – Reverse Words in a String
- [ ] LC 68 – Text Justification
- [ ] LC 76 – Minimum Window Substring
- [ ] LC 3 – Longest Substring Without Repeating Characters

**Interview Variations**
- Merge three strings alternately
- Merge two sorted strings
- Zip two strings together
- Merge characters based on a custom pattern
- Merge linked lists alternately

**Common Mistakes**
- Forgetting to append the remaining characters
- Incorrect index updates
- Accessing characters beyond the string length
- Using repeated string concatenation inefficiently in loops

**Prerequisites**
- String Traversal
- Loops
- Two Pointers
- String Operations

**Next Problems**
- LC 392 – Is Subsequence
- LC 14 – Longest Common Prefix
- LC 443 – String Compression
- LC 151 – Reverse Words in a String

---------------------------------------------------------------------------------------------------------------------


* [ ] Reverse Words in a String

### LC 151 – Reverse Words in a String

**Pattern**
- String Manipulation
- Two Pointers
- String Parsing
- Reverse Traversal

**Concepts Learned**
- Parse words separated by spaces
- Handle multiple leading, trailing, and consecutive spaces
- Reverse the order of words
- Construct the final string efficiently
- Master string tokenization and reconstruction

**Time Complexity**
- O(n)

**Space Complexity**
- O(n)

**Related Problems**

#### Easy
- [ ] LC 58 – Length of Last Word
- [ ] LC 557 – Reverse Words in a String III
- [ ] LC 434 – Number of Segments in a String
- [ ] LC 1816 – Truncate Sentence
- [ ] LC 1455 – Check If a Word Occurs As a Prefix of Any Word in a Sentence

#### Medium
- [ ] LC 186 – Reverse Words in a String II ⭐
- [ ] LC 443 – String Compression
- [ ] LC 71 – Simplify Path
- [ ] LC 8 – String to Integer (atoi)

#### Advanced String Manipulation
- [ ] LC 68 – Text Justification
- [ ] LC 6 – Zigzag Conversion
- [ ] LC 722 – Remove Comments
- [ ] LC 227 – Basic Calculator II

**Interview Variations**
- Reverse each word instead of word order
- Reverse words in-place
- Reverse only selected words
- Remove extra spaces while reversing
- Reverse words in a character array

**Common Mistakes**
- Leaving multiple spaces in the output
- Forgetting to remove leading or trailing spaces
- Missing the last word during traversal
- Using inefficient string concatenation inside loops

**Prerequisites**
- String Traversal
- String Parsing
- Two Pointers
- String Construction

**Next Problems**
- LC 557 – Reverse Words in a String III
- LC 186 – Reverse Words in a String II
- LC 443 – String Compression
- LC 71 – Simplify Path

---------------------------------------------------------------------------------------------------------------------



* [ ] Rotate String

### LC 796 – Rotate String

**Pattern**
- String Manipulation
- String Matching
- Simulation

**Concepts Learned**
- Check if one string is a rotation of another
- Understand cyclic rotations
- Use string concatenation (`s + s`)
- Apply substring search (`find()`)
- Learn the foundation of string matching techniques

**Time Complexity**
- O(n) *(Using `find()` in optimized implementations)*

**Space Complexity**
- O(n)

**Related Problems**

#### Easy
- [ ] LC 28 – Find the Index of the First Occurrence in a String ⭐
- [ ] LC 1768 – Merge Strings Alternately
- [ ] LC 14 – Longest Common Prefix
- [ ] LC 392 – Is Subsequence

#### Medium
- [ ] LC 459 – Repeated Substring Pattern ⭐
- [ ] LC 686 – Repeated String Match
- [ ] LC 6 – Zigzag Conversion
- [ ] LC 443 – String Compression

#### Advanced String Matching
- [ ] LC 214 – Shortest Palindrome
- [ ] LC 76 – Minimum Window Substring
- [ ] LC 3 – Longest Substring Without Repeating Characters
- [ ] KMP Algorithm (Pattern Matching)

**Interview Variations**
- Left rotate a string by k positions
- Right rotate a string by k positions
- Check cyclic shifts
- Rotate characters in-place
- Find minimum rotations to match another string

**Common Mistakes**
- Forgetting to check if the strings have equal lengths
- Rotating character by character instead of using the `s + s` trick
- Not handling empty strings
- Using inefficient repeated rotations

**Prerequisites**
- String Traversal
- String Concatenation
- `find()` Function

**Next Problems**
- LC 28 – Find the Index of the First Occurrence in a String
- LC 459 – Repeated Substring Pattern
- LC 686 – Repeated String Match
- KMP Algorithm
---------------------------------------------------------------------------------------------------------------------


* [ ] Valid Palindrome

### LC 125 – Valid Palindrome

**Pattern**
- Two Pointers
- String Manipulation
- Character Filtering

**Concepts Learned**
- Use two pointers from opposite ends
- Ignore non-alphanumeric characters
- Perform case-insensitive comparisons
- Validate a string without creating extra copies
- Use character utility functions (`isalnum()`, `tolower()`)

**Time Complexity**
- O(n)

**Space Complexity**
- O(1)

**Related Problems**

#### Easy
- [ ] LC 344 – Reverse String
- [ ] LC 680 – Valid Palindrome II ⭐
- [ ] LC 345 – Reverse Vowels of a String
- [ ] LC 392 – Is Subsequence
- [ ] LC 844 – Backspace String Compare

#### Medium
- [ ] LC 5 – Longest Palindromic Substring ⭐
- [ ] LC 647 – Palindromic Substrings
- [ ] LC 131 – Palindrome Partitioning
- [ ] LC 516 – Longest Palindromic Subsequence

#### Advanced Palindrome Problems
- [ ] LC 214 – Shortest Palindrome
- [ ] LC 132 – Palindrome Partitioning II
- [ ] LC 336 – Palindrome Pairs
- [ ] Manacher's Algorithm

**Interview Variations**
- Ignore one mismatched character
- Ignore spaces and punctuation
- Check numeric palindromes
- Find the longest palindrome
- Count all palindromic substrings

**Common Mistakes**
- Forgetting to ignore non-alphanumeric characters
- Comparing uppercase and lowercase directly
- Moving pointers incorrectly after skipping characters
- Creating unnecessary extra strings

**Prerequisites**
- Two Pointers
- String Traversal
- Character Functions (`isalnum()`, `tolower()`)

**Next Problems**
- LC 680 – Valid Palindrome II
- LC 345 – Reverse Vowels of a String
- LC 5 – Longest Palindromic Substring
- LC 647 – Palindromic Substrings
---------------------------------------------------------------------------------------------------------------------


* [ ] Find the Index of the First Occurrence in a String

### LC 28 – Find the Index of the First Occurrence in a String

**Pattern**
- String Matching
- Substring Search
- Simulation

**Concepts Learned**
- Search for a substring within a string
- Compare characters efficiently
- Use nested traversal
- Understand the difference between brute force and optimized string matching
- Introduction to KMP (Knuth-Morris-Pratt) Algorithm

**Time Complexity**
- O((n - m + 1) × m) *(Brute Force)*
- O(n + m) *(KMP Algorithm)*

**Space Complexity**
- O(1) *(Brute Force)*
- O(m) *(KMP LPS Array)*

**Related Problems**

#### Easy
- [ ] LC 796 – Rotate String
- [ ] LC 459 – Repeated Substring Pattern
- [ ] LC 392 – Is Subsequence
- [ ] LC 1768 – Merge Strings Alternately

#### Medium
- [ ] LC 686 – Repeated String Match ⭐
- [ ] LC 3 – Longest Substring Without Repeating Characters
- [ ] LC 438 – Find All Anagrams in a String
- [ ] LC 567 – Permutation in String

#### Advanced String Matching
- [ ] LC 214 – Shortest Palindrome
- [ ] LC 30 – Substring with Concatenation of All Words
- [ ] LC 76 – Minimum Window Substring
- [ ] KMP Algorithm ⭐
- [ ] Rabin-Karp Algorithm
- [ ] Z Algorithm

**Interview Variations**
- Find the last occurrence of a substring
- Count all occurrences of a substring
- Search ignoring case
- Search with wildcard characters
- Search multiple patterns simultaneously

**Common Mistakes**
- Incorrect loop boundary (`i <= n - m`)
- Not handling an empty pattern
- Comparing beyond string bounds
- Confusing `find()` with manual implementation

**Prerequisites**
- String Traversal
- Nested Loops
- Character Comparison

**Next Problems**
- LC 796 – Rotate String
- LC 459 – Repeated Substring Pattern
- LC 686 – Repeated String Match
- KMP Algorithm

---------------------------------------------------------------------------------------------------------------------

* [ ] Longest Common Prefix

### LC 14 – Longest Common Prefix

**Pattern**
- String Comparison
- Lexicographical Ordering
- Horizontal & Vertical Scanning

**Concepts Learned**
- Compare multiple strings character by character
- Find the common prefix among a set of strings
- Understand lexicographical (dictionary) ordering
- Optimize comparisons using sorting
- Introduction to Trie-based solutions

**Time Complexity**
- O(n × m) *(Horizontal/Vertical Scanning)*

> `n` = Number of strings  
> `m` = Length of the shortest string

**Space Complexity**
- O(1)

**Related Problems**

#### Easy
- [ ] LC 1768 – Merge Strings Alternately
- [ ] LC 392 – Is Subsequence
- [ ] LC 28 – Find the Index of the First Occurrence in a String
- [ ] LC 796 – Rotate String

#### Medium
- [ ] LC 49 – Group Anagrams ⭐
- [ ] LC 953 – Verifying an Alien Dictionary ⭐
- [ ] LC 648 – Replace Words
- [ ] LC 211 – Design Add and Search Words Data Structure

#### Advanced Prefix / Trie Problems
- [ ] LC 208 – Implement Trie (Prefix Tree) ⭐⭐⭐
- [ ] LC 1268 – Search Suggestions System
- [ ] LC 720 – Longest Word in Dictionary
- [ ] LC 212 – Word Search II

**Interview Variations**
- Longest common suffix
- Longest common substring
- Longest common subsequence
- Auto-complete suggestions
- Prefix matching in a dictionary

**Common Mistakes**
- Accessing characters beyond the shortest string
- Not handling empty strings
- Comparing complete strings instead of character-by-character
- Ignoring lexicographical optimization after sorting

**Prerequisites**
- String Traversal
- Character Comparison
- Lexicographical Ordering

**Next Problems**
- LC 953 – Verifying an Alien Dictionary
- LC 49 – Group Anagrams
- LC 208 – Implement Trie
- LC 1268 – Search Suggestions System

---------------------------------------------------------------------------------------------------------------------


* [ ] Is Subsequence

### LC 392 – Is Subsequence

**Pattern**
- Two Pointers
- String Traversal
- Greedy

**Concepts Learned**
- Traverse two strings simultaneously
- Match characters while preserving order
- Understand subsequence vs substring
- Apply greedy matching
- Foundation for dynamic programming on strings

**Time Complexity**
- O(n + m)

> `n` = Length of `s`  
> `m` = Length of `t`

**Space Complexity**
- O(1)

**Related Problems**

#### Easy
- [ ] LC 1768 – Merge Strings Alternately
- [ ] LC 28 – Find the Index of the First Occurrence in a String
- [ ] LC 125 – Valid Palindrome
- [ ] LC 14 – Longest Common Prefix

#### Medium
- [ ] LC 524 – Longest Word in Dictionary through Deleting ⭐
- [ ] LC 1143 – Longest Common Subsequence (LCS) ⭐⭐⭐
- [ ] LC 97 – Interleaving String
- [ ] LC 72 – Edit Distance

#### Advanced String DP
- [ ] LC 1092 – Shortest Common Supersequence
- [ ] LC 583 – Delete Operation for Two Strings
- [ ] LC 712 – Minimum ASCII Delete Sum for Two Strings

**Interview Variations**
- Check multiple subsequence queries
- Find the longest subsequence
- Count distinct subsequences
- Minimum deletions to make strings equal
- Longest common subsequence

**Common Mistakes**
- Confusing a **subsequence** with a **substring**
- Moving both pointers on a mismatch
- Forgetting that characters must remain in the same relative order
- Not handling an empty string correctly

**Prerequisites**
- String Traversal
- Two Pointers
- Character Comparison

**Next Problems**
- LC 524 – Longest Word in Dictionary through Deleting
- LC 1143 – Longest Common Subsequence
- LC 72 – Edit Distance
- LC 97 – Interleaving String

---------------------------------------------------------------------------------------------------------------------

---

## 👥 Pair

### LC 2341 – Maximum Number of Pairs in Array

**Pattern**
- Hashing
- Frequency Counting
- Pair Formation

**Concepts Learned**
- Count element frequencies
- Form pairs greedily
- Use `unordered_map`
- Compute remaining unpaired elements

**Time Complexity**
- O(n)

**Space Complexity**
- O(n)

**Related Problems**

#### Easy
- [ ] LC 217 – Contains Duplicate
- [ ] LC 242 – Valid Anagram
- [ ] LC 349 – Intersection of Two Arrays
- [ ] LC 1207 – Unique Number of Occurrences

#### Medium
- [ ] LC 347 – Top K Frequent Elements ⭐
- [ ] LC 49 – Group Anagrams
- [ ] LC 451 – Sort Characters By Frequency
- [ ] LC 560 – Subarray Sum Equals K

#### Advanced Hashing
- [ ] LC 128 – Longest Consecutive Sequence
- [ ] LC 454 – 4Sum II
- [ ] LC 974 – Subarray Sums Divisible by K

**Interview Variations**
- Count pairs with equal values
- Count pairs with given difference
- Count pairs with given sum
- Pair elements after sorting

**Common Mistakes**
- Forgetting leftover elements
- Incorrect frequency updates
- Using nested loops instead of hashing

**Prerequisites**
- Arrays
- HashMap

**Next Problems**
- LC 242 – Valid Anagram
- LC 347 – Top K Frequent Elements
- LC 49 – Group Anagrams

---------------------------------------------------------------------------------------------------------------------

### LC 506 – Relative Ranks

**Pattern**
- Sorting
- Pair
- Index Mapping

**Concepts Learned**
- Store value-index pairs
- Sort while preserving original indices
- Map sorted order back to original positions
- Ranking elements

**Time Complexity**
- O(n log n)

**Space Complexity**
- O(n)

**Related Problems**

#### Easy
- [ ] LC 1331 – Rank Transform of an Array ⭐
- [ ] LC 2418 – Sort the People
- [ ] LC 1636 – Sort Array by Increasing Frequency

#### Medium
- [ ] LC 451 – Sort Characters By Frequency
- [ ] LC 56 – Merge Intervals
- [ ] LC 406 – Queue Reconstruction by Height

#### Advanced Sorting
- [ ] LC 347 – Top K Frequent Elements
- [ ] LC 179 – Largest Number
- [ ] LC 215 – Kth Largest Element in an Array

**Interview Variations**
- Assign custom ranks
- Stable sorting
- Sort objects by multiple keys
- Leaderboard ranking

**Common Mistakes**
- Losing original indices
- Incorrect comparator
- Mishandling equal values

**Prerequisites**
- Pair
- Sorting
- Custom Comparator

**Next Problems**
- LC 1331 – Rank Transform of an Array
- LC 2418 – Sort the People
- LC 406 – Queue Reconstruction

---------------------------------------------------------------------------------------------------------------------



---

# ✅ Phase 1 Completion Checklist

Before moving to **Phase 2 (Hashing)**, I should be able to:

* [ ] Use `vector` confidently.
* [ ] Use common STL algorithms without documentation.
* [ ] Manipulate strings efficiently.
* [ ] Work with `pair` and `vector<pair<int, int>>`.
* [ ] Analyze the time and space complexity of my solutions.
* [ ] Solve all Phase 1 problems independently.

---

## 🚀 Next Phase

➡️ **Phase 2 – Hashing (HashMap, HashSet, Frequency Counting, Prefix Sum, Prefix Sum + HashMap)**
