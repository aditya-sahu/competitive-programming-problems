#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> types;
    int typ,N,i,j,max=0;
    cin>>N;
    while(N--)
    {
        cin>>typ;
        types.push_back(typ);
    }
    for(i=0;i<N;i++)
    {
        int cunt=0;
        for(j=0;j<N;j++)
        {
            if(types[i]==types[j]) cunt++;
        }
        if(cunt>maxx)
            maxx=cunt;

    }
}
