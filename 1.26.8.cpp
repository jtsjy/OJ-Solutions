#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[501],b[501];
	float c,k;
	int i,count=0;
	cin>>c>>a>>b;
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]==b[i])
			count++;
	}
	k=(count*1.0)/strlen(a)*1.0;
	if(k>=c)
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;
	return 0; 
}
