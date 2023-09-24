class Solution {
public:
    int find(int in[], int ele, int start, int end) {
        for (int j = start; j <= end; j++) {
            if (in[j] == ele) {
                return j;
            }
        }
        return -1;
    }

    Node* solve(int in[], int pre[], int& prei, int start, int end, int n) {
        if (prei >= n || start > end) return NULL;

        int ele = pre[prei++];
        Node* root = new Node(ele);
        int position = find(in, ele, start, end);

        root->left = solve(in, pre, prei, start, position - 1, n);
        root->right = solve(in, pre, prei, position + 1, end, n);

        return root;
    }

    Node* buildTree(int in[], int pre[], int n) {
        int prei = 0;
        Node* ans = solve(in, pre, prei, 0, n - 1, n);
        return ans;
    }
};
