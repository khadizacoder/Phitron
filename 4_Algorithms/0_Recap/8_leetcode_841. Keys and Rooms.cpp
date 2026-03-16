// Link : https://leetcode.com/problems/keys-and-rooms/description/

//* BFS Solution

// class Solution {
// public:
//     bool vis[1005];
//     void bfs(int src, vector<vector<int>>& rooms)
//     {
//         queue<int> q;
//         q.push(src);
//         vis[src] = true;

//         while(!q.empty())
//         {
//             int parent = q.front();
//             q.pop();

//             for(int child : rooms[parent])
//             {
//                 if(!vis[child])
//                 {
//                     q.push(child);
//                     vis[child] = true;
//                 }
//             }
//         }
//     }
//     bool canVisitAllRooms(vector<vector<int>>& rooms) {
//         memset(vis, false, sizeof(vis));
//         bfs(0, rooms);

//         bool visited = true;
//         for(int i = 0; i < rooms.size(); i++)
//         {
//             if(vis[i] == false)
//             {
//                 visited = false;
//                 break;
//             }
//         }
//         return visited;
//     }
// };

//* DFS Solution

// class Solution {
// public:
//     bool vis[1005];
//     void dfs(int src, vector<vector<int>>& rooms)
//     {
//         vis[src] = true;
//         for(auto cycle : rooms[src])
//         {
//             if(!vis[cycle])
//                 dfs(cycle, rooms);
//         }
//     }
//     bool canVisitAllRooms(vector<vector<int>>& rooms) {
//         int n = rooms.size();
//         memset(vis, false, sizeof(vis));
//         dfs(0, rooms);

//         bool visite = true;
//         for(int i = 0; i < n; i++)
//         {
//             if(vis[i] == false)
//             {
//                 visite = false;
//                 break;
//             }
//         }
//         return visite;
//     }
// };