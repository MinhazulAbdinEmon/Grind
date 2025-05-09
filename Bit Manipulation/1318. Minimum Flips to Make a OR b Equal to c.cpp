// problem link : https://leetcode.com/problems/minimum-flips-to-make-a-or-b-equal-to-c/description/

class Solution {
public:
    int minFlips(int a, int b, int c) {
        // BRUTE FORCE T.C--> O(1).. S.C-->O(1)
    //     vector<int> bit(32);
    //     for(int i=0;i<32;i++){
    //         bit[i] = (c>>i)&1;
    //     }
    //     reverse(bit.begin(),bit.end());
    //     int cnt=0;
    //     for(int i=0;i<32;i++){
    //         if(((a>>i)&1) != bit[31-i] && ((a>>i)&1) == 0){
    //             if(((b>>i)&1) == 0){
    //                 cnt++;
    //             }
    //             else{
    //                 continue;
    //             }
                
                
    //         }
    //         else if(((a>>i)&1) != bit[31-i] && ((a>>i)&1) == 1){
    //             if(((b>>i)&1) == 1){
    //                 cnt +=2;
    //             }
    //             else{
    //                 cnt++;
    //             }
                
    //         }
    //         else if(((a>>i)&1) == bit[31-i] && ((a>>i)&1) == 0){
    //             if(((b>>i)&1) == 1){
    //                 cnt++;
    //             }
    //             else{
    //                 continue;
    //             }
                
                
    //         }
    //         else if(((a>>i)&1) == bit[31-i] && ((a>>i)&1) == 1){
    //             continue;
                
                
    //         }
            
            
    //     }
    //     return cnt;
        int cnt=0;
        for(int i=0;i<32;i++){
            if(((c&1)==1)){
                if( ((a&1)!=1) && ((b&1)!=1) ){
                    cnt++;
                }
            }
            else{
                if(((a&1)==1)){
                    cnt++;
                }
                if(((b&1)==1)){
                    cnt++;
                }
            }
            a>>=1;
            b>>=1;
            c>>=1;
        }
        return cnt;
    }
};
