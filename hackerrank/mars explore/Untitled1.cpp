#include <cmath>
#include <cstring>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s;
    cin>>s;
    int mist=0;
  //  int total=s.length()/3;
    bool a[s.length()];
    memset(&a,0,s.length()*sizeof(bool));
    for(int i=1;i<s.length();i+=3)
    {
        if(s[i]!='O')
            mist++;
        a[i]=1;
    }
    for(int i=0;i<s.length();i++)
    {
       if(!a[i])
       {
           if(s[i]!='S')
               mist++;
       }
    }
    cout<<mist;
    return 0;
}
