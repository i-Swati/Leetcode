class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> discounts(prices.size(), 0);

        for(int i=0; i<prices.size(); i++){
            int discount= 0;
            for(int j=i+1; j<prices.size(); j++){
                if(prices[j]<=prices[i]){
                    discount=prices[j];
                    break;
                }
            }
            discounts[i]= discount;
        }
        for(int i=0; i<prices.size(); i++){
            prices[i]= prices[i]-discounts[i];
        }
        return prices;
    }
};