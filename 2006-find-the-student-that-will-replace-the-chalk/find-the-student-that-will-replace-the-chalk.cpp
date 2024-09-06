class Solution {
public:
//TC- O(n)
    int chalkReplacer(vector<int>& chalk, int k) {
//Approach 2- Better
//SC- O(1)
    int n= chalk.size();
    long long sum= 0;
    for(int i= 0; i<n; i++){ //O(n)
        sum= sum + chalk[i];
    }
    //no. of full iterations possible, k/sum

    int remChalk= k % sum; 
    
    for(int i = 0; i<n; i++){ //O(n)
        if(remChalk < chalk[i]) return i;
        remChalk= remChalk - chalk[i];
    }
    return -1;
    }
};