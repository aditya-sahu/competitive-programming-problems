#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> types;
    long N,i,j;
    int typ,maxx=0,maxxy=0;
    cin>>N;
    for(i=0;i<N;i++)
    {
        cin>>typ;
        types.push_back(typ);
    }
  /*  for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(types[i]<types[j])
                {
                    swap(types[i],types[j]);
                }
        }
    }
*/
  /*  for(auto i:types)
        cout<<i;*/
    for(i=0;i<N;i++)
    {
        int cunt=0;
        for(j=0;j<N;j++)
        {
            if(types[i]==types[j]) cunt++;
        }
      //  cout<<"\n"<<cunt;
        if(cunt>=maxx)
         {
             if(cunt==maxx)
             {
                 maxx=min(types[i],maxxy);
                 maxxy=types[i];
             }
             else{
             maxx=cunt;
             maxxy=types[i];
             }
         }
    }
    cout<<maxxy;
}
