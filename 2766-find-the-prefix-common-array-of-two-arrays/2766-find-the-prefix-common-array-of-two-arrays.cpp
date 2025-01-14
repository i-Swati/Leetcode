class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n= A.size();

        vector<int> C(n, 0);

        unordered_set<int> seenA;
        unordered_set<int> seenB;

        for(int i= 0; i<n; i++){
            seenA.insert(A[i]);
            seenB.insert(B[i]);

            int cnt= 0;

            for(int x:seenA){
                if(seenB.find(x) != seenB.end()){
                    cnt++;
                }
            }
            C[i]= cnt;
        }
        return C;
    }
};