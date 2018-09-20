//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <stack>
#include <math.h>
#define pb push_back
#define fp first
#define sp second
using namespace std;
int main()
{
   int N,K;
   long long A,res;
   cin>>A>>N>>K;
   cout<<A%(N+1)<<" ";
    for(int i=1;i<K;i++)
       {
           //if(i==0) cout<<A%(N+1)<<" ";
           res=A/pow((N+1),i);
           cout<<res%(N+1)<<" ";
       }
       return 0;
}
