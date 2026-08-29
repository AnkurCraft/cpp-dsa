# C++ DSA

> A structured, comprehensive learning path for mastering **Data Structures & Algorithms in C++** — from programming fundamentals to advanced algorithms, problem-solving patterns, and interview-level practice.

---

## 📌 About

**C++ DSA** is a structured repository for learning, implementing, and practicing **Data Structures and Algorithms using modern C++**.

The goal is simple:

> **Learn the concept → Understand the intuition → Study the implementation → Analyze complexity → Solve problems → Master the pattern.**

This repository is organized as a progressive learning path so that you can start with the fundamentals and gradually move toward advanced data structures, algorithms, and problem-solving techniques.

Whether you are learning DSA for the first time, preparing for technical interviews, practicing competitive programming, or strengthening your algorithmic thinking, this repository is designed to provide a clear path forward.

---

## 🎯 What You'll Find

* 📖 C++ fundamentals required for DSA
* 🧮 Time and space complexity analysis
* 🧱 Core data structures
* ⚙️ Fundamental and advanced algorithms
* 🧠 Problem-solving patterns
* 💻 Clean C++ implementations
* 🧩 Practice problems
* 📊 Complexity analysis
* 🔍 Searching and sorting techniques
* 🌳 Trees, BSTs, heaps, and tries
* 🕸️ Graph algorithms
* 🧠 Dynamic programming
* 🔙 Recursion and backtracking
* ⚡ Bit manipulation
* 🔢 Number theory
* 🧰 Advanced data structures
* 📚 Cheat sheets and references
* 🗺️ Structured learning roadmaps

---

# 🗺️ Learning Roadmap

Follow the sections in order if you are learning DSA from the beginning.

| #  | Topic                                                    | Level           |
| -- | -------------------------------------------------------- | --------------- |
| 00 | [C++ Fundamentals](00-Cpp-Fundamentals/)                 | 🟢 Beginner     |
| 01 | [Complexity Analysis](01-Complexity/)                    | 🟢 Beginner     |
| 02 | [Arrays](02-Arrays/)                                     | 🟢 Beginner     |
| 03 | [Strings](03-Strings/)                                   | 🟢 Beginner     |
| 04 | [Searching](04-Searching/)                               | 🟢 Beginner     |
| 05 | [Sorting](05-Sorting/)                                   | 🟢 Beginner     |
| 06 | [Linked Lists](06-Linked-Lists/)                         | 🟡 Intermediate |
| 07 | [Stack](07-Stack/)                                       | 🟡 Intermediate |
| 08 | [Queue](08-Queue/)                                       | 🟡 Intermediate |
| 09 | [Hashing](09-Hashing/)                                   | 🟡 Intermediate |
| 10 | [Recursion](10-Recursion/)                               | 🟡 Intermediate |
| 11 | [Backtracking](11-Backtracking/)                         | 🟡 Intermediate |
| 12 | [Trees](12-Trees/)                                       | 🟡 Intermediate |
| 13 | [Binary Search Trees](13-BST/)                           | 🟡 Intermediate |
| 14 | [Heap](14-Heap/)                                         | 🟡 Intermediate |
| 15 | [Greedy Algorithms](15-Greedy/)                          | 🟡 Intermediate |
| 16 | [Graphs](16-Graphs/)                                     | 🔴 Advanced     |
| 17 | [Dynamic Programming](17-Dynamic-Programming/)           | 🔴 Advanced     |
| 18 | [Tries](18-Tries/)                                       | 🔴 Advanced     |
| 19 | [Bit Manipulation](19-Bit-Manipulation/)                 | 🟡 Intermediate |
| 20 | [Number Theory](20-Number-Theory/)                       | 🔴 Advanced     |
| 21 | [Advanced Data Structures](21-Advanced-Data-Structures/) | 🔴 Advanced     |
| 22 | [Advanced Algorithms](22-Advanced-Algorithms/)           | 🔴 Advanced     |

---

# 🧠 Problem-Solving Patterns

Learning individual algorithms is important, but recognizing **patterns** is what makes problem solving scalable.

Explore the dedicated [Patterns](Patterns/) section to learn reusable approaches such as:

* Two Pointers
* Sliding Window
* Prefix Sum
* Binary Search
* Fast & Slow Pointers
* Divide and Conquer
* Recursion
* Backtracking
* Greedy
* Hashing
* Monotonic Stack
* Heap / Priority Queue
* Graph Traversal
* Dynamic Programming
* Bit Manipulation

The objective is not simply to memorize solutions.

> **Understand why a pattern works, recognize when it applies, and derive the solution yourself.**

---

# 🧩 Practice Problems

The [Problems](Problems/) section is intended for deliberate practice.

A good progression is:

```text
Understand the concept
        ↓
Implement the data structure / algorithm
        ↓
Solve basic problems
        ↓
Solve pattern-based problems
        ↓
Solve mixed problems
        ↓
Solve advanced problems
        ↓
Review and optimize
```

When solving a problem, try to answer:

1. What is the brute-force approach?
2. What is its time complexity?
3. What is its space complexity?
4. What is the bottleneck?
5. Which data structure or algorithm can improve it?
6. What pattern does the problem represent?
7. Can the solution be optimized further?

---

# 📊 Complexity

Understanding complexity is a fundamental part of DSA.

You should be able to recognize the difference between:

```text
O(1)
O(log n)
O(n)
O(n log n)
O(n²)
O(n³)
O(2ⁿ)
O(n!)
```

