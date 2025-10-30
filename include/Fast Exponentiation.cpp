#include "Fast Exponentiation.h"

using namespace std;

long long fpow(long long a,long long k){
    if(k==0) return 1;

    long long half=fpow(a,k/2);

    half*=half;

    if(k%2) half*=a;

    return half;
}