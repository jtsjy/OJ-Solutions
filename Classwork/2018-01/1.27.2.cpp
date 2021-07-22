#include <bits/stdc++.h>
using namespace std;
int main()
{
	char s1[501],s2[502];
	double x;
	cin>>x;
	cin>>s1>>s2;
	int num=0;
	for(int i=0;i<strlen(s1);i++)
	{
		if(s1[i]==s2[i])
			num++;
	}
	double ans;
	ans=(double)num/strlen(s1);
	if(ans>=x)
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;
	return 0;
}

