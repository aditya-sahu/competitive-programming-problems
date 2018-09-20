#include<iostream>
using namespace std;
int main()
{
    int a=5,b=2;
    a!=b?b=(a+b)-(a=b):5;
    cout<<a<<"\n"<<b;
    return 0;
}
