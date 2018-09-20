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
     int n,count=0;
     cin>>n;
	 string s;
	 vector<bool> s2(n);
	 cin>>s;
	 if((s[0]-'0')==1)
       {
         if(n>1) s2[1]=1;
         s2[0]=1;
       }
     if((s[n-1]-'0')==1)
    {
        if(n>1) s2[n-2]=1;
        s2[n-1]=1;
   }
	 for(int i=1;i<n-1;i++)
     {
        if((s[i]-'0')==1)
        {
            s2[i-1]=s2[i]=s2[i+1]=1;
        }
     }
     for(auto i:s2)
        if(i==0) count++;
      cout<<"\n"<<count;
   }
   return 0;
}
