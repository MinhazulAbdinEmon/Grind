// problem link : https://leetcode.com/problems/counting-bits/description/
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        
        for(int i=0;i<=n;i++){
            int bits=0;
            for(int j=0;j<32;j++){
                if( ((i>>j)&1) != 0 ){
                    bits++;
                }
            }
            ans.push_back(bits);
        }
        return ans;
    }
};
