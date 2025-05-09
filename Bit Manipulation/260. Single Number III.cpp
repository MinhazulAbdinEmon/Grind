// problem link : https://leetcode.com/problems/single-number-iii/description/
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        // brute force will give time limit exceeded
        // better approach using hashmap but uses O(n) extra space
        // unordered_map<int,int>mpp;
        // vector<int>ans;
        // for(int i=0;i<nums.size();i++){
        //     mpp[nums[i]]++;
        // } 
        // for(auto it:mpp){
        //     if(it.second == 1){
        //         ans.push_back(it.first);
        //     }
        // }
        // return ans;
        // Optimal approach using bit manipulation no extra space required!!!
        int xr = 0;
        for(int i=0;i<nums.size();i++){
            xr ^= nums[i];
        }
        // making the mask
        int shifted = 0;
        for(int i=0;i<32;i++){
            if((1<<i)&xr){
                shifted = i;
                break;
            }
        }
        int mask = (1<<shifted);
        int gr1 =0,gr2=0;
        for(int i=0;i<nums.size();i++){
            if( nums[i]&mask ){
                gr2 ^= nums[i];
            }
            else{
                gr1 ^= nums[i];
            }
        }
        vector<int>ans;
        ans.push_back(gr1);
        ans.push_back(gr2);
        return ans;
        // important style tip : instead of finding mask using loop try mask = xr & (-xr) it isolates the right most set bit. example ----->   01011000 will be turned to 00001000 only rightmost 1 will remain.
    }
};
