class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
    
    vector<int> result;
    int n=arr.size();

    vector<pair<int, int>>indexedArr;
    for(int i=0; i<n; i++){
        indexedArr.push_back({arr[i], i});
    }

    sort(indexedArr.begin(), indexedArr.end());

    int left=0;
    int right=n-1;

    while(left<right){
        int currentSum=indexedArr[left].first+indexedArr[right].first;

        if(currentSum==target){
            result.push_back(indexedArr[left].second);
            result.push_back(indexedArr[right].second);

            return result;
        }

        else if(currentSum<target){
            left++;
        }
        
        else{
            right--;
        }
    }
    return {}; //Return an empty vector if no solution is found.
        
    }
};