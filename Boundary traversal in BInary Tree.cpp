class Solution {
public:
        
        void leftPart(Node* root , vector<int>& ans) {
            if(root == NULL) return;
            if(root->left== NULL && root->right == NULL) return;
            
            ans.push_back(root->data);
            
            if(root->left) leftPart(root->left,ans);
            else leftPart(root->right,ans);
            
        }
        
        void leafPart(Node* root , vector<int>& ans) {
            if(root==NULL) return;
            if(root->left==NULL && root->right==NULL) {
                ans.push_back(root->data);
                return;
            }
            
            leafPart(root->left,ans);
            leafPart(root->right,ans);
        }
        
        void rightPart(Node* root,vector<int>& ans) {
            if(root == NULL) return;
            if(root->left== NULL && root->right == NULL) return;
            
            if(root->right) rightPart(root->right,ans);
            else rightPart(root->left,ans);
            
            
            ans.push_back(root->data);
        }
    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int> ans;
        
        if(root==NULL) return ans;
        
        ans.push_back(root->data);
        
        leftPart(root->left,ans);
        
        //since root can be in both leaf as well as right subtree . so 2 calls 
        leafPart(root->left,ans);
        leafPart(root->right,ans);
        
        rightPart(root->right,ans);
        
        return ans;
        
        
        
    }
};
