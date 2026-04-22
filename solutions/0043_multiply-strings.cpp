// LeetCode Solution: Multiply Strings
// Runtime: 3 ms | Memory: 9.5 MB
// Tags: Math, String, Simulation
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
    string multiply(string num1, string num2) {
        int n1=num1.size(),n2=num2.size();
        if(num1=="0" || num2=="0")return "0";
        vector<int>res(n1+n2,0);
        for(int i=n1-1;i>=0;i--){
            for(int j=n2-1;j>=0;j--){
                int sum=(num1[i]-'0')*(num2[j]-'0');
                int temp=sum+res[i+j+1];
                res[i+j+1]=temp%10;
                res[i+j]+=temp/10;
            }
        }
        string result="";
        if(res[0]==0){
            for(int i=1;i<n1+n2;i++){
                result+=res[i]+'0';
            }
        }
        else{
            for(int i=0;i<n1+n2;i++){
                result+=res[i]+'0';
            }
        }
        return result;
    }
};