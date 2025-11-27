#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin>>str;
	int n=str.size();
	int ans=0;
	int x=0;
	for(int i=n-1;i>=0;i--){
		if(str[i]=='1'){
			ans+=pow(2,x);
		}
		x++;
	}
	cout<<ans<<endl;
}