#include <bits/stdc++.h>
using namespace std;
int main()
{
	char s[21];
	bool flag1=true,flag2=true;
	gets(s);
	if(s[0]>='0'&&s[0]<='9')
		flag1=false;
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]>='a'&&s[i]<='z'||s[i]=='_'||s[i]>='A'&&s[i]<='Z'||s[i]>='0'&&s[i]<='9');
		else
			flag2=false;
	}
	if(flag1&&flag2)
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;
	return 0;
}
