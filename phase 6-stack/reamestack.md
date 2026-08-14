<div align="center">

# 🧱 Phase 6 — Stack

### Master Stack from fundamentals → parentheses → simulation → monotonic stack → expression evaluation → advanced patterns

![Progress](https://img.shields.io/badge/Problems_Solved-0%2F30+-red?style=flat-square)
![Patterns](https://img.shields.io/badge/Patterns_Mastered-0%2F7-red?style=flat-square)
![Status](https://img.shields.io/badge/Status-In_Progress-yellow?style=flat-square)
![Difficulty](https://img.shields.io/badge/Level-Intermediate--Advanced-blue?style=flat-square)

</div>

---

## 📑 Table of Contents

- [🎯 Phase Objective](#-phase-objective)
- [📚 Topics Covered](#-topics-covered)
- [🗺️ Pattern Roadmap](#️-pattern-roadmap)
- [📋 Core Problems](#-core-problems)
- [🧠 Pattern Progression](#-pattern-progression)
- [⭐ Most Important Problems](#-most-important-problems)
- [🔥 Monotonic Stack Templates](#-monotonic-stack-templates)
- [📊 Complexity Cheat Sheet](#-complexity-cheat-sheet)
- [🎯 Phase Completion Checklist](#-phase-completion-checklist)
- [🏆 Phase Completion Criteria](#-phase-completion-criteria)
- [🔄 Revision Strategy](#-revision-strategy)
- [📈 Progress](#-progress)
- [🚀 Final Goal](#-final-goal)

---

## 🎯 Phase Objective

By the end of this phase, I should be able to:

- [ ] Understand LIFO completely
- [ ] Implement a stack using arrays/vectors
- [ ] Implement a stack using linked lists
- [ ] Use C++ STL `stack`
- [ ] Recognize when a problem requires a stack
- [ ] Solve parentheses/bracket problems
- [ ] Understand monotonic stacks
- [ ] Solve Next Greater / Smaller Element problems
- [ ] Solve histogram and contribution problems
- [ ] Handle stack-based expression evaluation
- [ ] Recognize when a stack can replace nested loops

---

## 📚 Topics Covered

| # | Topic |
|---|---|
| 1 | Stack Fundamentals |
| 2 | STL `stack` |
| 3 | Stack Implementation |
| 4 | Parentheses Matching |
| 5 | Stack Simulation |
| 6 | Min Stack |
| 7 | Monotonic Stack |
| 8 | Next Greater Element |
| 9 | Next Smaller Element |
| 10 | Previous Greater Element |
| 11 | Previous Smaller Element |
| 12 | Expression Evaluation |
| 13 | String + Stack |
| 14 | Contribution Technique |
| 15 | Histogram Problems |

---

## 🗺️ Pattern Roadmap

<details>
<summary><b>🔹 Stack Fundamentals</b></summary>

```text
📘 Stack Fundamentals

Foundation
├── Implement Stack using Array
├── Implement Stack using Vector
├── Implement Stack using Linked List
└── C++ STL stack

Intermediate
└── Design a Stack with Additional Operations
```
</details>

<details>
<summary><b>🔹 Parentheses & Bracket Matching</b></summary>

```text
📘 Parentheses Matching

Foundation
├── LC 20   – Valid Parentheses
├── LC 1021 – Remove Outermost Parentheses
└── LC 1614 – Maximum Nesting Depth of the Parentheses

Intermediate
├── LC 921  – Minimum Add to Make Parentheses Valid
├── LC 1541 – Minimum Insertions to Balance a Parentheses String
└── LC 1249 – Minimum Remove to Make Valid Parentheses
```
</details>

<details>
<summary><b>🔹 Stack Simulation</b></summary>

```text
📘 Stack Simulation

Foundation
├── LC 682  – Baseball Game
├── LC 844  – Backspace String Compare
└── LC 1047 – Remove All Adjacent Duplicates In String

Intermediate
├── LC 71   – Simplify Path
├── LC 735  – Asteroid Collision
└── LC 1209 – Remove All Adjacent Duplicates in String II

Advanced
└── LC 402  – Remove K Digits
```
</details>

<details>
<summary><b>🔹 Min / Max Stack</b></summary>

```text
📘 Stack with Additional Information

Foundation
└── LC 155 – Min Stack

Intermediate
├── LC 716 – Max Stack
└── Design Stack with GetMin in O(1)
```
</details>

<details>
<summary><b>🔹 Monotonic Stack – Next Greater</b></summary>

```text
📘 Monotonic Stack – Next Greater

Foundation
├── LC 496 – Next Greater Element I
└── LC 739 – Daily Temperatures

Intermediate
├── LC 503  – Next Greater Element II
├── LC 1019 – Next Greater Node In Linked List
└── LC 901  – Online Stock Span

Advanced
└── Next Greater Element in Circular Array
```
</details>

<details>
<summary><b>🔹 Monotonic Stack – Next / Previous Smaller</b></summary>

```text
📘 Monotonic Stack – Smaller Elements

Foundation
├── Next Smaller Element
└── Previous Smaller Element

Intermediate
├── LC 84   – Largest Rectangle in Histogram
├── LC 907  – Sum of Subarray Minimums
└── LC 2104 – Sum of Subarray Ranges

Advanced
└── LC 1856 – Maximum Subarray Min-Product
```
</details>

<details>
<summary><b>🔹 Expression Evaluation</b></summary>

```text
📘 Expression Evaluation

Foundation
└── LC 150 – Evaluate Reverse Polish Notation

Intermediate
├── LC 224 – Basic Calculator
├── LC 227 – Basic Calculator II
└── LC 394 – Decode String

Advanced
└── LC 772 – Basic Calculator III
```
</details>

<details>
<summary><b>🔹 Stack + String</b></summary>

```text
📘 Stack + String

Foundation
├── LC 844  – Backspace String Compare
├── LC 1047 – Remove All Adjacent Duplicates
└── LC 1544 – Make The String Great

Intermediate
├── LC 1209 – Remove All Adjacent Duplicates II
├── LC 394  – Decode String
└── LC 316  – Remove Duplicate Letters

Advanced
└── LC 1081 – Smallest Subsequence of Distinct Characters
```
</details>

<details>
<summary><b>🔹 Contribution / Boundary Technique</b></summary>

```text
📘 Contribution Technique

Foundation
└── LC 84 – Largest Rectangle in Histogram

Intermediate
├── LC 907  – Sum of Subarray Minimums
├── LC 2104 – Sum of Subarray Ranges
└── LC 1856 – Maximum Subarray Min-Product

Advanced
└── LC 2281 – Sum of Total Strength of Wizards
```
</details>

---

## 📋 Core Problems

<details>
<summary><b>1–9 · Fundamentals, Parentheses, Simulation, Min Stack</b></summary>

| # | Problem | Master Pattern | Sub Pattern | Similar Problems |
|---|---|---|---|---|
| 1 | Implement Stack using Array | Stack | LIFO, Array Implementation | Vector/Linked List impl, Two Stacks in One Array, Stack using Queues |
| 2 | LC 20 – Valid Parentheses | Stack | Parentheses Matching | LC 1021, LC 1614, LC 921, LC 1249, LC 1541 |
| 3 | LC 1021 – Remove Outermost Parentheses | Stack | Parentheses Depth | LC 20, LC 1614, LC 921, LC 1249 |
| 4 | LC 1614 – Maximum Nesting Depth | Stack | Balance Counter | LC 20, LC 1021, LC 921, LC 1541 |
| 5 | LC 682 – Baseball Game | Stack | Simulation | LC 844, LC 1047, LC 1544, LC 1209 |
| 6 | LC 844 – Backspace String Compare | Stack | Simulation, String Manipulation | LC 682, LC 1047, LC 1544, LC 71 |
| 7 | LC 1047 – Remove All Adjacent Duplicates | Stack | Adjacent Removal | LC 1544, LC 1209, LC 844, LC 316 |
| 8 | LC 1544 – Make The String Great | Stack | Adjacent Cancellation | LC 1047, LC 1209, LC 844, LC 316 |
| 9 | LC 155 – Min Stack | Stack | Auxiliary Stack, Constant-Time Min | LC 716, Design GetMin(), Min Stack with one stack |

</details>

<details>
<summary><b>10–21 · Monotonic Stack (Next/Previous Greater/Smaller, Histogram, Contribution)</b></summary>

| # | Problem | Master Pattern | Sub Pattern | Similar Problems |
|---|---|---|---|---|
| 10 | LC 496 – Next Greater Element I | Monotonic Stack | Next Greater Element | LC 503, LC 739, LC 901, LC 1019 |
| 11 | LC 503 – Next Greater Element II | Monotonic Stack | Circular Array, Next Greater | LC 496, LC 739, LC 901, NGE Circular |
| 12 | LC 739 – Daily Temperatures | Monotonic Stack | Next Greater Element | LC 496, LC 503, LC 901, LC 1019 |
| 13 | LC 901 – Online Stock Span | Monotonic Stack | Previous Greater Element | LC 496, LC 503, LC 739, LC 84 |
| 14 | LC 1019 – Next Greater Node (Linked List) | Monotonic Stack | Next Greater, Linked List | LC 496, LC 503, LC 739, LC 901 |
| 15 | Next Smaller Element | Monotonic Stack | Next Smaller Element | Previous Smaller, LC 84, LC 907, LC 2104 |
| 16 | Previous Smaller Element | Monotonic Stack | Previous Smaller Element | Next Smaller, LC 84, LC 907, LC 1856 |
| 17 | LC 84 – Largest Rectangle in Histogram | Monotonic Stack | Prev/Next Smaller, Boundary Finding | LC 85, LC 907, LC 2104, LC 1856 |
| 18 | LC 85 – Maximal Rectangle | Monotonic Stack | Histogram, Matrix | LC 84, LC 221, LC 1277 |
| 19 | LC 907 – Sum of Subarray Minimums | Monotonic Stack | Contribution Technique | LC 84, LC 2104, LC 1856, LC 2281 |
| 20 | LC 2104 – Sum of Subarray Ranges | Monotonic Stack | Contribution Technique | LC 907, LC 84, LC 1856, LC 2281 |
| 21 | LC 1856 – Maximum Subarray Min-Product | Monotonic Stack | Contribution, Prefix Sum, Boundary | LC 907, LC 2104, LC 84 |

</details>

<details>
<summary><b>22–30 · Expression Evaluation & Advanced Greedy Stack</b></summary>

| # | Problem | Master Pattern | Sub Pattern | Similar Problems |
|---|---|---|---|---|
| 22 | LC 150 – Evaluate Reverse Polish Notation | Stack | Expression Evaluation | LC 224, LC 227, LC 772, Postfix/Prefix Eval |
| 23 | LC 224 – Basic Calculator | Stack | Expression Evaluation | LC 150, LC 227, LC 772, LC 394 |
| 24 | LC 227 – Basic Calculator II | Stack | Expression Eval, Operator Precedence | LC 150, LC 224, LC 772, LC 394 |
| 25 | LC 394 – Decode String | Stack | Nested Structure, String Construction | LC 224, LC 227, LC 71, LC 1209 |
| 26 | LC 71 – Simplify Path | Stack | String Parsing, Simulation | LC 394, LC 150, LC 844, LC 1021 |
| 27 | LC 735 – Asteroid Collision | Stack | Simulation, Collision | LC 682, LC 1047, LC 1544, LC 402 |
| 28 | LC 402 – Remove K Digits | Monotonic Stack | Greedy, Increasing Stack | LC 316, LC 321, LC 1081 |
| 29 | LC 316 – Remove Duplicate Letters | Monotonic Stack | Greedy, Frequency Counting | LC 1081, LC 402, LC 321 |
| 30 | LC 1081 – Smallest Subsequence of Distinct Characters | Monotonic Stack | Greedy, Frequency Counting | LC 316, LC 402, LC 321 |

</details>

---

## 🧠 Pattern Progression

```text
Stack Fundamentals
        ↓
Parentheses
        ↓
Simulation
        ↓
Min Stack
        ↓
Monotonic Stack
        ↓
Next Greater / Smaller
        ↓
Previous Greater / Smaller
        ↓
Histogram
        ↓
Contribution Technique
        ↓
Expression Evaluation
        ↓
Advanced Stack + Greedy
```

---

## ⭐ Most Important Problems

> If time is limited, prioritize these:

| Priority | Problem |
|---|---|
| ⭐⭐⭐ | LC 20 – Valid Parentheses |
| ⭐⭐⭐ | LC 155 – Min Stack |
| ⭐⭐⭐ | LC 496 – Next Greater Element I |
| ⭐⭐⭐ | LC 503 – Next Greater Element II |
| ⭐⭐⭐ | LC 739 – Daily Temperatures |
| ⭐⭐⭐ | LC 84 – Largest Rectangle in Histogram |
| ⭐⭐⭐ | LC 907 – Sum of Subarray Minimums |
| ⭐⭐⭐ | LC 150 – Evaluate Reverse Polish Notation |
| ⭐⭐⭐ | LC 394 – Decode String |
| ⭐⭐⭐ | LC 402 – Remove K Digits |

---

## 🔥 Monotonic Stack Templates

**Next Greater Element**

```cpp
stack<int> st;

for (int i = n - 1; i >= 0; i--) {

    while (!st.empty() && st.top() <= nums[i]) {
        st.pop();
    }

    // st.top() is next greater

    st.push(nums[i]);
}
```

**Next Smaller Element**

```cpp
stack<int> st;

for (int i = n - 1; i >= 0; i--) {

    while (!st.empty() && st.top() >= nums[i]) {
        st.pop();
    }

    // st.top() is next smaller

    st.push(nums[i]);
}
```

---

## 📊 Complexity Cheat Sheet

| Operation | Complexity |
|---|---:|
| Push | O(1) |
| Pop | O(1) |
| Top | O(1) |
| Empty | O(1) |
| Size | O(1) |
| Monotonic Stack | O(n) |

> Although a monotonic-stack solution contains a `while` loop inside a `for` loop, its total complexity is usually **O(n)** because every element is pushed and popped at most once.

---

## 🎯 Phase Completion Checklist

<details open>
<summary><b>Fundamentals</b></summary>

- [ ] Implement Stack using Array
- [ ] Implement Stack using Vector
- [ ] Implement Stack using Linked List
- [ ] Learn STL `stack`

</details>

<details open>
<summary><b>Parentheses</b></summary>

- [ ] LC 20
- [ ] LC 1021
- [ ] LC 1614
- [ ] LC 921
- [ ] LC 1249
- [ ] LC 1541

</details>

<details open>
<summary><b>Simulation</b></summary>

- [ ] LC 682
- [ ] LC 844
- [ ] LC 1047
- [ ] LC 1544
- [ ] LC 735
- [ ] LC 71

</details>

<details open>
<summary><b>Min Stack</b></summary>

- [ ] LC 155
- [ ] LC 716

</details>

<details open>
<summary><b>Monotonic Stack</b></summary>

- [ ] LC 496
- [ ] LC 503
- [ ] LC 739
- [ ] LC 901
- [ ] LC 1019
- [ ] Next Smaller Element
- [ ] Previous Smaller Element

</details>

<details open>
<summary><b>Histogram / Contribution</b></summary>

- [ ] LC 84
- [ ] LC 85
- [ ] LC 907
- [ ] LC 2104
- [ ] LC 1856

</details>

<details open>
<summary><b>Expression</b></summary>

- [ ] LC 150
- [ ] LC 224
- [ ] LC 227
- [ ] LC 394

</details>

<details open>
<summary><b>Advanced</b></summary>

- [ ] LC 402
- [ ] LC 316
- [ ] LC 1081
- [ ] LC 2281

</details>

---

## 🏆 Phase Completion Criteria

I consider Stack **mastered** when I can:

- [ ] Implement a stack without looking at syntax
- [ ] Identify when LIFO is required
- [ ] Solve bracket matching problems
- [ ] Recognize a monotonic stack
- [ ] Implement next greater element
- [ ] Implement next smaller element
- [ ] Implement previous greater/smaller element
- [ ] Explain why monotonic stack is O(n)
- [ ] Solve Largest Rectangle in Histogram
- [ ] Understand contribution technique
- [ ] Evaluate postfix expressions
- [ ] Handle nested stack problems
- [ ] Solve at least 2 unseen stack problems without help

---

## 🔄 Revision Strategy

**Revision 1** — After 1 day
- Re-solve 3 easy problems
- Re-solve 2 monotonic stack problems

**Revision 2** — After 1 week
- LC 20, LC 155, LC 496, LC 739, LC 84, LC 150

**Revision 3** — After 1 month
- Solve one unseen parentheses problem
- Solve one unseen monotonic stack problem
- Solve one expression problem

---

## 📈 Progress

```text
Phase 6 – Stack

Problems Solved: 0 / 30+
Patterns Mastered: 0 / 7

Foundation        ⬜
Parentheses       ⬜
Simulation        ⬜
Min Stack         ⬜
Monotonic Stack   ⬜
Expressions       ⬜
Contribution      ⬜
```

---

## 🚀 Final Goal

```text
Stack
  ↓
Recognize LIFO
  ↓
Recognize Monotonic Stack
  ↓
Find Boundaries
  ↓
Calculate Contributions
  ↓
Solve O(n) problems
```

> **Don't memorize monotonic-stack code. Understand why elements are popped.**
>
> The key question should always be:
>
> **"What information am I waiting to discover about this element?"**
