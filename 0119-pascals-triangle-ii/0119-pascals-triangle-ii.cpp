class Solution {
public:
   vector<int> getRow(int n){
        vector<int> ansRow;
        long long ans= 1; //first ele
        ansRow.push_back(1);
        for(int col= 1; col<= n; col++){        
                ans= ans * (n-col + 1);
                ans= ans/col;
                ansRow.push_back(ans);
            }
            return ansRow;
    }
};
