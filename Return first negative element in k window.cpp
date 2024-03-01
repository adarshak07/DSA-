#include <bits/stdc++.h>
using namespace std;

vector<int> f(vector<int> arr, int k) {

    vector<int> ans;
    vector<int> temp;

    int i = 0;
    int j = 0;

    while (j < arr.size()) {

        if (arr[j] < 0) {
            temp.push_back(arr[j]);
        }

        if (j - i + 1 == k) {
            if (temp.size() != 0) {
                ans.push_back(temp.front());

                if (arr[i] == temp.front()) {
                    temp.erase(temp.begin());
                }
            } else {
                ans.push_back(0); // No negative element in the k-size window
            }
            i++;
        }

        j++;
    }
    return ans;
}

int main() {
    vector<int> arr = {5, 1, 2, -4, -7, -8, 9};

    vector<int> ans;

    int k = 3;

    ans = f(arr, k);

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
