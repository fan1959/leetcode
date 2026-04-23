// LeetCode Solution: Zigzag Conversion
// Runtime: 3 ms | Memory: 13.9 MB
// Tags: String
//
// 个人解题思路：
//   - 初始思路: 按行存储，用方向标志控制何时向下何时向上。
//   - 问题所在: 直接模拟可以，但可以通过数学关系直接计算每行字符。
//   - 改进方法: 维护当前行和方向，按 Z 字形走完所有字符后拼接各行。
//   - 时间复杂度: O(n)
//   - 空间复杂度: O(n)
//
// --------------------------------------------------

class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> map(numRows,"");
        if(numRows==1)return s;
        int dir=1;
        int index=0,row=0;
        while(index<s.size()){
            map[row]+=s[index];
            row+=dir;
            index++;
            if(row==-1 || row==numRows){
                dir=-dir;
                row+=2*dir;
            }
        }
        string result="";
        for(int i=0;i<numRows;i++){
            result+=map[i];
        }
        return result;
    }
};
