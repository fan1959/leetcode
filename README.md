# LeetCode 解题笔记

> C++ 实现的 LeetCode AC 解题仓库。共 51 题（简单 12 / 中等 31 / 困难 8），每题含运行时间、思路注释、复杂度分析。按题号 + 算法类型双索引组织。

## 统计

| 难度 | 数量 | 占比 |
|---|---|---|
| 简单 🟢 | 12 | 23.5% |
| 中等 🟡 | 31 | 60.8% |
| 困难 🔴 | 8 | 15.7% |
| **总计** | **51** | 100% |

## 算法分布

| 算法类型 | 题数 | 代表题 |
|---|---|---|
| 数组 / 哈希表 | 9 | Two Sum, 3Sum, 4Sum |
| 链表 | 5 | Merge k Sorted Lists, Reverse Nodes in k-Group |
| 字符串 | 11 | Longest Palindromic Substring, Regular Expression Matching |
| 二叉树 / BST | 7 | Validate BST, Recover BST, Unique BST |
| 动态规划 | 8 | Jump Game II, Trapping Rain Water, Sudoku Solver |
| 二分查找 | 4 | Median of Two Sorted Arrays, Search in Rotated Sorted Array |
| 排列 / 回溯 | 5 | Permutations, Combination Sum, Letter Combinations |
| 栈 / 数学 / 矩阵 / 其他 | 4 | Valid Parentheses, Divide Two Integers |

## 完整题单

### 简单 🟢（12）

| # | 题目 | 时间 | 算法 |
|---|---|---|---|
| 1 | Two Sum | 4 ms | 哈希表 |
| 9 | Palindrome Number | 0 ms | 数学 |
| 20 | Valid Parentheses | 0 ms | 栈 |
| 21 | Merge Two Sorted Lists | 3 ms | 链表 |
| 26 | Remove Duplicates from Sorted Array | 0 ms | 双指针 |
| 27 | Remove Element | 0 ms | 双指针 |
| 28 | Find the Index of First Occurrence | 0 ms | 字符串 |
| 35 | Search Insert Position | 0 ms | 二分 |
| 94 | Binary Tree Inorder Traversal | 0 ms | 二叉树 |
| 100 | Same Tree | 0 ms | 二叉树 |
| 101 | Symmetric Tree | 0 ms | 二叉树 |
| 2235 | Add Two Integers | 0 ms | 数学 |

### 中等 🟡（31）

| # | 题目 | 时间 | 算法 |
|---|---|---|---|
| 2 | Add Two Numbers | 2 ms | 链表 |
| 3 | Longest Substring Without Repeating | 0 ms | 滑动窗口 |
| 5 | Longest Palindromic Substring | 16 ms | DP / 中心扩展 |
| 6 | Zigzag Conversion | 3 ms | 字符串 |
| 7 | Reverse Integer | 3 ms | 数学 |
| 8 | String to Integer (atoi) | 0 ms | 字符串 |
| 11 | Container With Most Water | 3 ms | 双指针 |
| 12 | Integer to Roman | 0 ms | 数学 |
| 15 | 3Sum | 83 ms | 排序 + 双指针 |
| 16 | 3Sum Closest | 15 ms | 排序 + 双指针 |
| 17 | Letter Combinations of a Phone | 0 ms | 回溯 |
| 18 | 4Sum | 35 ms | 排序 + 双指针 |
| 19 | Remove Nth Node From End | 0 ms | 链表 + 双指针 |
| 22 | Generate Parentheses | 4 ms | 回溯 |
| 24 | Swap Nodes in Pairs | 0 ms | 链表 |
| 29 | Divide Two Integers | 0 ms | 位运算 |
| 31 | Next Permutation | 0 ms | 数组 |
| 33 | Search in Rotated Sorted Array | 0 ms | 二分 |
| 34 | Find First and Last Position | 0 ms | 二分 |
| 36 | Valid Sudoku | 4 ms | 矩阵 |
| 40 | Combination Sum II | 4 ms | 回溯 |
| 43 | Multiply Strings | 3 ms | 字符串 |
| 45 | Jump Game II | 0 ms | 贪心 |
| 46 | Permutations | 0 ms | 回溯 |
| 47 | Permutations II | 0 ms | 回溯 |
| 48 | Rotate Image | 0 ms | 矩阵 |
| 49 | Group Anagrams | 19 ms | 哈希表 |
| 95 | Unique BST II | 4 ms | DP + 递归 |
| 96 | Unique BST | 0 ms | DP |
| 98 | Validate BST | 0 ms | 中序遍历 |
| 99 | Recover BST | 0 ms | Morris 遍历 |

