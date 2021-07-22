#include <bits/stdc++.h>
using namespace std;
int main()
{
	char s1[21],s2[21];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s1>>s2;
		if(s1[0]=='R'&&s2[0]=='S'||s1[0]=='S'&&s2[0]=='P'||s1[0]=='P'&&s2[0]=='R')
			cout<<"Player1"<<endl;
		else if(s1[0]==s2[0])
			cout<<"Tie"<<endl;
		else
			cout<<"Player2"<<endl;
	}
	return 0;
}

