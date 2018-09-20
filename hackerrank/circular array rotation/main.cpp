#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,k,q,i,inp,j=0;
    cin>>n>>k>>q;
    //int arr[n];
    //stack<int> bfr;
    vector <int> v(n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        //cin>>inp;
        //arr.push(inp);
        cin>>arr[i];
    }
    if(k%n==0) {
        for(i=0;i<q;i++)
        {
            cin>>inp;
            cout<<arr[inp]<<"\n";

        }
        return 0;
    }
    k=k%n;
    for(i=n-k;i<n;i++)
    {
        v[j]=arr[i];
        j++;
    }
    for(i=0;i<n-k;i++)
    {
        v[j]=arr[i];
        j++;
    }
    //queries
    for(i=0;i<q;i++)
    {
        cin>>inp;
        cout<<v[inp]<<"\n";
    }
    return 0;
}
