//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <stack>
#define pb push_back
#define fp first
#define sp second
#define ll long long
using namespace std;
int main()
{
       ll a;
       cin>>a;
       if((((a%6)-1)==0)||(((a%6)-3)==0)||((a%6)==0))
        cout<<"yes";
       else cout<<"no";
   return 0;
}
