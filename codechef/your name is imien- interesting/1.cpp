#include<iostream>
using namespace std;
int main()
{
    int T; cin>>T;
    while(T--)
    {
        string m,w;
        cin>>m>>w;
        int l1,l2;
        l1=m.length();
        l2=w.length();
        if(l1>l2)
        {
            int j=0;
            for(int i=0;i<l1;i++)
            {
                if(m[i]==w[j])
                    j++;
            }
            if(j==l2) cout<<"YES\n"; else cout<<"NO\n";
        }
        else
        {
            int j=0;
            for(int i=0;i<l2;i++)
            {
                if(w[i]==m[j])
                    j++;
            }
            if(j==l1) cout<<"YES\n"; else cout<<"NO\n";
        }
    }
}
