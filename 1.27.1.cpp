//08127700
#include <bits/stdc++.h>
using namespace std;
int main()
{
	char s[100001];
	gets(s);
	for(int i=0;i<strlen(s);i++)
	{
		int k=0;
		for(int j=0;j<strlen(s);j++)
		{
			if(s[i]==s[j])
				k++;
		}
		if(k==1)
		{
			cout<<s[i]<<endl;
			return 0;
		}
	}
	cout<<"no"<<endl;
	return 0;
}

