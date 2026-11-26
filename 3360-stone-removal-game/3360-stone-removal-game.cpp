class Solution {
public:
    bool canAliceWin(int n) {
        int count =0;
        int chance =10;
        if(n ==10){
            return true;
        }
       else {
        while(n>=chance){
            n = n- chance;
            chance = chance-1;
            count =count+1;
        }
       }
        if(count%2!=0){
            return true;
        }
        else{
            return false;
        }
        
    }
};