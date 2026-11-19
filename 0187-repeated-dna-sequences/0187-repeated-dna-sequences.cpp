class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string, int> mpp;
        vector<string> arr;
        int left = 0;
        int right = 0;
        while (right < s.size()) {
            if (right - left + 1 < 10) {
                right++;
            } else {
                 string temp = s.substr(left, 10);

                // string ans = "";
                // string temp;
                // for (int i = left; i <= right; i++) {
                //     temp = temp + s[i];
                mpp[temp]++;
                left++;
                right++;
                }
            }
        for (auto &it : mpp) {
            if (it.second > 1) {
                arr.push_back(it.first);
        }
            }
        return arr;
    }
};