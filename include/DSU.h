#ifndef DSU_H
#define DSU_H

#include <vector>

class DSU{    
private:
    std::vector<int> parent;
    std::vector<int> rank;
    int cnt;
public:
    DSU(int n);

    virtual ~DSU();

    int find(int x);

    void UnionSet(int x,int y);

    int getCount();

    bool isConnected(int x,int y);
};

#endif