See the [Complexity](01-Complexity/) section and [Cheat Sheets](Cheat-Sheets/) for quick references.

---

# 💻 C++ Implementations

The implementations throughout this repository are written in **C++** and are intended to prioritize:

* Readability
* Correctness
* Simplicity
* Understandable naming
* Appropriate use of the STL
* Complexity awareness
* Reusability

The goal is not to write the shortest possible code.

The goal is to write code that helps you **understand the underlying algorithm**.

---

# 🧰 C++ STL

A strong DSA foundation also requires familiarity with the C++ Standard Template Library.

Important components include:

```text
vector
array
string
deque
list
stack
queue
priority_queue
set
multiset
map
unordered_set
unordered_map
pair
tuple
algorithm
numeric
```

The STL should be learned alongside DSA rather than treated as a separate subject.

---

# 🛠️ How to Run

You can compile individual C++ programs using a C++ compiler such as **G++**.

### Compile

```bash
g++ filename.cpp -o program
```

### Run on Windows

```bash
program.exe
```

### Run on Linux / macOS

```bash
./program
```

For example:

```bash
g++ 02-Arrays/two_sum.cpp -o two_sum
```

Then:

```bash
./two_sum
```

Make sure your compiler supports the C++ standard required by the program.

---

# 🧪 Testing

Where applicable, implementations should be tested against:

* Normal cases
* Boundary cases
* Empty input
* Single-element input
* Duplicate values
* Large inputs
* Already sorted input
* Reverse-sorted input
* Negative values
* Overflow-sensitive cases

Correctness comes before optimization.

---

# 📚 Recommended Learning Order

If you are completely new to DSA:

### Phase 1 — Programming Foundation

```text
C++ Fundamentals
↓
Functions
↓
Arrays
↓
Strings
↓
Pointers & References
↓
STL
```

### Phase 2 — Algorithmic Foundation

```text
Complexity Analysis
↓
Searching
↓
Sorting
↓
Recursion
```

### Phase 3 — Core Data Structures

```text
Linked Lists
↓
Stack
↓
Queue
↓
Hashing
↓
Trees
↓
BST
↓
Heap
```

### Phase 4 — Problem Solving

```text
Two Pointers
Sliding Window
Prefix Sum
Binary Search
Greedy
Backtracking
```

### Phase 5 — Advanced DSA

```text
Graphs
↓
Dynamic Programming
↓
Tries
↓
Advanced Data Structures
↓
Advanced Algorithms
```

---

# 🗺️ Practice Roadmaps

Use the [Practice Roadmaps](Practice-Roadmaps/) section to structure your preparation.

Available progression paths include:

* [30-Day Roadmap](Practice-Roadmaps/)
* [60-Day Roadmap](Practice-Roadmaps/)
* [90-Day Roadmap](Practice-Roadmaps/)

Choose the schedule that matches your available time.

Consistency matters more than speed.

---

# 📋 Cheat Sheets

The [Cheat Sheets](Cheat-Sheets/) section provides quick references for revision.

Use them for:

* Complexity
* C++ STL
* Algorithms
* Data structures
* Common patterns
* Important formulas
* Quick revision before interviews or contests

Cheat sheets are intended for **revision**, not as a replacement for understanding the concepts.

---

# 🎓 Who Is This For?

This repository is useful for:

* 🌱 Beginners learning DSA
* 💻 C++ programmers
* 🎓 Computer science students
* 🧑‍💻 Interview preparation
* 🏆 Competitive programming
* 🧠 Algorithmic problem solving
* 🔄 Anyone revising DSA fundamentals
* 🚀 Learners progressing toward advanced DSA

---

# 📈 How to Use This Repository Effectively

Don't try to memorize every implementation.

Instead:

### 1. Learn

Understand the concept and intuition.

### 2. Implement

Write the algorithm yourself.

### 3. Analyze

Determine its time and space complexity.

### 4. Practice

Solve problems without immediately looking at the solution.

### 5. Review

Compare your approach with alternative solutions.

### 6. Optimize

Ask whether the solution can be improved.

### 7. Repeat

Return to difficult topics after gaining more experience.

---

# 🏗️ Repository Philosophy

This repository follows a simple principle:

> **DSA is not about memorizing algorithms. It is about learning how to think algorithmically.**

A good DSA learner should gradually develop the ability to:

```text
Understand
    ↓
Model
    ↓
Choose
    ↓
Implement
    ↓
Analyze
    ↓
Optimize
    ↓
Generalize
```

The ultimate goal is to recognize the structure of a problem and independently derive an effective solution.

---

# 🤝 Contributing

Contributions and improvements are welcome.

You can contribute by:

* Fixing bugs
* Improving explanations
* Adding test cases
* Adding useful problems
* Improving implementations
* Adding missing algorithms
* Improving documentation
* Reporting incorrect or unclear content

Before contributing, please read the repository's contribution guidelines.

---

# ⭐ Support the Project

If you find this repository useful:

* ⭐ Star the repository
* 🍴 Fork it
* 🧩 Practice the problems
* 💡 Suggest improvements
* 🤝 Contribute
* 📢 Share it with other learners

---

# 📜 License

This project is licensed under the **MIT License**.

See [LICENSE](LICENSE) for details.

---

## 🚀 Start Learning

If you're starting from the beginning, begin here:

**[C++ Fundamentals →](00-Cpp-Fundamentals/)**

Then follow the roadmap step by step.

> **Learn C++. Understand DSA. Recognize patterns. Solve problems. Build mastery.**
