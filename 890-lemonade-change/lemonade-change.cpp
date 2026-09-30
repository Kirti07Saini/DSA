class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int ten=0;
        int five=0;
        for(int i=0;i<bills.size();i++){
            int money=bills[i];
            if(money==5){
                five++;
            }
            else if(money==10){
                if(five==0){
                    return false;
                }
                five--;
                ten++;
            }
            else if(money==20){
                if(ten>0){
                    ten--;
                    if(five==0){
                        return false;
                    }
                    five--;

                }
                else{
                    if(five<3){
                        return false;
                    }
                    five=five-3;
                }
            }
        }
        return true;
    }
};