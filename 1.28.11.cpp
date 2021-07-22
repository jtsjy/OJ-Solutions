#include <bits/stdc++.h>
using namespace std;
int main()
{
	char s[2501];
	int k=0,x;
	cin>>x>>s;
	for(int i=0;i<strlen(s);i++)
	{
		int temp=i;
		while(s[i]==s[temp])
			temp++;
		if(temp-i==x)
		{
			cout<<s[i]<<endl;
			return 0;
		}
	}
	cout<<"No"<<endl;
	return 0;
}
