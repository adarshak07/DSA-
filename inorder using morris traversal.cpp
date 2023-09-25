class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        //we are doing inorder traversal using constant space ie morris traversal 
        vector<int> ans;
        TreeNode* curr = root;

        while(curr !=NULL) {
            if(curr->left == NULL) {
                ans.push_back(curr->val);
                curr = curr->right;
            }
            else {  //left hai so 2 cases feel triver video etc 
                    TreeNode* temp = curr->left;
                    while(temp->right !=NULL && temp->right!=curr) {
                        temp = temp->right; //last right node par pauch gaya , now make thread. 
                    }
                    if(temp->right == NULL) {
                        temp->right = curr;
                        curr = curr->left; //since inorder 
                    }
                    else {  //thread bana hua hai pahle se so break and push that element feel 
                    temp->right = NULL;
                    ans.push_back(curr->val);
                    curr = curr->right; //now move right
                            
                    }
            }
        }
        return ans;
    }
};
