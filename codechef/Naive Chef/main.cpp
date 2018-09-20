//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <stack>
#include<iomanip>
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
        double N,A,B;
        int countA=0,countB=0;
        double res;
        cin>>N>>A>>B;
        vector<double> v(N);
        for(int i=0;i<N;i++)
        {
            cin>>v[i];
            if(v[i]==A)
                countA++;
            if(v[i]==B)
                countB++;
        }
        res=(countA/N)*(countB/N);
        cout.precision(10);
        cout.setf( ios::fixed, ios::floatfield );
        cout<<res<<"\n";
   }
   return 0;
}
