class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mpp;
        int i =0;
        int j = 0;
        int count =0;
        while(j<s.size()){
            mpp[s[j]]++;
            while( mpp[s[j]]>1){
                mpp[s[i]]--;
                i++;
            }
                count =  max(count, j -i+1);


                j++;

        }
    //    for(int i =0;i<s.size();i++){
    //     mpp
    //    }
       return count; 
        
    }
};