# LeetCode 解题笔记

> 我的 LeetCode AC 解题代码 + 思路笔记，C++ 实现。共 51 题（简单 12 / 中等 31 / 困难 8），每题含运行时间 + 思路注释。

## 项目简介

本仓库收录我刷 LeetCode 时 AC 的所有题目，按题号 + 难度组织。每题一个 .cpp 文件，**解题思路直接写在代码注释顶部**，不另写 README.md / 博客。

- **语言**：C++（C++17）
- **题目数**：51（Easy 12 / Medium 31 / Hard 8）
- **题源**：LeetCode（https://leetcode.cn）
- **运行时间**：基于 LeetCode 提交结果（ms）

## 统计

| 难度 | 数量 |
|---|---|
| 简单 🟢 | 12 |
| 中等 🟡 | 31 |
| 困难 🔴 | 8 |
| **总计** | **51** |

## 按算法类型分类

### 📊 数组 / 哈希表

- 🟢 [1] Two Sum（两数之和）
- 🟢 [26] Remove Duplicates from Sorted Array（删除有序数组中的重复项）
- 🟢 [27] Remove Element（移除元素）
- 🟢 [35] Search Insert Position（搜索插入位置）
- 🟢 [2235] Add Two Integers（两整数相加）
- 🟡 [15] 3Sum（三数之和）
- 🟡 [16] 3Sum Closest（最接近的三数之和）
- 🟡 [18] 4Sum（四数之和）
- 🟡 [48] Rotate Image（旋转图像）

### 🔗 链表

- 🟢 [21] Merge Two Sorted Lists（合并两个有序链表）
- 🟡 [19] Remove Nth Node From End of List（删除链表的倒数第 N 个节点）
- 🟡 [24] Swap Nodes in Pairs（两两交换链表中的节点）
- 🔴 [23] Merge k Sorted Lists（合并 K 个升序链表）
- 🔴 [25] Reverse Nodes in k-Group（K 个一组翻转链表）

### 📝 字符串

- 🟢 [9] Palindrome Number（回文数）
- 🟢 [20] Valid Parentheses（有效的括号）
- 🟢 [28] Find the Index of the First Occurrence in a String（找出字符串中第一个匹配项的下标）
- 🟡 [5] Longest Palindromic Substring（最长回文子串）
- 🟡 [6] Zigzag Conversion（Z 字形变换）
- 🟡 [7] Reverse Integer（整数反转）
- 🟡 [8] String to Integer (atoi)（字符串转换整数）
- 🟡 [43] Multiply Strings（字符串相乘）
- 🟡 [49] Group Anagrams（字母异位词分组）
- 🔴 [10] Regular Expression Matching（正则表达式匹配）
- 🔴 [32] Longest Valid Parentheses（最长有效括号）

### 🌲 二叉树 / BST

- 🟢 [94] Binary Tree Inorder Traversal（二叉树的中序遍历）
- 🟢 [100] Same Tree（相同的树）
- 🟢 [101] Symmetric Tree（对称的二叉树）
- 🟡 [95] Unique Binary Search Trees II（不同的二叉搜索树 II）
- 🟡 [96] Unique Binary Search Trees（不同的二叉搜索树）
- 🟡 [98] Validate Binary Search Tree（验证二叉搜索树）
- 🟡 [99] Recover Binary Search Tree（恢复二叉搜索树）

### 🪟 栈 / 队列

- 🟡 [22] Generate Parentheses（括号生成）
- 🔴 [32] Longest Valid Parentheses（最长有效括号）

### 🔢 数学 / 位运算

- 🟡 [7] Reverse Integer（整数反转）
- 🟡 [12] Integer to Roman（整数转罗马数字）
- 🟡 [29] Divide Two Integers（两数相除）

### 🔍 二分查找

- 🟢 [35] Search Insert Position（搜索插入位置）
- 🟡 [33] Search in Rotated Sorted Array（搜索旋转排序数组）
- 🟡 [34] Find First and Last Position of Element in Sorted Array（在排序数组中查找元素的第一个和最后一个位置）
- 🔴 [4] Median of Two Sorted Arrays（寻找两个正序数组的中位数）

### 🎲 动态规划

- 🟡 [45] Jump Game II（跳跃游戏 II）
- 🟡 [95] Unique Binary Search Trees II（不同的二叉搜索树 II）
- 🟡 [96] Unique Binary Search Trees（不同的二叉搜索树）
- 🔴 [10] Regular Expression Matching（正则表达式匹配）
- 🔴 [32] Longest Valid Parenthesis（最长有效括号）
- 🔴 [37] Sudoku Solver（解数独）
- 🔴 [41] First Missing Positive（缺失的第一个正数）
- 🔴 [42] Trapping Rain Water（接雨水）

### 🔀 排列 / 组合 / 回溯

- 🟡 [17] Letter Combinations of a Phone Number（电话号码的字母组合）
- 🟡 [22] Generate Parentheses（括号生成）
- 🟡 [40] Combination Sum II（组合总和 II）
- 🟡 [46] Permutations（全排列）
- 🟡 [47] Permutations II（全排列 II）

### 🪟 矩阵

- 🟡 [36] Valid Sudoku（有效的数独）
- 🟡 [48] Rotate Image（旋转图像）
- 🔴 [37] Sudoku Solver（解数独）

### 🌍 其它

- 🟡 [11] Container With Most Water（盛最多水的容器）
- 🟡 [31] Next Permutation（下一个排列）

## 完整题号清单（按题号排序）

