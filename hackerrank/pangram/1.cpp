#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string str;
    int cunt=0,i,space=0;
    bool flag=false;
    getline(cin,str);
    for(i=0;i<str.length();i++) if(isupper(str[i])) str[i]+=32;
    for(i=0;i<str.length();i++)
    {
        for(int j=i+1;j<str.length();j++)
        {
                if(str[i]>str[j])
                    str[i]=(str[i]+str[j])-(str[j]=str[i]);
        }
    }
    for(i=0;i<str.length();i++)
        if(str[i]==' ') space++;
    for(i=space;i<(str.length()-1);i++)
    {
        if((str[i+1]-str[i]==1)||(str[i+1]==str[i]))
            flag=true;
        else { flag=false; break; }
    }
    if(flag) cout<<"pangram"; else cout<<"not pangram";
    return 0;
}
