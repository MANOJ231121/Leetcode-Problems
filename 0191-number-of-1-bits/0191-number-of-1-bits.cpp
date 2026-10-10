class Solution {
public:
    int hammingWeight(int n) {
        vector<long>arr;
        while(n>0){
        long r = n % 2;
        arr.push_back(r);
        n = n/2;
        }
        int count =0;
        for(int i = 0;i<arr.size();i++){
            if(arr[i]==1){
                count ++;
            }
        }
        return count;    
    }
};