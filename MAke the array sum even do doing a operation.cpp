#include <bits/stdc++.h>

using namespace std;

int evenSum(vector<int> ar) {  //returns minimum no. of operations to convert sum into even.


int ans = -1;
int sum = 0;
for(int i=0;i<ar.size();i++) {
    sum += ar[i];
}

if(sum%2==0) ans = 0;

for(int i=0;i<ar.size();i++) {
    if(ar[i]%2==0) {
            int cnt = 0;
        while(ar[i]%2==0) {
            ar[i] = ar[i]/2;
            cnt++;
        }
        if(ans==-1) ans = cnt;
        else ans = min(ans,cnt);
    }
}
return ans;

}

int main() {

vector<int> ar = {5};

int ans;

ans=evenSum(ar);

cout<<ans<<endl;


    return 0;
}
