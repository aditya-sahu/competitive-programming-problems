#include <iostream>
#include <vector>
using namespace std;
int main()
{
   int T;
   cin>>T;
   while(T--)
   {
        int N,U,D,jc=0;
        bool flag=0;
        cin>>N>>U>>D;
        vector<int> H(N);
        //cin>>H[0];
        for(int i=0;i<N;i++)
        {
            cin>>H[i];
        }
        for(int i=1;i<N;i++)
        {
            if(H[i]==H[i-1])
                jc++;
            if(H[i]>H[i-1])
            {
                if(H[i]-H[i-1]<=U)
                    jc++;
                else break;
            }
            if(H[i]<H[i-1])
            {
                if(abs(H[i]-H[i-1])>=D)
                    jc++;
                else
                        if(flag==0){ flag=1; jc++; }

                else break;
            }
        }
        cout<<jc+1<<"\n";
   }
   return 0;
}
