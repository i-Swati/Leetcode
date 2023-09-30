class Solution {
public:
//BETTER SOLUTION
    int majorityElement(vector<int>& arr) { 
        map<int, int>mpp;
        for(int i=0; i<arr.size(); i++){ //O(n log n)
            mpp[arr[i]]++;

        }
        for(auto it:mpp){ //O(n)
            if(it.second>arr.size()/2){
                return it.first;
            }
        }
        return -1;
        
    }
};