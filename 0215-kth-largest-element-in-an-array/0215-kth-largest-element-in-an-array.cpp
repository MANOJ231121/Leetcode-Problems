class Solution {
public:
int findKthLargest(vector<int>& nums, int k) {
    unordered_map<int, int> mpp;
    for (int i = 0; i < nums.size(); i++) {
        mpp[nums[i]]++;
    }
    vector<pair<int, int>> v(mpp.begin(), mpp.end());
    sort(v.begin(), v.end(), greater<>());
    for (auto it : v) {
        k -= it.second;
        if (k <= 0) {
            return it.first;
        }
    }
    return 0;
}
};
