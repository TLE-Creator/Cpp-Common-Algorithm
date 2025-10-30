#include <iostream>
#include <vector>
#include "DSU.h"

using namespace std;

DSU::DSU(int n){
    parent.resize(n+1);
    rank.resize(n+1,1);

    for(int i=1;i<=n;i++){
        parent[i]=i;
    }

    cnt=n;
}

int DSU::find(int x){
    if(parent[x]!=x){
        parent[x]=find(parent[x]);
    }

    return parent[x];
}

void DSU::UnionSet(int x,int y){
    int rootX=find(x);
    int rootY=find(y);

    if(rootX==rootY){
        return;
    }

    if(rank[rootX]<rank[rootY]){
        parent[rootX]=rootY;
    }
    else if(rank[rootX]>rank[rootY]){
        parent[rootY]=rootX;
    }
    else{
        parent[rootY]=rootX;
        rank[rootX]++;
    }

    cnt--;
}

int DSU::getCount(){
    return cnt;
}

bool DSU::isConnected(int x,int y){
    return find(x)==find(y);
}

DSU::~DSU(){

}