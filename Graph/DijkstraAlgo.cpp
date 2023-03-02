
int minDistance(int dist[], bool vis[])
{
 
    // Initialize min value
    int min = INT_MAX, min_index;
 
    for (int v = 0; v < V; v++)
        if (vis[v] == false && dist[v] <= min)
            min = dist[v], min_index = v;
 
    return min_index;
}

void dijkstra(int graph[V][V],int src)
{
    int dist[V]={INT_MAX};
    bool vis[V]={false};


    dist[src]=0;

    for(int i=0;i<V-1;i++)
    {
        int u=minDistance(dist,vis);
        vis[u]=true;

        for(int j=0;j<V;j++)
        {
          if(!vis[j] && graph[u][j] && dist[u]!=INT_MAX && dist[u]+graph[j][v]<dist[v])
           dist[v]=dist[u]+graph[j][v];
        }
    }
    PrintLoop(dist);
}