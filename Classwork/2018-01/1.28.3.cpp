#include <bits/stdc++.h>
using namespace std;
int main()
{
	char s[150];
	gets(s);
	for(int i=0;i<strlen(s);i++)
	{
		if(islower(s[i]))
			s[i]=toupper(s[i]);
	}
	puts(s);
	return 0;
}
