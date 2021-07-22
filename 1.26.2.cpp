#include <bits/stdc++.h>
using namespace std;
int main()
{
	char s[201];
	int sum=0;
	gets(s);
	for(int j=0;j<(strlen(s));j++)
	{
		sum+=s[j]-'0';
	}
	cout<<sum<<endl;
    return 0;
}
