#include<iostream>
#include<string>
using namespace std;
bool pal(string s)
{
    int i,j;
    bool flag=false;
    for(i=0,j=s.length()-1;i<s.length()/2;i++,j--)
    {
        if(s[i]==s[j])
            flag=true;
        else {
                flag=false; break; }
    }
    return flag;
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string s;
        bool flag;
        cin>>s;
        flag=false;
        flag=pal(s);
        if(flag) { cout<<"-1\n"; continue; }
        //cout<<flag;
        for(int i=0;i<s.length();i++)
        {
                string cs(s);
             //   strcpy(cs,s);
                cs.erase(i,1);
                flag=pal(cs);
                if(flag)
                {
                    cout<<i<<endl; break;
                }
        }
        if(!flag) cout<<"-1\n";
    }
    return 0;
}
