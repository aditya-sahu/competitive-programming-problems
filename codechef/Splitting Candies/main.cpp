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
        ll N,K;
        cin>>N>>K;
        if(K==0)
        {
            cout<<"\n"<<0<<" "<<N;
            continue;
        }
        if((N%K)==0)
        {
            cout<<"\n"<<N/K<<" "<<0;
            continue;
        }
        cout<<"\n"<<(ll)N/K<<" "<<N%K;
   }
   return 0;
}
