#include <bits/stdc++.h>
using namespace std;
int main()
{
	char s[501];
	gets(s);
	int k=0,temp;
	s[strlen(s)]=' ';
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]!=' ')
			k++;
		else
		{
			temp=i;
			for(int j=0;j<k;j++)
			{
				temp--;
				cout<<s[temp];
			}
			k=0;
			if(i!=strlen(s))
				cout<<" ";
		}
	}
	return 0;
}
