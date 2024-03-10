class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        vector<vector<int>> ans;

        priority_queue<pair<int,int>> pq;

        for(int i=0;i<score.size();i++) {
            pq.push({score[i][k],i});  //imm priority queue push is used , always top par maximum store karta hai 
        }

        while(!pq.empty()) {
            auto x = pq.top();

            ans.push_back(score[x.second]);

            pq.pop();
        }
        return  ans;
    }
};
