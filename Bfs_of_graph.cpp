   vector<int> bfsOfGraph(int V, vector<int> adj[]) {
         vector<int>v;
         bool visited[V];

         for(int i=0;i<V;i++)
         {
             visited[i]=0;
         }
         queue<int>q;
         q.push(0);
        while(!q.empty())
        {
            int p=q.front();
            
            q.pop();
            if(visited[p]==0)
            {
                visited[p]=1;
                v.push_back(p);
            }
            
            for(auto it:adj[p])
            {
                if(visited[it]==0)
                {
                    q.push(it);
                }
            }
        }
        return v;
        // Code here
    }
};
//geeksfrogeeks
