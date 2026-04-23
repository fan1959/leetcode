// LeetCode Solution: Substring With Concatenation Of All Words
// Runtime: 23 ms | Memory: 23.5 MB
// Tags: Hash Table, String, Sliding Window
//
// 个人解题思路：
//   - 初始思路: 枚举所有起始位置，取子串验证。
//   - 问题所在: words 数量多时子串很长，O(n * len(words) * words.length) 容易超时。
//   - 改进方法: 滑动窗口，按字符串总长切分所有可能的起始位置，用哈希表计数匹配。
//   - 时间复杂度: O(n * m * k)
//   - 空间复杂度: O(m * k)
//
// --------------------------------------------------

class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> result;
        if (words.empty() || s.empty()) return result;

        int word_len = words[0].length();
        int word_count = words.size();
        int n = s.length();

        unordered_map<string, int> target_map;
        for (string& word : words) {
            target_map[word]++;
        }

        // 外层循环：为了覆盖所有可能的起点，我们需要错开 0 到 word_len-1 个起始位置
        // 比如单词长为3，我们只需要分别从索引 0, 1, 2 开始跳着遍历，就能覆盖所有情况
        for (int i = 0; i < word_len; i++) {
            unordered_map<string, int> temp_map;
            int left = i;  // 窗口左边界
            int right = i; // 窗口右边界
            int valid_count = 0; // 记录当前窗口里有多少个“有效单词”

            // 窗口开始向右按“单词长度”跳跃
            while (right + word_len <= n) {
                // 1. 吃进右边的一个单词
                string curr_word = s.substr(right, word_len);
                right += word_len; 

                // 如果吃进来的单词是目标需要的
                if (target_map.count(curr_word)) {
                    temp_map[curr_word]++;
                    valid_count++;

                    // 2. 如果吃太多了（超标了），左边界就要开始吐，直到恢复正常
                    while (temp_map[curr_word] > target_map[curr_word]) {
                        string left_word = s.substr(left, word_len);
                        temp_map[left_word]--; // 从账本减去
                        valid_count--;         // 有效单词减少
                        left += word_len;      // 左边界向右收缩
                    }

                    // 3. 如果有效单词数量刚刚好，记录答案！
                    if (valid_count == word_count) {
                        result.push_back(left);
                    }
                } 
                // 如果吃进来一个废词，直接清空所有状态，从头再来
                else {
                    temp_map.clear();
                    valid_count = 0;
                    left = right; // 左边界直接跳过这个废词
                }
            }
        }
        return result;
    }
};
