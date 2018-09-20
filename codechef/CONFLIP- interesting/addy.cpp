#include <iostream>
using namespace std;
int T,G,I,Q,i,j,headcount=0,tailcount=0;
long long N;
int main()
{
	cin>>T;
	while(T--)
	{
		cin>>G;
		while(G--)
		{
			cin>>I>>N>>Q;
			bool coins[N];
			if(I==1) 
				{
					for(i=0;i<N;i++)
						coins[i]=false;
				}			
			else
			{
				for(i=0;i<N;i++)
					coins[i]=true;
			}	
			for(i=0;i<N;i++)
			{
				for(j=i;j>=0;j--)
				{
					if(coins[j]==false)
						coins[j]=true;
					else
						coins[j]=false;
				}
			}
			for(i=0;i<N;i++)
				{
					if(coins[i]==false);
						headcount++;
				}
			tailcount=N-headcount;
			if(Q==1)
				cout<<headcount<<"\n";
			else
				cout<<tailcount<<"\n";
		}
	}
	return 0;
}