#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    int sum1=0,sum2=0;
    cin >> n;
    /*vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }*/
    int a[n][n]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    }
    /*for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<a[i][j]<<" ";
            cout<<"\n";
    }*/
    int c=n-1,b=0;
    while(n>0)
    {
        sum2+=a[b][c];
        c--; b++;
        sum1+=a[n-1][n-1];
        n--;
    }
    cout<<sum1<<"\n"<<sum2;
    return 0;
}
