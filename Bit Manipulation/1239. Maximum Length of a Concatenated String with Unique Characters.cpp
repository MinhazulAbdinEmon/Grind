// problem link : https://leetcode.com/problems/maximum-length-of-a-concatenated-string-with-unique-characters/description/
class Solution {
public:
    bool uniqueTest(string a){
        for(int i=0;i<a.size();i++){
            for(int j=i+1;j<a.size();j++){
                if(a[i] == a[j]){
                    return 0;
                }
            }
        }
        return 1;
    }
    int maxLength(vector<string>& arr) {
        // find the subset
        int max_length =0;
        for(int mask =0;mask<(1<<arr.size()) ; mask++){
            string output;
            for(int i=0;i<arr.size();i++){
                if((mask>>i) &1){
                output += arr[i];
                }
            }    
            if(uniqueTest(output)){
                int b = output.size();
                max_length = max(max_length,b);
            }
                
            
        }
        return max_length;
    }
};
