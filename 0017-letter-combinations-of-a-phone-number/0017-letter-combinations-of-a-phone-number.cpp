class Solution {
public:
    vector<string> letterCombinations(string digits) {
        unordered_map<int,vector<char>>mpp ={
            {2,{'a','b','c'}},
            {3,{'d','e','f'}},
            {4,{'g','h','i'}},
            {5,{'j','k','l'}},
            {6,{'m','n','o'}},
            {7,{'p','q','r','s'}},
            {8,{'t','u','v'}},
            {9,{'w','x','y','z'}},
        };
        vector<string> arr = {""};
        for(int i =0;i<digits.size();i++){
            int charc  =digits[i] -'0';
            vector<string>temp ;
            for (string s : arr){
                for(char letter :mpp[charc]){
                    temp.push_back(s+letter);
                }
            }
                arr =temp;
        }
        return arr;

        
        
    }
};