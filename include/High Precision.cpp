#include <string>
#include <algorithm>
#include "High Precision.h"

using namespace std;

// The implementation of high-precision addition.

string addition(const string& a,const string& b){
    // The number of digits and carry-over.
    int i=a.size()-1;
    int j=b.size()-1;
    int carry=0;

    // The answer.
    string res;

    // Simulated Addition.
    while(i>=0 || j>=0 || carry){
        // Copy the carry.
        int sum=carry;

        if(i>=0) sum+=a[i--]+'0';
        if(j>=0) sum+=a[j--]+'0';

        // Carry over.
        carry=sum/10;

        // Answer.
        res.push_back(sum%10+'0');
    }

    //Overturn.
    reverse(res.begin(),res.end());

    return res;
}