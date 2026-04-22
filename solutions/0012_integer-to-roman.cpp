// LeetCode Solution: Integer to Roman
// Runtime: 0 ms | Memory: 9 MB
// Tags: Hash Table, Math, String
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
    string intToRoman(int num) {
        string result="";
        int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        for(int i=0;i<13;){
            if(num>=values[i]){
                num-=values[i];
                result+=symbols[i];
                continue;
            }
            i++;
        }
        return result;
    }
};