#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; long x;
    vector<int> v;
    cin>>n;
    while(n--){
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(auto i:v)
        cout<<i<<" ";
    return 0;
}
