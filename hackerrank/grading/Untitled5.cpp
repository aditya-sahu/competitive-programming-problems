#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int grade,i;
        cin>>grade;
        i=grade;
        if(grade>=38)
        {
            while(i%5!=0)
                i++;
            if(i-grade<3)
                grade=i;
        }
        cout<<grade<<"\n";
    }
}
