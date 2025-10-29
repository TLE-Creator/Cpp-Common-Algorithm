#include "Binary Search.h"
#include <vector>

using namespace std;

int Binary_Search(const vector<int>& a,int x){
    int left=0;
    int right=a.size()-1;

    while(left<=right){
        int mid=left+(right-left)/2;

        if(a[mid]==x){
            return mid;
        }
        else if(a[mid]<x){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }

    return -1;
}