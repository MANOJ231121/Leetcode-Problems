

//this is the brute force approach and its not valid acc to the use case

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         vector<int>arr;
//         int left =0;
//         int right =left+1;
//         while(left<height.size()-1){
//             while(right<height.size()){
//             int length = right - left;
//            int width = min(height[left],height[right]);
//             int area= length *width;
//             arr.push_back(area);
//         right++;
//         }
//         left++;
//         right = left +1;
//         }
//       int maximum = *max_element(arr.begin(),arr.end());
//       return maximum;
//     }
// };
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
int main(){
    class Solution {
public:
    int maxArea(vector<int>& height) {
        int  left =0;
        int max =0;
        int right = height.size()-1;
        while(left<right){
            int length = right - left;
            int width =min(height[right],height[left]);
            int area = length * width;
            if(area > max){
                max = area;
            }
            if(height[left]<height[right]){
            left++;
            }
            else{
            right--;
            }
        }
    return max;
    }
};
    return 0;
}


