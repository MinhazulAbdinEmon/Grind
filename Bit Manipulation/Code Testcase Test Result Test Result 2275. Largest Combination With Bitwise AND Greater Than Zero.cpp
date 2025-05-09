// problem link : https://leetcode.com/problems/largest-combination-with-bitwise-and-greater-than-zero/description/

class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int max_length = INT_MIN;
        for(int i=0;i<32;i++){
            int length =0;
            for(int nums: candidates){
                if( (nums&(1<<i)) ){
                    length++;
                }
            }
            max_length = max(max_length,length);
        }
        return max_length;
    }
};
