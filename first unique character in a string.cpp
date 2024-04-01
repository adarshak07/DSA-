class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> map;
        //STEP 1) Save chars with their frequencies
        for(int i=0; i<s.length(); i++){
            char ch = s[i];
            map[ch]++;
        }
        //STEP 2) Traverse through the array & if freq is found to be 1 the return idx, else return -1
        for(int i=0; i<s.length(); i++){
            char ch = s[i];
            if(map[ch] == 1) return i;
        }
        return -1;
    }
};
