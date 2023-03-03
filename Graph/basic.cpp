#include <bits/stdc++.h>
using namespace std;
  
struct Edge {
    int src, dest, weight;
};
  
struct Graph {
    int V, E;
    struct Edge* edge;
};
  
struct Graph* createGraph(int V, int E)
{
    struct Graph* graph = new Graph;
    graph->V = V;
    graph->E = E;
    graph->edge = new Edge[E];
    return graph;
}
int main()
{

    int V = 5;
    int E = 8;
    cin>>V>>E;
    int a,b,c;
    struct Graph* graph = createGraph(V, E);
  for(int i=0;i<E;i++)
  {
    cin>>a>>b>>c;
    graph->edge[i].src = a;
    graph->edge[i].dest = b;
    graph->edge[i].weight = c;

  }
  
}
