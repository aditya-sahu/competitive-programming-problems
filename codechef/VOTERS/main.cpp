#include<iostream>
#include <vector>
#include <stack>
#include <math.h>
#include <map>
#define pb push_back
#define fp first
#define sp second
using namespace std;
int main()
{
   map<int,int> umap;
   map<int,int>:: iterator itr;
   vector<string> v;
   int n1,n2,n3,cunt=0;
   int inp;
   cin>>n1>>n2>>n3;
   for(int j=0;j<(n1+n2+n3);j++)
   {
   	cin>>inp;
   	if(umap.find(inp)==umap.end())
        umap.insert(make_pair(inp,1));
    else
    {
        itr=umap.find(inp);
        itr->sp+=1;
        if((itr->sp)==2) cunt++;
    }
   }
   cout<<cunt;
   for(itr=umap.begin();itr!=umap.end();itr++)
   {
       if((itr->sp)>=2)
        cout<<"\n"<<itr->fp;
   }
   return 0;
}