### 困难 🔴（8）

| # | 题目 | 时间 | 算法 |
|---|---|---|---|
| 4 | Median of Two Sorted Arrays | 7 ms | 二分 |
| 10 | Regular Expression Matching | 4 ms | DP |
| 23 | Merge k Sorted Lists | 3 ms | 堆 / 分治 |
| 25 | Reverse Nodes in k-Group | 0 ms | 链表 |
| 32 | Longest Valid Parentheses | 3 ms | DP / 栈 |
| 37 | Sudoku Solver | 124 ms | 回溯 |
| 41 | First Missing Positive | 3 ms | 原地哈希 |
| 42 | Trapping Rain Water | 3 ms | 双指针 / DP |

## 注释风格

每题 `.cpp` 顶部按统一格式写思路：

```cpp
// LeetCode Solution: Two Sum
// Runtime: 4 ms | Memory: 12 MB
// Tags: 数组 / 哈希表
// --------------------------------------------------
// Personal Approach Notes:
// 1. 思路：一遍哈希。遍历时检查 (target - nums[i]) 是否在 map 里
// 2. 关键：先查后插，避免 i==j 边界
// 3. 复杂度：O(n) 时间 / O(n) 空间
// 4. 易错点：插入顺序不能反（会匹配到自己）
// --------------------------------------------------
```

## 刷题心得

### 通用 5 步法

1. **读题 + 举例**：手动跑示例，确认理解
2. **暴力思路 + 复杂度**：先想最简单的做法
3. **优化观察**：找重复计算 / 剪枝 / 边界特判
4. **数据范围反推算法**：n ≤ 10³ → O(n²)；n ≤ 10⁵ → O(n log n)；n ≤ 10⁶ → O(n)；n ≥ 10⁹ → O(√n) / O(log n)
5. **代码 + 边界 + 测试**：先 happy path，再补空/单元素/重复/极值

### 高频技巧

- **哈希表** 是万能钥匙——Two Sum、Group Anagrams、First Missing Positive 全是 hash map 变体
- **双指针** 处理有序数组问题——3Sum、4Sum、Container With Most Water、Trapping Rain Water
- **二分查找** 不仅要会写 `while (l <= r)`，更要理解"找第一个"vs"找最后一个"vs"找插入位置"的细微差别
- **链表** 题 90% 是 dummy node + 双指针（快慢指针 / 间隔指针）
- **DP** 的关键不是背状态转移方程，而是想清楚"子问题是什么"和"怎么从子问题组合"

### 最难的 3 题

1. **Sudoku Solver（124 ms）**：回溯 + 剪枝，需要同时维护行/列/宫格三个约束
2. **Regular Expression Matching（4 ms）**：DP 经典题，`*` 匹配零次或多次的逻辑容易写反
3. **Merge k Sorted Lists（3 ms）**：堆 vs 分治的权衡——堆 O(N log k) 空间 O(k)，分治 O(N log k) 空间 O(1)

## 工具

- **IDE**: CLion / VSCode + C++ 扩展
- **编译器**: g++ 11 (C++17)
- **平台**: LeetCode（https://leetcode.cn）
- **风格**: Google C++ Style

## 协议

本仓库为个人学习笔记，代码仅供交流参考。题面版权归 LeetCode。

## 仓库

- **GitHub**: https://github.com/fan1959/leetcode
- **语言**: C++ (C++17)
- **题目数**: 51
