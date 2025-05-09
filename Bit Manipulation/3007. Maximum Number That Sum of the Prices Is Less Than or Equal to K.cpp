// problem link: https://leetcode.com/problems/maximum-number-that-sum-of-the-prices-is-less-than-or-equal-to-k/description/
class Solution {
public:
    // Brute FOrce -- 
    // int countSetBits(long long i, int x){
    //     int cnt=0;
    //     i>>=x-1;
    //     while(i){
    //         if(  i&1 ){
    //             cnt++;
    //         }


    //         i>>=x;
    //     }
    //     return cnt;
    // }
    // long long findMaximumNumber(long long k, int x) {
    //     long long ans =0;
    //     long long i =0,j=0;
    //     while(ans<=k){
    //         int bits = countSetBits(i,x);
    //         ans += bits;
    //         if(ans<=k){
    //             j++;
                
    //         }
    //         if(ans>k)break;
    //         i++;
            
    //     }
    //     return j-1;
    // }
    // Using recursion and binary search
    
    void countSetBits(long long x,vector<long long> &bits){
        if(x == 0)return ;
        if(x == 1){
            bits[0] += 1;
            return;
        }
        if(x==2){
            bits[0] +=1;
            bits[1] += 1;
            return;
        }
        int bitSize = log2(x)+1;//4
        long long closest2power = (1LL<<(bitSize-1));
        long long numberOfSetBits = (x-closest2power+1);
        bits[bitSize-1] += numberOfSetBits;
        for(int i =0;i<bitSize-1;i++){
            bits[i] += (closest2power>>1);
        }
        x = x-closest2power;
        countSetBits(x,bits);


    }
    long long findMaximumNumber(long long k, int x) {
        
        long long  start = 0,end = 1e15;
        long long ans=0;
        while(start<=end){
            vector<long long>bits(65,0);
            long long mid = start + ((end-start)>>1);
            countSetBits(mid,bits);
            long long price =0;

            for(int i=0;i<65;i++){
                if((i+1)%x == 0){
                    price += bits[i];
                }
            }
            if(price<=k){
                ans = mid;
                start = mid +1;
            }
            else{
                end = mid-1;
            }
        }
        return ans;    
    }
};
