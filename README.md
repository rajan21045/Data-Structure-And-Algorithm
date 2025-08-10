# Data-Structure-And-Algorithm

A personal learning repository for **Data Structures & Algorithms (DSA)** in **C** — code implementations, problem solutions, class assignments, and resources.  
I'll post **what I learn by self-study** and **what our sir teaches in class**, all implemented in C, to track my progress and strengthen my problem-solving skills.

---

## 🆎 What is DSA?
- **Full form:** DSA stands for **"Data Structures and Algorithms"**.  
- **Definition:**  
  - **Data Structures** — ways of organizing and storing data for efficient access and modification (e.g., Arrays, Linked Lists, Trees, Graphs).  
  - **Algorithms** — step-by-step procedures or formulas for solving problems efficiently.  
- **Why it’s important:** DSA is the backbone of efficient programming, essential for writing optimized code, and a key skill for technical interviews.

---

# 📌 What this repo is for
- Store **C code implementations** of data structures and algorithms.
- Save **classwork and assignments** given by sir.
- Keep **practice problems and challenges** solved by self-study.
- Maintain a **learning log** to track topics covered and progress.

---

# 🚀 Getting started
1. **Pick a programming language** — I am using **C** for all implementations.  
   (You can also use Java, C++, Python, etc., but this repo focuses on C.)
2. **Follow the learning flow**:
   - **Step 1:** Understand the concept (from sir’s lectures or self-study).
   - **Step 2:** Implement the code in C.
   - **Step 3:** Analyze time & space complexity.
   - **Step 4:** Practice problems based on the topic.
3. **Recommended platforms for practice**:
   - [LeetCode](https://leetcode.com)
   - [HackerRank](https://www.hackerrank.com)
   - [Codeforces](https://codeforces.com)
   - [GeeksforGeeks](https://www.geeksforgeeks.org)

---
# ✅ Commit & branch guidelines
1. Branches: main (stable), dev (work-in-progress)
2. Commit format: type(scope): short description
    - Example: feat(stack): add push and pop in C
    - Types: feat, fix, docs, chore, refactor, test
---
# 📚 Resources I use
- [GeeksforGeeks](https://www.geeksforgeeks.org)
- [LeetCode](https://leetcode.com)
- [HackerRank](https://www.hackerrank.com)
- Class notes from sir
- Book: Data Structures Using C by Reema Thareja
- Book: Let Us C by Yashavant Kanetkar

---

# 🎯 Goals & roadmap

•	Short-term:
- Learn and implement basic data structures in C (Array, Stack, Queue, Linked List)
- Understand complexity analysis (Big-O notation)

•	Mid-term:
- Implement trees, heaps, hash tables, graphs in C
- Learn and implement searching & sorting algorithms

•	Long-term:
- Solve 300+ DSA problems in C
- Learn advanced algorithms (Dynamic Programming, Graph algorithms)

--- 

# 📎 Example quick snippet (save as implementations/arrays/insert.c)

#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 4, 5};
    int n = 4; // current size
    int pos = 2; // index to insert
    int val = 3;
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    n++;
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
---

# 🪪 License

This repo is for personal learning. Use code freely but please add attribution if you copy large parts.

