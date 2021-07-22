#include <bits/stdc++.h>
using namespace std;
int main()
{
	char s[1001];
	gets(s);
	s[strlen(s)]=' ';
	int k=0;
	for(int i=0;i<=strlen(s);i++)
	{
		if(s[i]!=' ')
			k++;
		else if(k>0)
		{
			if(s[i]<strlen(s))
			cout<<k<<",";
			else
			cout<<k<<endl;
			k=0;
		}
	}
	return 0;
}

