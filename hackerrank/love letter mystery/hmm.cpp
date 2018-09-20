#include<iostream>
using namespace std;
int mystery(string stro, int len)
{
    int i,j,cunt=0;
    {
        for(i=0,j=(len-1);i<len/2;i++,j--)
        {
            while(stro[i]!=stro[j])
            {
                if(stro[i]>stro[j]) stro[i]--;
                else stro[j]--; //adity
                cunt++;
            }
        }
    }
    return cunt;
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
            int result;
            string str;
            cin>>str;
            result=mystery(str,str.length());
            cout<<result<<endl;
    }
}
