#include <iostream>
#include<stdlib.h>
using namespace std;
int main()
{
   string s;
   int hr;
   cin>>s; //07:45:40PM
   if(s[8]=='P')
   {
       if(s[0]==0)
            hr=s[1];
        else{
            hr=atoi(&s[0]);
        }
        string s2=s;
        if(hr+12!=24) hr+=12;
        int hr1=hr/10,hr2=hr%10;
        cout<<hr1<<hr2;
        s2.erase(8,9);
        //s2[0]='hr1'; s2[1]='hr2';
        for(int i=2;s2[i]!='\0';i++)
            cout<<s2[i];

       //cout<<s2;
   }
   else
   {
        hr=atoi(&s[0]);
        s.erase(8,9);
        if(hr==12)
{
        cout<<"00";
        for(int i=2;s[i]!='\0';i++)
            cout<<s[i];
}
else cout<<s;
   }
   return 0;
}
