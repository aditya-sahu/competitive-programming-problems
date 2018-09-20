#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<long> v;
    int n;
    long a;
    cin>>n;
    while(n--)
    {
        cin>>a;
        v.push_back(a);
    }
    int q;
    long ele;
    //bool flag=false;
    vector<long>::iterator low;
    cin>>q;
    while(q--)
    {

            cin>>ele;
            low=lower_bound(v.begin(),v.end(),ele);
            //low=low-v.begin()+1;
            //=low-v.begin+1;
            if(ele==v[low-v.begin()])
                cout<<"Yes "<<low-v.begin()+1<<"\n";
            else cout<<"No "<<low-v.begin()+1<<"\n";
    }
    return 0;
}
