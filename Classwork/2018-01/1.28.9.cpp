#include <bits/stdc++.h>
using namespace std;
int main()
{
	char s[1100];
	gets(s);
	int k=1;
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]==s[i+1])
			k++;
		else
		{
			cout<<k<<s[i];
			k=1;
		}	
	}
	return 0;
}
