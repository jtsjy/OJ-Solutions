#include <bits/stdc++.h>
using namespace std;
int main()
{
	char s[201],a,b;
	gets(s);
	cin>>a>>b;
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]==a)
			s[i]=b;
	 } 
	cout<<s;
    return 0;
}
