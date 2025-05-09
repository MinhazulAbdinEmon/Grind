// problem link : https://leetcode.com/problems/minimum-bit-flips-to-convert-number/description/
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans = start^goal;
        int cnt=0;
        while(ans){
            if((ans&1) == 1){
                cnt++;
            }
            ans>>=1;

        }
        return cnt;
    }
};
