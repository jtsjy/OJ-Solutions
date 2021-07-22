#include<bits/stdc++.h>
int main()
{
char a[110];
int n1 ,i;
gets(a);
for(i=0;i<strlen(a)-1;i++)
{
printf("%c",a[i]+a[i+1]); 
} 
printf("%c",a[strlen(a)-1]+a[0]);
return 0;
}
