// C++ program to print all permutations with
// duplicates allowed using rotate() in STL
#include <bits/stdc++.h>
using namespace std;
int counter=0, statusflag=1;
string arr[11];
// Function to print permutations of string str,
// out is used to store permutations one by one
int ispalin(string s)
{
    int i,len= s.length();
    int flag=0;
    for(i=0;i < len ;i++){
        if(s[i] != s[len-i-1]){
            flag = 1;
            break;
   }
    }
    if(flag==1) return 0;
   else return 1;
}
void permute(string str, string out, string str1,int *flag)
{
	// When size of str becomes 0, out has a
	// permutation (length of out is n)
	if (str.size() == 0)
	{
	    //int len=str1.length();
		if((ispalin(out)))
        {
                arr[counter]=out;
                return;
        }
        statusflag=0;
		return;
	}

	// One be one move all characters at
	// the beginning of out (or result)
	for (size_t i = 0; i < str.size(); i++)
	{
		// Remove first character from str and
		// add it to out
		permute(str.substr(1), out + str[0],str1, flag);

		// Rotate string in a way second character
		// moves to the beginning.
		rotate(str.begin(), str.begin() + 1, str.end());
	}
}
// Driver code
int main()
{
    int T;
    cin>>T;
    while(T--){
        statusflag=1;
        vector<string> perm;
        string str;
        cin>>str;
        int flag=1;
        permute(str, "",str,&flag);
        string s2=arr[counter];
        int A[26]={0};
        for(size_t i=0;i<str.length();i++)
        {
            A[str[i]-'a']=i+1;
        }
        for(size_t i=0;i<str.length();i++)
        {
            if(A[s2[i]-'a'+1]==0)
                cout<<A[s2[i]-'a'+1]<<"\n";
            else A2[s2[i]-'a'+1]
        }
        if(statusflag==0)
            cout<<"-1\n";
        counter++;
        /*for(size_t i=0;i<perm.size();i++)
        {

        }*/
    }
    return 0;
}
