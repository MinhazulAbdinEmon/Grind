// problem link : https://leetcode.com/problems/reverse-bits/description/
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        vector<int>bin(32,0);
        for(int i=0;i<32;i++){
            if( ((n>>i) & 1) != 0){
                bin[i] = 1;
            }
        }
        uint32_t ans = 0;
        for(int i =31;i>=0;i--){
            if(bin[31-i]==1){
                ans += (1<<i);
            }
        }
        return ans;
    }
};
