//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <stack>
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
        int N,n=0;
        cin>>N;
        char S[N];
        for(int i=0;i<N;i++)
        {
            cin>>S[i];
            if(S[i]=='1')
                n++;
        }
        cout<<(n*(n+1))/2<<"\n";
    }
    return 0;
}
