//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <stack>
#include <string.h>
#include<cmath>
#define pb push_back
#define fp first
#define sp second
using namespace std;
int main()
{
   int i,j,n;
   cout<<"Enter order of matrix:\t"; cin>>n;
   float a[n][n],b[n],c[n],eigen,y,precision;
   memset(b,0,n);
   memset(c,0,n);
   b[0]=1;
   cout<<"Start entering elements..\n";
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           cin>>a[i][j];
       }
   }
   cout<<"\nEnter precision upto which procedure continues:\t"; cin>>precision;
   eigen=b[0];
   do
   {
       y=eigen;
      // memset(c,0,n);
       for(i=0;i<n;i++)
       {
           c[i]=0;
           for(j=0;j<n;j++)
           {
               c[i]+=(a[i][j]*b[j]);
           }
       }
       eigen=abs(c[0]);
       for(i=0;i<n;i++)
       {
           eigen=(abs(c[i])>eigen)?abs(c[i]):eigen;
        }
       for(i=0;i<n;i++)
       {
           b[i]=c[i]/eigen;
       }
    }while(abs(y-eigen)>precision);
    cout<<"\nEigen value:\t"<<eigen;
    cout<<"\nEigen matrix:\t";
    for(i=0;i<n;i++)
        cout<<b[i]<<"\t";
   return 0;
}
