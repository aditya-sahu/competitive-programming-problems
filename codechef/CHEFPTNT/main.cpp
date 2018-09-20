#include <iostream>
#include <vector>
using namespace std;
int main()
{
   int T;
   cin>>T;
   while(T--)
   {
       int N,M,X,K,counte=0,counto=0;
        cin>>N>>M>>X>>K;
        string workers;
        cin>>workers;
        for(int i=0;i<K;i++)
        {
            if(workers[i]=='E')
                counte++;
            else counto++;
        }




   }
   return 0;
}