### 简单 🟢（12）

| # | 题目 | 运行时间 |
|---|---|---|
| 1 | Two Sum（两数之和） | 4 ms |
| 9 | Palindrome Number（回文数） | 0 ms |
| 20 | Valid Parentheses（有效的括号） | 0 ms |
| 21 | Merge Two Sorted Lists（合并两个有序链表） | 3 ms |
| 26 | Remove Duplicates from Sorted Array | 0 ms |
| 27 | Remove Element | 0 ms |
| 28 | Find the Index of the First Occurrence in a String | 0 ms |
| 35 | Search Insert Position | 0 ms |
| 94 | Binary Tree Inorder Traversal | 0 ms |
| 100 | Same Tree | 0 ms |
| 101 | Symmetric Tree | 0 ms |
| 2235 | Add Two Integers | 0 ms |

### 中等 🟡（31）

| # | 题目 | 运行时间 |
|---|---|---|
| 2 | Add Two Numbers（两数相加） | 2 ms |
| 3 | Longest Substring Without Repeating Characters | 0 ms |
| 5 | Longest Palindromic Substring | 16 ms |
| 6 | Zigzag Conversion | 3 ms |
| 7 | Reverse Integer | 3 ms |
| 8 | String to Integer (atoi) | 0 ms |
| 11 | Container With Most Water | 3 ms |
| 12 | Integer to Roman | 0 ms |
| 15 | 3Sum | 83 ms |
| 16 | 3Sum Closest | 15 ms |
| 17 | Letter Combinations of a Phone Number | 0 ms |
| 18 | 4Sum | 35 ms |
| 19 | Remove Nth Node From End of List | 0 ms |
| 22 | Generate Parentheses | 4 ms |
| 24 | Swap Nodes in Pairs | 0 ms |
| 29 | Divide Two Integers | 0 ms |
| 31 | Next Permutation | 0 ms |
| 33 | Search in Rotated Sorted Array | 0 ms |
| 34 | Find First and Last Position of Element in Sorted Array | 0 ms |
| 36 | Valid Sudoku | 4 ms |
| 40 | Combination Sum II | 4 ms |
| 43 | Multiply Strings | 3 ms |
| 45 | Jump Game II | 0 ms |
| 46 | Permutations | 0 ms |
| 47 | Permutations II | 0 ms |
| 48 | Rotate Image | 0 ms |
| 49 | Group Anagrams | 19 ms |
| 95 | Unique Binary Search Trees II | 4 ms |
| 96 | Unique Binary Search Trees | 0 ms |
| 98 | Validate Binary Search Tree | 0 ms |
| 99 | Recover Binary Search Tree | 0 ms |

### 困难 🔴（8）

| # | 题目 | 运行时间 |
|---|---|---|
| 4 | Median of Two Sorted Arrays | 7 ms |
| 10 | Regular Expression Matching | 4 ms |
| 23 | Merge k Sorted Lists | 3 ms |
| 25 | Reverse Nodes in k-Group | 0 ms |
| 32 | Longest Valid Parentheses | 3 ms |
| 37 | Sudoku Solver | 124 ms |
| 41 | First Missing Positive | 3 ms |
| 42 | Trapping Rain Water | 3 ms |

## 注释风格

每题 `.cpp` 文件顶部按以下格式写思路笔记：

```cpp
// LeetCode Solution: <题目英文名>
// Runtime: <runtime> ms | Memory: <memory> MB
// Tags: <算法标签>
// --------------------------------------------------
// Personal Approach Notes: <思路>
// --------------------------------------------------
// 1. 思路分析
// 2. 关键观察
// 3. 时间/空间复杂度
// 4. 易错点
// --------------------------------------------------
```

例：

```cpp
// LeetCode Solution: Two Sum
// Runtime: 4 ms | Memory: 12 MB
// Tags: 数组 / 哈希表
// --------------------------------------------------
// Personal Approach Notes:
// 1. 思路：一遍哈希。遍历数组时检查 (target - nums[i]) 是否在哈希表里
// 2. 关键：边遍历边查，第一次遇到 complement 时插入当前元素
// 3. 复杂度：O(n) 时间 / O(n) 空间
// 4. 易错点：插入顺序要先查后插（避免 i==j 的边界）
// --------------------------------------------------
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (m.count(complement)) return {m[complement], i};
            m[nums[i]] = i;
        }
        return {};
    }
};
```

## 解题心得

刷题通用的 5 步法：

1. **读题 + 举例验证**：把示例手动跑一遍，确认理解题意
2. **暴力思路 + 时空复杂度**：先想最简单的方法，写出复杂度
3. **优化观察**：找重复计算 / 可剪枝 / 边界情况
4. **数据范围反推算法**：n ≤ 10^4 → O(n²) / O(n log n)；n ≤ 10^6 → O(n) / O(n log n)；n ≤ 10^9 → O(√n) / O(log n) / 数学公式
5. **代码 + 边界 + 测试**：先写 happy path，再补边界（空 / 1 个 / 重复 / 最大值）

## 工具

- **IDE**: CLion / VSCode + C++ 扩展
- **编译器**: g++ 11 (C++17)
- **提交平台**: LeetCode（https://leetcode.cn）
- **风格**: Google C++ Style

## 协议

本仓库为个人学习笔记，代码仅供交流参考。题面版权归 LeetCode。

## 仓库

- **GitHub**: https://github.com/fan1959/leetcode
- **题源**: https://leetcode.cn
- **语言**: C++ (C++17)
