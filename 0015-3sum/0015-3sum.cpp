// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         vector<vector<int>> arr;
//         sort(nums.begin(),nums.end());
//         int i =0;
//         while(i<nums.size()-2){
//                if (i > 0 && nums[i] == nums[i - 1]) {
//                 i++;
//                 continue;
//             }
//         int j =i+1;
//         int k = nums.size()-1;
//         while(j<k){
//             int sum = nums[i]+nums[j]+nums[k];
//             if(sum ==0){
//                 arr.push_back( {nums[i], nums[j], nums[k]} );
//                  j++;
//                  k--;
//             while(j<k &&nums[j == nums[j-1]])
//             j++;
//             while(j<k && nums[k]==nums[k+1])
//             k--;
//             }
//             else if( sum> 0){
//                 k--;
//             }
//             else{
//                 j++;
//             }
//         }
//         i++;
//         }
//  return arr;
//     }
// };
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> arr;

        sort(nums.begin(), nums.end());

        int i = 0;

        while(i < nums.size() - 2) {

            if(i > 0 && nums[i] == nums[i - 1]) {
                i++;
                continue;
            }

            int j = i + 1;
            int k = nums.size() - 1;

            while(j < k) {

                int sum = nums[i] + nums[j] + nums[k];

                if(sum == 0) {

                    arr.push_back({nums[i], nums[j], nums[k]});

                    j++;
                    k--;

                    // Skip duplicate j
                    while(j < k && nums[j] == nums[j - 1])
                        j++;

                    // Skip duplicate k
                    while(j < k && nums[k] == nums[k + 1])
                        k--;
                }
                else if(sum > 0) {
                    k--;
                }
                else {
                    j++;
                }
            }

            i++;
        }

        return arr;
    }
};