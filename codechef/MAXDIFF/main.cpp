//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <stack>
#include<algorithm>
#define pb push_back
#define fp first
#define sp second
#define mp make_pair
#define ll long long
using namespace std;
int main()
{
   int T;
   cin>>T;
   while(T--)
   {
        int N,K,sum1=0,sum2=0;
        cin>>N>>K;
        vector<int> w(N);
        for(int i=0;i<N;i++)
        {
            cin>>w[i];
        }
        sort(w.begin(), w.begin()+N);
        if(K>N/2)
            K=N-K;
        for(int i=0;i<K;i++)
            sum1+=w[i];
        for(int i=K;i<N;i++)
            sum2+=w[i];
        cout<<"\n"<<abs(sum1-sum2);
   }
   return 0;
}
