#include <bits/stdc++.h>
using namespace std;
int main()
{
	char s[30000];
	gets(s);
	s[strlen(s)]=' ';
	int k=0,maxl=-1,minl=101,mini,maxi;
	for(int i=0;i<=strlen(s);i++)
	{
		if(s[i]!=' '&&s[i]!=',')
			k++;
		else if(k>0)
		{
			if(k>maxl)
			{
				maxl=k;
				maxi=i-k;
			}
			if(k<minl)
			{
				minl=k;
				mini=i-k;
			}
			k=0;
		}
	}
	for(int i=maxi;i<maxl+maxi;i++)
		cout<<s[i];
	cout<<endl;
	for(int i=mini;i<minl+mini;i++)
		cout<<s[i];
	cout<<endl;
	return 0;
}
