#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;
int main()
{
   int T;
   cin>>T;
   while(T--)
   {
       string s;
       cin>>s;
      // char a[4];
      size_t lovely=0, countc=0, counth=0, counte=0, countf=0;
      size_t len=s.length();
      for(size_t j=3;j<len;j++) //hcefabcd
      {
          for(size_t i=j-3;i<=j;i++)
          {
            if(s[i]=='c')
                countc++;
            if(s[i]=='h')
                counth++;
            if(s[i]=='e')
                counte++;
            if(s[i]=='f')
                countf++;
          }
          if((countc==1)&&(counth==1)&&(counte==1)&&(countf==1))
            lovely++;
        countc=0; counth=0; counte=0; countf=0;
      }
      if(lovely>0)
        cout<<"lovely "<<lovely<<"\n";
      else
        cout<<"normal\n";
   }
   return 0;
}
