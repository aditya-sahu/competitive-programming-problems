#include <iostream>
#include <vector>
#include<math.h>
using namespace std;
void powerset(string input,string output)
{
    if(input.length()==0)
    {
        cout<<output<<"\n";
        return;
    }
    powerset(input.substr(1),output);
    powerset(input.substr(1),output+input[0]);
}
int main()
{
        int n;
        string input,output="";
        cout<<"Start entering the elements without space...\n";
        cin>>input;
        powerset(input,output);
   return 0;
}
