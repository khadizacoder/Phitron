// User function Template for C++
//* Link: https://www.geeksforgeeks.org/problems/distance-from-the-source-bellman-ford-algorithm/1

/******************************************************** 
class Solution {
  public:
    class Edge
    {
        public:
            int a, b, c;
            Edge(int a, int b, int c)
            {
                this->a = a;
                this->b = b;
                this-> c = c;
            }
    };
    
    bool cycle;
    int dis[1005];
    vector<Edge> edgeList;
    
    void bellmanford(int V)
    {
        for(int i = 0; i < V-1; i++)
        {
            for(auto ed : edgeList)
            {
                int a, b, c;
                a = ed.a;
                b = ed.b;
                c = ed.c;
                if(dis[a] != 100000000 && dis[a] + c < dis[b])
                    dis[b] = dis[a] + c;
            }
        }
        
        for(auto ed : edgeList)
        {
            int a, b, c;
            a = ed.a;
            b = ed.b;
            c = ed.c;
            if(dis[a] != 100000000 && dis[a] + c < dis[b])
            {
                cycle = true;
                break;
            }
        }
    }
    
    vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
        // Code here
        cycle = false;
        edgeList.clear();
        
        int e = edges.size();
        for(int i = 0; i < e; i++)
        {
            int a = edges[i][0];
            int b = edges[i][1];
            int c = edges[i][2];
            edgeList.push_back(Edge(a,b,c));
        }
        
        // for(auto &e : edges)
        // {
        //     int a = e[0];
        //     int b = e[1];
        //     int c = e[2];
        //     edgeList.push_back(Edge(a,b,c));
        // }
        
        for(int i = 0; i < V; i++)
            dis[i] = 100000000;
        
        dis[src] = 0;
        bellmanford(V);
        
        vector<int> ans;
        if(cycle)
            return {-1};
        else
        { 
           for(int i = 0; i < V; i++)
           ans.push_back(dis[i]);
        }
        return ans;
    }
};
********************************************************************/

//* Different simple way

/**************************************************************

class Solution {
  public:
    class Edge
    {
        public:
            int a, b, c;
            Edge(int a, int b, int c)
            {
                this->a = a;
                this->b = b;
                this->c = c;
            }
    };
    
    vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
        vector<Edge> edgeList;
        
        for(auto &e : edges)
            edgeList.push_back(Edge(e[0], e[1], e[2]));
            
        vector<int> dis(V, 100000000);
        dis[src] = 0;
        
        for(int i = 0; i < V-1; i++)
        {
            for(auto ed : edgeList)
            {
                int a = ed.a;
                int b = ed.b;
                int c = ed.c;
                if(dis[a] != 100000000 && dis[a] + c < dis[b])
                    dis[b] = dis[a] + c;
            }
        }
        
        for(auto ed : edgeList)
        {
            int a = ed.a;
            int b = ed.b;
            int c = ed.c;
            if(dis[a] != 100000000 && dis[a] + c < dis[b])
                return {-1};
        }
            
        return dis;
    }
};

**************************************************************/