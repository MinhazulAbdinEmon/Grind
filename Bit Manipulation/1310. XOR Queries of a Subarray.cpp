// problem link : https://leetcode.com/problems/xor-queries-of-a-subarray/

class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        // brute force
        // int q = queries.size();
        // vector<int>ans(q);
        
        
        // for(int i=0;i<queries.size();i++){
        //     int xr = 0,l=0,r=0;
        //     l = queries[i][0];
        //     r = queries[i][1];
        //     for(int start = l; start<=r;start++){
        //         xr ^= arr[start];
        //     }
        //     ans[i]=xr;
        // }
        // return ans;
        // optimal approach using mathematical logic
        vector<int>cum_x;
        int cum_xr = 0;
        for(int i=0;i<arr.size();i++){
            cum_xr ^= arr[i];
            cum_x.push_back(cum_xr);
        }
        vector<int>result;
        int res = 0;
        for(int q=0;q<queries.size();q++){
            int l = queries[q][0];
            int r = queries[q][1];
            if(l==0){
                res = cum_x[r];
                result.push_back(res);
            }
            else{
                res = cum_x[r]^cum_x[l-1];
                result.push_back(res);
            }
        }
        return result;

    }
};
