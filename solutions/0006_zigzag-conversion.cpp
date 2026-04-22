// LeetCode Solution: Zigzag Conversion
// Runtime: 3 ms | Memory: 13.9 MB
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