#ifndef KRUSKAL_H
#define KRUSKAL_H

#include "Edge.h"
#include <vector>
#include <tuple>

class KruskalMST{
private:
    std::vector<Edge> edges;
    int V;

public:
    KruskalMST(int v){};

    void addEdges(int u,int v,int w){};

    std::tuple<int,bool> Kruskal(){};

    ~KruskalMST(){};
};

#endif