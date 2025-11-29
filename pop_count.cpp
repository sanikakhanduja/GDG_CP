#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	// int set_bits= __builtin_popcount(n);
	// cout<<set_bits<<endl;
	// long long x;
	// cin>>x;
	// int set_bits_ll= __builtin_popcountll(x);
	// cout<<set_bits_ll<<endl;

	int leading_zeroes= __builtin_clz(n);
	cout<<leading_zeroes<<endl;

	int trailing_zeroes=__builtin_ctz(n);
	cout<<trailing_zeroes<<endl;
	int first_set_bit= 32-leading_zeroes;
	cout<<first_set_bit<<endl;
}