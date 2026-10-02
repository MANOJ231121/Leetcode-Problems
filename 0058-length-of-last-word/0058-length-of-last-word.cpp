class Solution {
public:
    int lengthOfLastWord(string s) {
        int count =0;
        for(int j = s.size()-1; j>=0;j--){
            if(s[j]!= ' '){
                count++;
            }
            if(s[j] == ' ' && count>0){
                break;
            }
        }
       return count; 
    }
};