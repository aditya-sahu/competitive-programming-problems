#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s;
    cin>>s;
    int i=0,count=1;
    while(s[i]!='\0')
    {
        if(isupper(s[i]))
            count++;
        i++;
    }
    cout<<count;
    return 0;
}
