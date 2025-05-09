// problem link : https://leetcode.com/problems/find-the-original-array-of-prefix-xor/description/
class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        // with taking extra space
        // int n = pref.size();
        // vector<int>ans(n);
        // ans[0] = pref[0];
        // for(int i=n-1;i>0;i--){
        //     ans[i] = pref[i]^pref[i-1];
        // }
        // return ans;


        // without taking extra space (i.e (new array))
        int n = pref.size();
        // vector<int>ans(n);
        // ans[0] = pref[0];
        for(int i=n-1;i>0;i--){
            pref[i] = pref[i]^pref[i-1];
        }
        return pref;
    }
};
