class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> res;

        for (int q = 0; q < l.size(); q++) {
            res.push_back(isArithmetic(vector<int>(nums.begin() + l[q], nums.begin() + r[q] + 1)));
        }

        return res;
    }

private:
    bool isArithmetic(const vector<int>& sub) {
        vector<int> sortedSub(sub);
        sort(sortedSub.begin(), sortedSub.end());
        int diff = sortedSub[1] - sortedSub[0];
        for (int i = 2; i < sortedSub.size(); i++) {
            if (sortedSub[i] - sortedSub[i - 1] != diff) {
                return false;
            }
        }
        return true;
    }
};
