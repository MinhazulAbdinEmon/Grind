// problem link : https://leetcode.com/problems/minimum-number-of-operations-to-make-array-xor-equal-to-k/description/

class Solution {
public:
    int bitBlade(int x){
        int cnt =0;
        while(x){
            x = x&(x-1);
            cnt++;
        }
        return cnt;
    }
    int minOperations(vector<int>& nums, int k) {
        // my intitution
        // int ans =0;
        // int Xor = 0;
        // for(int n : nums){
        //     Xor ^= n;
        // }
        // if(Xor == k) return 0;
        // int ith = 0;
        // for(int i=0;i<32;i++){
        //     int a=(Xor&1);
        //     int b = (k&1); 
        //     if( a!=b ){
        //         ans++;
        //     }
        //     Xor>>=1;
        //     k>>= 1;
        //     // ith++;
        // }
        // return ans;

        // 2nd approach from (COdeStoryMik)
        int ans = 0;
        int Xor=0;
        for(int n : nums){
            Xor ^= n;
        }
        int final_val = Xor^k;
        ans = bitBlade(final_val);
        return ans;

    }
};
