#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len=s.length();
    int i=0;
    while(i<s.length())
    {
        if(s[i]==s[i+1])
            {
                s.erase(i,2);
                if(i>0) i--;
             //   len-=2;
            }
        else i++;
    }
    if(!s.length()) cout<<"Empty String";
    cout<<s;
}
