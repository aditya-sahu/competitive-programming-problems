//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <stack>
#define pb push_back
#define fp first
#define sp second
using namespace std;
int gcd(int a, int b)
{
    if(a==0)
        return b;
    return gcd(b%a,a);
}
int main()
{
   int T,n;
   cin>>T;
   while(T--)
   {
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int tmp=v[0];
        for(int i=0;i<n-1;i++)
        {
            tmp=gcd(tmp,v[i+1]);
        }
        cout<<"\n"<<tmp;
   }
   return 0;
}
