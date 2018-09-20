//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <stack>
#define pb push_back
#define fp first
#define sp second
#define ll long long
using namespace std;
int main()
{
   int T;
   cin>>T;
   while(T--)
   {
        ll l,r,count=0;
        cin>>l>>r;
        for(ll i=l;i<=r;i++)
        {
            if(((i%10)==2)||((i%10)==3)||((i%10)==9))
                count++;
        }
        cout<<count<<"\n";
   }
   return 0;
}
