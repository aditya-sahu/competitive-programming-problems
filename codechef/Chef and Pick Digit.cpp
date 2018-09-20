#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int T; cin>>T;
    while(T--)
    {
        //long long int N;
        string abc; cin>>abc;
        vector <int> v;
        for(auto fuk:abc)
           v.emplace_back(stoi(&fuk));
        int len=v.size(),z;
        int i,j;
        char c;
        vector<char> arr(100);
        //memset(&arr,0,sizeof(arr));
        for(i=0;i<len;i++)
        {
            if(v[i]>5)
            {
                for(j=0;j<len;j++)
                {
                    if(i==j) continue;
                    z=v[i]*10+v[j];
                    c=z;
                    if(z>=65&&z<=90)
                        arr[z]=c;
                }
            }
        }
        for(i=65;i<=90;i++)
          {  if(arr[i]) printf("%c",arr[i]);}
        printf("\n");
    }
}
