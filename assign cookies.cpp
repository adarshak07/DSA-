class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
         
         sort(g.begin(),g.end());
         sort(s.begin(),s.end());

        int i = 0;
        int j = 0;

…
        return ans;
    }
};
