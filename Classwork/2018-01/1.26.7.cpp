#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s[100001];
	int flag;
	gets(s);
	for(int i=0;i<strlen(s);i++)
	{
		flag=1;
		for(int j=0;j<strlen(s);j++)
		if(i!=j&&s[i]==s[j])
			flag=0;
		if(flag)
		{
			cout<<s[i];
			return 0;
		}
	} 
	cout<<"no";
	return 0;
}
