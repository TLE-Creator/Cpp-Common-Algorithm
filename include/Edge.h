#ifndef EDGE_H
#define EDGE_H

struct Edge{
    int u,v,weight;

    Edge(int u,int v,int w): u(u),v(v),weight(w){}

    bool operator<(const Edge& others){
        return weight<others.weight;
    }
};

#endif