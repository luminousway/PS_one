class Solution {
public:
    int maxProfit(vector<int>& prices) {

int min=INT_MAX;
int maxpro=0;

for(int i=0; i<prices.size(); i++){
    if(prices[i]<min){
        min=prices[i];
    }else if(prices[i]-min>maxpro){
        maxpro=prices[i]-min;
    }
}
return maxpro;
}};
