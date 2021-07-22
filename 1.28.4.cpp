#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char s[21];
	gets(s);
	for(int i=0;i<n;i++)
	{
		if(s[0]>='a'&&s[0]<='z')
			s[0]=s[0]-32;
		for(int j=1;j<strlen(s);j++)
		{
			if(s[j]>='A'&&s[j]<='Z')
				s[j]=s[j]+32;
		}
	}
	return 0;
}
