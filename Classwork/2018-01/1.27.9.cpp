#include <bits/stdc++.h>
using namespace std;
int main()
{
	char s[101];
	gets(s);
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]>='a'&&s[i]<='z')
		s[i]=s[i]-32;
	 }
	for(int i=0;i<strlen(s);i++)
	cout<<s[i];
	return 0;
}

