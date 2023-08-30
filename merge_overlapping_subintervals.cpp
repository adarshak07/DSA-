#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> merge(vector<vector<int>> arr) {

    sort(arr.begin(),arr.end());
    vector<vector<int>> ans;
    int start;
    int end;

    for(int i=0;i<arr.size();i++) {
        start = arr[i][0];
        end = arr[i][1];

        if(!ans.empty() && end <=ans.back()[1]) continue;   //feel see striver video again imm
        for(int j=i+1;j<arr.size();j++) {
            if(arr[j][0] <= end) 
            end = max(end,arr[j][1]);
            else 
            break;
        }
        ans.push_back({start,end});
    }


    return ans;
}

int main() {

vector<vector<int>> arr = {{1,3},{2,6},{15,18},{8,10},{9,19}}; 

vector<vector<int>> ans = merge(arr);

for(int i=0;i<ans.size();i++) {
    for(int j=0;j<ans[i].size();j++) {
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}

return 0;


}
