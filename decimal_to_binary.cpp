#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string str="";
	while(n>0){
		int rem=n%2;
		str+=to_string(rem);
		n=n/2;
	}
	reverse(str.begin(),str.end());
	cout<<str<<endl;
}