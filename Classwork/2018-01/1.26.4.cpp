#include <bits/stdc++.h>
using namespace std;
int main()
{
	char a[21],b[21];
	int sum=0;
	gets(a);
	gets(b);
	for(int i=0;i<strlen(a);i++)//��һ���������±� 
	{
		for(int j=0;j<strlen(b);j++)//�ڶ����������±� 
		{
			sum+=(a[i]-'0')*(b[j]-'0');
		}
	}
	cout<<sum;
    return 0;
}

