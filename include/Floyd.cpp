#include "Floyd.h"

using namespace std;

Floyd::Floyd(int v): V(v){
    dis.resize(V+1,vector<int>(V+1,INT_MAX));

    for(int i=1;i<=V;i++){
        dis[i][i]=0;
    }
}

void Floyd::addEdges(int u,int v,int w){
    dis[u][v]=w;
    //dis[v][u]=w;
}

void Floyd::floyd(){
    for(int k=1;k<=V;k++){
        for(int i=1;i<=V;i++){
            if(dis[i][k]==INT_MAX){
                continue;
            }
            for(int j=1;j<=V;j++){
                if(dis[i][k]+dis[k][j]<dis[i][j]&&dis[k][j]!=INT_MAX){
                    dis[i][j]=dis[i][k]+dis[k][j];
                }
            }
        }
    }
}

int Floyd::Path(int x,int y){
    return dis[x][y];
}

bool Floyd::hasNegativeCycle() {
    for (int i = 1; i <= V; i++) {
        if (dis[i][i] < 0) {
            return true;
        }
    }
    return false;
}