class NumArray {
private:
    vector<int> arr; // Declare arr as a private member
public:
    NumArray(vector<int>& nums) {
        arr=nums;
        //alternatively
        //private:
            //vector<int>arr;
        //public:
            //NumArray(vector<int>&arr){
                //this->arr=arr;
            //}
    }
    
    int sumRange(int left, int right) {
        int sum=0;
        for(int i=left; i<=right; i++){
            sum=sum+arr[i];
        }
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */