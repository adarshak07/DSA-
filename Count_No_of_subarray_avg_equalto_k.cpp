#include<bits/stdc++.h>

using namespace std;


int Count(vector<int> arr,int k){

    int ans;
    for(int i=0;i<arr.size();i++) {
        int sum = 0;
        for(int j=i;j<arr.size();j++) {   //we are not storing subarray in any arr etc , we are directly cal sum of subarray , subarray range is form i to j always feel . 
            sum += arr[j];
            int len = (j-i+1); //size of subarray .

            if(sum%len == 0) {  //we need avg so if len is exactly divisble by sum , tabhi k ke equal feel note.....
                int avg = sum/len;
                if(avg == k) ans++;
            }
        }
    }
    return ans;
}

int main() {

vector<int> arr = {12, 5, 3, 10, 4, 8, 10, 12, -6, -1};

int k = 6;

int ans = Count(arr,k);

cout<<ans<<endl;
    return 0;
}