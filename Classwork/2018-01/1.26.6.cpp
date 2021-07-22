#include <bits/stdc++.h>
using namespace std;
int main()
{
	char s[256];
	gets(s);
	int sum=0;
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]>=48&&s[i]<=57)
			sum++;
	} 
	cout<<sum<<endl;
    return 0;
}
