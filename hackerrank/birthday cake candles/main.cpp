#include <bits/stdc++.h>

using namespace std;

long birthdayCakeCandles(int n, vector <long> ar) {
    long max=ar[0],cunt=0;
    for(auto i:ar)
    {
        if(i>max)
        {
            max=i;
            cunt=1;
        }
        else if(i==max)
            cunt++;
    }
    return cunt;
    // Complete this function
}

int main() {
    int n;
    cin >> n;
    vector<long> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    long result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}
