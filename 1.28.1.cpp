#include<bits/stdc++.h>
using namespace std;
int main()
{
int l,i;
string s;
getline(cin,s);
l=s.size();
if(s[l-1]=='r'&&s[l-2]=='e'||s[l-1]=='y'&&s[l-2]=='l')
{
for(i=0;i<s.size()-2;i++)
cout<<s[i];
return 0;
}
if(s[l-1]=='g'&&s[l-2]=='n'&&s[l-3]=='i')
{
for(i=0;i<s.size()-3;i++)
cout<<s[i];
}
else
cout<<s;
return 0;
}
