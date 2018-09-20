#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n,posit=0,negat=0,nul=0;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0;i < n;i++){
       cin >> arr[i];
       if(arr[i]>0) posit++;
        else
            if(arr[i]<0) negat++;
        else nul++;
    }
    float positf,negatf,nulf;
    positf=(float)posit/n;
    negatf=(float)negat/n;
    nulf=(float)nul/n;
    cout<<positf<<"\n"<<negatf<<"\n"<<nulf;
    return 0;
}
