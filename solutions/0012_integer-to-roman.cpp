// LeetCode Solution: Integer To Roman
// Runtime: 0 ms | Memory: 9.2 MB
// Tags: Hash Table, Math, String
//
// 个人解题思路：
//   - 初始思路: 硬编码所有可能的组合。
//   - 问题所在: 数字范围大时枚举量太大。
//   - 改进方法: 贪心：按权重从大到小用对应罗马符号表示，如 900 = CM。
//   - 时间复杂度: O(1)
//   - 空间复杂度: O(1)
//
// --------------------------------------------------

class Solution {
public:
    string intToRoman(int num) {
        string alpha[13]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        int nums[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        int index=0;
        string res="";
        while(index<13 && num!=0){
            while(num>=nums[index]){
            res+=alpha[index];
            num-=nums[index];
            }
            index++;
        }
        return res;
    }
};
