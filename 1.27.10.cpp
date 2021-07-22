#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char s[21];
	for(int i=0;i<n;i++)
	{
		gets(s);
		if(s[0]>='a'&&s[0]<='z')
			printf("%c",s[0]-32);
		else
			printf("%c",s[0]);
		for(int j=1;j<strlen(s);j++)
		{
			if(s[j]>='A'&&s[j]<='Z')
				printf("%c",s[j]+32);
			else
				printf("%c",s[j]);
		}
	}
	return 0;
}

