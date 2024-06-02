class Solution {
    public:
    vector<int> twoSum(vector<int> &num,int target){
        unordered_map<int,int> umap;  //map has been created but the values and its indices are still left to be given
        for(int i=0;i<num.size();++i){
            if(umap.find(target-num[i])!=umap.end()){
                return {i,umap[target-num[i]]};
            }
            umap[num[i]]=i;
        }
        return {};
    }
};
