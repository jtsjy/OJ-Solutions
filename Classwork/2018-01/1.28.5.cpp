#include <bits/stdc++.h>
using namespace std;
int main()
{
	char s[1001];
	gets(s);
	int k=0;
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]!=' ')
			k++;
		else if(k>0)
		{
			cout<<k<<",";
			k=0;
		}
	}
	cout<<k<<endl;
	return 0;
}
