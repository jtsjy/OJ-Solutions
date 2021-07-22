#include <bits/stdc++.h>
using namespace std;
int main()
{
	char s[256];
	gets(s);
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]=='A')
			cout<<"T";
		if(s[i]=='T')
			cout<<"A";
		if(s[i]=='G')
			cout<<"C";
		if(s[i]=='C')
			cout<<"G";
	}
	return 0;
}
