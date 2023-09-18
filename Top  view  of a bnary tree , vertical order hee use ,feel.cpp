class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        //Your code here
        vector<int> ans;
        if(root == NULL) return ans;
        
        map<int,int> mp;
        queue<pair<Node* , int> > q;
        
        q.push(make_pair(root,0));
        
        while(!q.empty()) {
            pair<Node* , int>temp = q.front();
            q.pop();
            
            Node* frontNode = temp.first;
            int horizontalDistance = temp.second;
            
            if(mp.find(horizontalDistance) == mp.end()) //present nahi 
                mp[horizontalDistance] = frontNode -> data;
                
            if(frontNode->left) q.push(make_pair(frontNode->left,horizontalDistance-1));
            
            if(frontNode->right) q.push(make_pair(frontNode->right,horizontalDistance+1));
            
        }
        
        for(auto i : mp) {
            ans.push_back(i.second);
        }
        return ans;
        
        
    }

};
