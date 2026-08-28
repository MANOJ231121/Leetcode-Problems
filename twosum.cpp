class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i =0;i< nums.size();i++){
            for(int j =i+1; j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
        }
            }
        } 
    return{};
    }
};
#include<string>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
int main(){
    //Input part
    return 0;
}