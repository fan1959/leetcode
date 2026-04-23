// LeetCode Solution: Count And Say
// Runtime: 8 ms | Memory: 9.7 MB
// Tags: String
//
// 个人解题思路：
//   - 初始思路: 递归描述前一个字符串。
//   - 问题所在: -
//   - 改进方法: 迭代：第 n 项由第 n-1 项读出，读的方式是数连续相同字符的个数再说出该数字。
//   - 时间复杂度: O(n·m)
//   - 空间复杂度: O(m)
//
// --------------------------------------------------

class Solution {
public:
    string countAndSay(int n) {
        string res="1";
        for( int i=1;i<n;i++){
            string temp="";
            for(int j=0;j<res.size();j++){
                int count=1;
                while(j+1<res.size() && res[j]==res[j+1]){
                    count++;
                    j++;
                }
                temp+=to_string(count)+res[j];
            }
            res=temp;
        }
        return res;
    }
};
