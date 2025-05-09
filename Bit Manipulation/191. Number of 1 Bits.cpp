// problem link : https://leetcode.com/problems/number-of-1-bits/description/
class Solution {
public:
    int hammingWeight(int n) {
        // fastest way
        // int cnt = 0;
        // while(n){
        //     n = n&(n-1);
        //     cnt++;
        // }
        // return cnt;
        // another approach
        // int cnt =0;
        // while(n){
        //     if((n&1)!=0){
        //         cnt++;
        //     }
        //     n >>= 1;
        // }
        // return cnt;
        // and another one
        int cnt=0;
        for(int i=0;i<32;i++){
            if( (n&(1<<i)) !=0 ){
                cnt ++;
            }
        }
        return cnt;
    }
};
