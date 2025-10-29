#include "Kruskal.h"
#include "Edge.h"
#include "DSU.h"
#include <tuple>
#include <algorithm>

using namespace std;

KruskalMST::KruskalMST(int v): V(v) {}

void KruskalMST::addEdges(int u,int v,int w){
    edges.push_back({u,v,w});
    edges.push_back({v,u,w});
}

tuple<int,bool> KruskalMST::Kruskal(){
    sort(edges.begin(), edges.end());

    DSU uf(V);
    int total=0;
    int edgeCount=0;

    for(Edge edge: edges){
        if(edgeCount==V-1){
            break;
        }

        int rootU=uf.find(edge.u);
        int rootV=uf.find(edge.v);

        if(rootU!=rootV){
            uf.UnionSet(edge.u,edge.v);
            edgeCount++;
            total+=edge.weight;
        }
    }

    bool isConnected=(uf.getCount()==1);

    return make_tuple(total,isConnected);
}