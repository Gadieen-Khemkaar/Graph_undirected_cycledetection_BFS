# 🔄 Cycle Detection in Undirected Graph

This project demonstrates how to detect a **cycle in an undirected graph** using **Depth First Search (DFS)** and **Disjoint Set Union (DSU / Union-Find)** in C++.

---

## 📌 Problem Statement

Given an undirected graph, determine whether it contains a **cycle**.  
A cycle exists if there is a path from a node back to itself **without reusing any edge**.

---

## ✅ Approaches Used

### 1. 🔍 DFS-Based Cycle Detection
- Maintain a `visited[]` array.
- Recursively visit unvisited neighbors.
- If a visited neighbor is **not the parent**, a cycle is detected.

Sure bhai! Let’s break down the **DFS-based cycle detection in an undirected graph** step-by-step in a super easy way.

---

## 🔍 **DFS-Based Cycle Detection in Undirected Graph**

### 💡 **Main Idea:**

In a **DFS traversal**, if we revisit a **visited node** that is **not the parent** of the current node, it means we’ve found a **cycle**.

---

### 🛠️ **Why Do We Need the Parent Check?**

In **undirected graphs**, edges go both ways.
So if you're at node `A` and you go to `B`, then `B` will also be connected back to `A`.

👉 To **avoid falsely detecting a cycle**, we must ignore the **parent node** during DFS.
If we find a **visited neighbor that's NOT the parent**, then that means we took a round trip — a cycle.

---

### ✅ **Step-by-Step Approach:**

Let’s say we have:

```
0 -- 1
|    |
3 -- 2
```

### 👇 DFS Logic:

1. Start DFS from node `0`.
2. Mark node `0` as visited.
3. Visit neighbor `1`. Mark `1` as visited. Parent = 0.
4. Visit neighbor `2`. Mark `2` as visited. Parent = 1.
5. Visit neighbor `3`. Mark `3` as visited. Parent = 2.
6. Visit neighbor `0`. It's **already visited**, and it’s **not the parent of 3** → ✅ Cycle detected!


---

### 📦 Summary

| Step                                         | Meaning                                      |
| -------------------------------------------- | -------------------------------------------- |
| `visited[]`                                  | Keeps track of visited nodes                 |
| `parent`                                     | To avoid counting the previous node as cycle |
| `if visited[neighbor] && neighbor != parent` | ➡️ Cycle Detected                            |
