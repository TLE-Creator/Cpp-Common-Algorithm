#ifndef SORTING_STRUCT_H
#define SORTING_STRUCT_H

#include <iostream>
#include <vector>

struct sort_fstl{
    int a;

    bool operator<(const sort_fstl& others){
        return a<others.a;
    }
};

struct sort_flts{
    int a;

    bool operator>(const sort_flts& others){
        return a>others.a;
    }
};

#endif