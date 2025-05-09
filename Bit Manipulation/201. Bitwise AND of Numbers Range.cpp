// problem link : https://leetcode.com/problems/bitwise-and-of-numbers-range/description/
class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        // approach -1
        // int count =0;
        // while(left != right){
        //     left >>=1;
        //     right >>=1;
        //     count++;
        // }
        // int ans = right<<count;
        // return ans;
        // approach -2
        while(right>left){
            right = right&(right-1);
        }
        return right;
    }
};
