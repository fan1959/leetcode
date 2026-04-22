// LeetCode Solution: String to Integer (atoi)
// Runtime: 0 ms | Memory: 9.1 MB
// Tags: String
// --------------------------------------------------
// Personal Approach Notes:
//   - Approach: [Solution strategy and key ideas]
//   - Time Complexity: [O(...) - analyze]
//   - Space Complexity: [O(...) - analyze]
//   - Key Insights: [Observations and potential pitfalls]
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