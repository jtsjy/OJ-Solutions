#include <bits/stdc++.h>
using namespace std;
int main()
{
	char s[201];
	gets(s);
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]>='F'&&s[i]<='Z')
			printf("%c",s[i]-5);
		else if(s[i]>='A'&&s[i]<='E')
			printf("%c",s[i]+21);
		else
			printf("%c",s[i]);
	}
	return 0;
}
