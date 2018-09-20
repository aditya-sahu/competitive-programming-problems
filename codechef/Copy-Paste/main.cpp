//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <stack>
#include <map>
#define pb push_back
#define fp first
#define sp second
using namespace std;
int main()
{
   int T;
   cin>>T;
   while(T--)
   {
        int N,inp,count=0;
        cin>>N;
        map<int,bool> a;
        for(int i=0;i<N;i++)
        {
            cin>>inp;
            a[inp]=1;
        }
        for(int i=0;i<100001;i++)
        {
            if(a[i]==1)
                count++;
        }
        cout<<count<<"\n";
   }
   return 0;
}
