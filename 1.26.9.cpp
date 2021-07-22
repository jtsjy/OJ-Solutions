#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	string a[101],b[101];
	cin>>n;
	for(i=0;i<n;i++)
	{
	cin>>a[i]>>b[i];
	}
	for(i=0;i<n;i++){
	if(a[i]=="Rock")
	{
		if(b[i]=="Scissors") 
			cout<<"Player1"<<endl;
		if(b[i]=="Paper") 
			cout<<"Player2"<<endl;
		if(b[i]=="Rock") 
			cout<<"Tie"<<endl;
	}
	if(a[i]=="Scissors")
	{
		if(b[i]=="Rock") 
			cout<<"Player2"<<endl;
		if(b[i]=="Paper") 
			cout<<"Player1"<<endl;
		if(b[i]=="Scissors") 
			cout<<"Tie"<<endl;
	}
	if(a[i]=="Paper")
	{
		if(b[i]=="Rock") 
			cout<<"Player1"<<endl;
		if(b[i]=="Scissors") 
			cout<<"Player2"<<endl;
		if(b[i]=="Paper") 
			cout<<"Tie"<<endl;
	}
	}
	return 0;
}
