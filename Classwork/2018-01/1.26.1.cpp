#include <bits/stdc++.h>
using namespace std;
int main()
{
	char s1[20],s2[20];
//	scanf("%s",s1);
//	scanf("%s",s2);
//	printf("%s\n",s1);
//	printf("%s\n",s2);
//	cin>>s1;
//	cin>>s2;
//	cout<<s1<<endl;
//	cout<<s2<<endl; 
//	gets(s1);
//	puts(s1);
	int i;
	while((s1[i]=getchar())!='\n')
		i++;
	s1[i]='\0';
	i=0;
	while(s1[i]='\0')
	{
		putchar(s1[i]);
		i++;
	}
    return 0;
}
