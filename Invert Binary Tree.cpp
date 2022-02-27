
    TreeNode* invertTree(TreeNode* root) {
         
        if(root==NULL) return root;
         invertTree(root->right);
         invertTree(root->left);
        
        
       swap(root->left,root->right);
        return root;
        
    }
