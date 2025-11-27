#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	int a,b,x,y;
	cin>>a>>b>>x>>y;
     ////case when a is odd and b<a-1
	if(b<a-1 && a%2!=0){
		cout<<-1<<endl;
		continue;
	}
	//case when a is even and b<a
	if(b<a && a%2==0){
		cout<<-1<<endl;
		continue;
	}

	if(b==a){
		cout<<0<<endl;
		continue;
		
	}
	// case when b is a-1 and a is odd
	if(b==a-1 && a%2!=0){
		cout<<y<<endl;
		continue;
	}
	//count the cost here if a is even-> min of xor and add , if a is odd only add
	long long cost=0;
	while(a!=b){
		if(a%2==0){
			cost+=min(x,y);
		}
		else{
			cost+=x;
		}
		a++;
	}
	cout<<cost<<endl;
}

}
