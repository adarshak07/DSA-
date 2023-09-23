class Solution{
  public:
    //Function to return the maximum sum of non-adjacent nodes.
    pair<int,int> solve(Node* root) {
        if(root == NULL) {
            pair<int,int> p = make_pair(0,0);
            return p;
        }
        
        pair<int,int> left = solve(root->left);
        pair<int,int> right = solve(root->right);
        
        pair<int,int> res;
        
        res.first = root->data + left.second + right.second;  //inclding curr level nodes so xclude niche ka level so second feel
        res.second = max(left.first + max(right.first,right.second); //excluding curr node andwant max sum , so niche ka max sum hee take , immm
        
        return res;
        
        
    }
    int getMaxSum(Node *root) 
    {
        // Add your code here
        pair<int,int> ans = solve(root);
        int a = max(ans.first,ans.second);
        return a ;
        
    }
