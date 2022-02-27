 int maxDepth(Node* root) {
        int h=0;
       
        if(root==NULL) return 0;
        else
        {
            for(auto x:root->children)
            {
                h=max(h,maxDepth(x));
              
                
            }
            
        }
        return h+1;
    
    }
//leetcode559
