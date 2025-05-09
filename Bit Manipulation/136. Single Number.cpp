// problem link : https://leetcode.com/problems/single-number/description/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // this problem has 3 solutions brute --> better --> optimal!!
        // the most optimal solN with xor
        // int result = 0;
        // for(int i=0; i<nums.size();i++){
        //     result = result^nums[i];
        // }
        // return result;
        //brute --> linear search
        // int n = nums.size();
        // int yo=0;
        // for(int i=0;i<n;i++){
        //     // bool is_twice = false;
        //     int count =0;
        //     for(int j=0;j<n;j++){
        //         if(nums[i] == nums[j]){
        //             count++;
        //         }
        //     }
        //     if(count ==1){
        //         yo = nums[i];
        //         break;
        //     }

        // }
        // return yo;
        // Hashing
        
        int n = nums.size(); 
        unordered_map<int,int>hash_arr;
        for(int j=0 ;j<n;j++){
            hash_arr[nums[j]] +=1;
        }
        int m= hash_arr.size();
        for( auto it : hash_arr){
            if( it.second == 1){
                return it.first;
            }
        }
        return -1;
    }
};
