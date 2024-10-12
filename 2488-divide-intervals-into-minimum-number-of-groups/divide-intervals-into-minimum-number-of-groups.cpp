class Solution {
public:
//SC- O(n) + O(n)== O(n)
    int minGroups(vector<vector<int>>& intervals) {
        //sort based on starting points
        sort(intervals.begin(), intervals.end()); //O(n log n)

        //min heap to store ending poitns of each group
        priority_queue<int, vector<int>, greater<int>> pq;

        //process each interval one by one
        for(vector<int> &interval : intervals){//n
            int start= interval[0];
            int end= interval[1];

            if(!pq.empty() && start > pq.top()){
                pq.pop();//log n
            }

            pq.push(end);//log n
        }
        return pq.size();  
    }
};