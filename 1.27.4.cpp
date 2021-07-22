#include <bits/stdc++.h>
using namespace std;
int main()
{
	char s[151];
	gets(s);
	for(int i=0;i<(strlen(s)-1);i++)
	{
		printf("%c",s[i]+s[i+1]);
	}
	printf("%c",s[strlen(s)-1]+s[0]);
	return 0;
}
