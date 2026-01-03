class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum= 0;
        for(int i= 0; i<apple.size(); i++){
            sum= sum +
            apple[i];
        }
        sort(capacity.begin(), capacity.end());
        reverse(capacity.begin(), capacity.end());
        int cap_sum= 0;

        for(int i= 0; i<capacity.size(); i++){
            cap_sum+= capacity[i];
    
            if(sum<=cap_sum){
                return i+1;
            }
        }
        return -1;
    }
};