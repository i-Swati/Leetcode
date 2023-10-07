class Solution {
public:
    int maxProfit(vector<int>& arr) {
//BETTER/OPTIMAL
    int n=arr.size();
    int maxProf=0;
    int minPrice=INT_MAX;

    for(int i=0; i<n; i++){
        minPrice=min(minPrice, arr[i]);
        maxProf=max(maxProf, arr[i]-minPrice);
    }
    return maxProf;
    }
};
//TC=O(n), SC=O(1)