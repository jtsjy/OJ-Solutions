#include <bits/stdc++.h>
using namespace std;
int main()
{
	char s[51];
	gets(s);
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]>='x'&&s[i]<='z'||s[i]>='X'&&s[i]<='Z')
			s[i]=s[i]-23;
		else
			s[i]=s[i]+3;
		if(s[i]>='a'&&s[i]<='z')
			s[i]=s[i]-32;
		else if(s[i]>='A'&&s[i]<='Z')
			s[i]=s[i]+32; 
	}
	for(int i=strlen(s)-1;i>=0;i--)
	cout<<s[i];
	return 0;
}

