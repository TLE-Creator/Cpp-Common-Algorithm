#include <string>
#include <algorithm>
#include "High Precision.h"

using namespace std;

string addition(const string& a,const string& b){
    int i=a.size()-1;
    int j=b.size()-1;
    int carry=0;

    string res;

    while(i>=0 || j>=0 || carry){
        int sum=carry;

        if(i>=0) sum+=a[i--]+'0';
        if(j>=0) sum+=a[j--]+'0';

        carry=sum/10;

        res.push_back(sum%10+'0');
    }

    reverse(res.begin(),res.end());

    return res;
}