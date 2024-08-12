class KthLargest {
public:
    int k;
    //min heap declaration
    priority_queue<int, vector<int>, greater<int>> pq;

    KthLargest(int k, vector<int>& nums) : k(k){// initialize k using k initializer list

        for(int &num: nums){
            pq.push(num); //min ele will be popped

        if(pq.size()>k) pq.pop(); //maintain only k elements in the list
    }
}
    
    int add(int val) {
        pq.push(val);
        
        if(pq.size()>k) pq.pop();

        return pq.top();
    }
};
//TC= O(n log k) //for pushing n elements of vector into pq + m.O(log k)//each call to 'add' fn takes O(log k) time
//SC= O(K) //to store k elems in min heap
/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */