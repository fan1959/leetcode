// LeetCode Solution: Roman To Integer
// Runtime: 0 ms | Memory: 11 MB
// Tags: Hash Table, Math, String
//
// 个人解题思路：
//   - 初始思路: 模拟解析，逐个处理罗马字符。
//   - 问题所在: 需要正确处理减法规则（如 IV=4, IX=9）。
//   - 改进方法: 当前字符比下一个小就减去当前值，否则加上当前值（贪心，从左到右）。
//   - 时间复杂度: O(n)
//   - 空间复杂度: O(1)
//
// --------------------------------------------------

class Solution {
public:
    int romanToInt(string s) {
        int len=s.size();
        int hashtable[128]={0};
        hashtable['I']=1,hashtable['V']=5,hashtable['X']=10,hashtable['L']=50;
        hashtable['C']=100,hashtable['D']=500,hashtable['M']=1000;
        int res=0;
        for(int i=0;i<len;i++){
            if(i+1<len && hashtable[s[i]]>=hashtable[s[i+1]]){
                res+=hashtable[s[i]];
            }
            else if(i+1<len && hashtable[s[i]]<hashtable[s[i+1]]){
                res+=(hashtable[s[i+1]]-hashtable[s[i]]);
                i++;
            }
            else{
                res+=hashtable[s[i]];
            }
        }
        return res;
    }
};
