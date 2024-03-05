

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int i=0,j=0;
        int maxi = 0,cnt = 0;
        unordered_map<char,int> m;

        while(j<n){
            m[s[j]]++;
            if(m.size()==j-i+1){
                cnt++;
                maxi = max(maxi,cnt);
                j++;
            }
            else if(m.size()<j-i+1){
                while(m.size()<j-i+1){
                    m[s[i]]--;
                    if(m[s[i]]==0){
                        m.erase(s[i]);
                        cnt--;
                    }
                    i++;
                }
                j++;
            }
        }
        return maxi;
    }
};
