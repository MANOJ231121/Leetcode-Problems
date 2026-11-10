class Solution {
public:
 static bool cmp(int a, int b){
    string x = to_string(a)+ to_string(b);
    string y = to_string(b) +to_string(a);
    return x>y;
}
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(),cmp);
        string ans ="";
        for(int i =0;i<nums.size();i++){
            string c = to_string(nums[i]);
            ans = ans + c;
        }
        if(ans[0]=='0'){
            return "0";
        }
        return ans;
    }
};