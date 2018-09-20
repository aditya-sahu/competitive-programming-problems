#include <iostream>
using namespace std;

int main() {
	int T,G,N,Q,I;
	cin>>T;
	while(T--)
	{
		cin>>G;
		while(G--)
		{
			cin>>I>>N>>Q;
			if(N%2&&I!=Q)
				cout<<(N+1)/2;
			else
				cout<<N/2;
		}
	}
	return 0;
}