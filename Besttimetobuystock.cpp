// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for (int  i = 0; i < arr.size(); i++)
//     {
//         int minimum = *min_element(arr.begin(),arr.end());
//         if(arr[i]==minimum){
//             cout<<i;
//         }            /* code */
//     }
    
//     return 0;
// }

C++
class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int minimum = prices[0];
       int maximum = 0;
       for(int i =0;i<prices.size();i++){
        minimum =min(minimum,prices[i]);
        int profit = prices[i]- minimum;
        maximum = max(maximum,profit);
       }
       return maximum;
    }
};
