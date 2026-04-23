// LeetCode Solution: String To Integer Atoi
// Runtime: 0 ms | Memory: 9.1 MB
// Tags: String
//
// 个人解题思路：
//   - 初始思路: 逐字符解析，累加数字。
//   - 问题所在: 需要处理前导空格、正负号、溢出、非数字字符。
//   - 改进方法: 状态机处理：跳过空格 → 读符号 → 读数字序列 → 溢出检测。
//   - 时间复杂度: O(n)
//   - 空间复杂度: O(1)
//
// --------------------------------------------------

class Solution {
public:
    int myAtoi(string s) {
        int len=s.size();
        int sign=1;
        int result=0;
        for(int index=0;index<len;index++){
            while(index<len && s[index]==' '){
                index++;
            }
            if(index==len)return 0;
            if(s[index]=='-'){
                sign=-1;
                index++;
            }
            else if(s[index]=='+'){
                index++;
            }
            while(index<len && isdigit(s[index])){
                int num=s[index]-'0';
                if(sign==1){
                    if(result>INT_MAX/10 || (result==INT_MAX/10&& num>7))
                    {
                        return INT_MAX;
                    }
                }
                if(sign==-1){
                    if(-result<INT_MIN/10 ||(-result==INT_MIN/10 && num>=8)){
                        return INT_MIN;
                    }
                }
                result=result*10+num;
                index++;
            }
            break;
        }
        return result*sign;
    }
};
