#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len=s.length();
    for(int i=0;i<len;i++)
    {
        if(s[i]==s[i+1])
            {
                s.erase(i,2);
                i-=2;
                len-=2;
            }
    }
    if(!s.length()) cout<<"Empty String";
    cout<<s;
}
