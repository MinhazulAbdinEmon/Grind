// problem link : https://leetcode.com/problems/count-triplets-that-can-form-two-arrays-of-equal-xor/description/

class Solution {
public:
    int countTriplets(vector<int>& arr) {
        // int found =0;
        
        // for(int i=0;i<arr.size()-1;i++){
        //     int a =0,b=0;
            
        //     for(int j=i+1;j<arr.size();j++){
        //         b ^= arr[j];
        //         if(a==b)found++;
        //         for(int k=i;k<j ;k++){
        //             a^=arr[k];
        //             if(a==b)found++;
        //         }
                
        //     }
        // }
        // return found;
        int found =0;
        for(int i=0;i<arr.size();i++){
            int a = 0,b=0;
            for(int j=i+1;j<arr.size();j++){
                int s =i;
                a=0,b=0;
                while(s<j){
                    a^=arr[s];
                    s++;
                }
                for(int k=j;k<arr.size();k++){
                    b^= arr[k];
                    if(a==b)found++;
                }
            }
        }
        return found;
    }
};
