class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        int n = queries.size();
        vector<int> result;
        
        unordered_map<int, int> ballColor; // Stores the color of each ball
        unordered_map<int, int> mp; // Stores count of each color

        for (auto& query : queries) {
            int ball = query[0];
            int col = query[1];

            // If ball is already colored, remove previous color count
            if (ballColor.count(ball)) { 
                int prevCol = ballColor[ball];
                mp[prevCol]--;
                if (mp[prevCol] == 0) {
                    mp.erase(prevCol);
                }
            }

            // Assign new color
            ballColor[ball] = col;
            mp[col]++;

            // Store number of unique colors
            result.push_back(mp.size());
        }

        return result;
    }
};