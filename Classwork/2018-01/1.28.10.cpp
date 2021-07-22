#include <bits/stdc++.h>
using namespace std;
int main()
{
	char s[120];
	gets(s);
	int i=0,j=strlen(s)-1;
	while(i<j&&s[i]==s[j])
	{
		i++;
		j--;
	}
	if(i>=j)
		cout<<"yes"<<endl;
	return 0;
}

