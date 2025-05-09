// problem link : https://leetcode.com/problems/single-number-ii/description/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int>bits(32,0);
        int count1,count0;
        for(int j=0;j<32;j++){
            count1=0,count0=0;
            for(int i=0;i<nums.size();i++){
                if( (nums[i]&(1<<j)) ){
                    count1++;
                }
               
            }
            if(count1%3 ==1){
                bits[31-j] = 1;
            }

        }
        int ans=0;
        for(int i=31;i>=0;i--){
                ans+= (1<<(31-i))*(bits[i]);
            
        }
        return ans;
        
    }
};
