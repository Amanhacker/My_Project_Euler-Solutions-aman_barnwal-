	//PROBLEM NO 14 - LONGEST COLLATZ SEQUENCE
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	ll n = 1000000;
	ll res;
	int max = 0;
	for(ll i=2; i<n; i++){
		int len = 0;
		ll w = i;
		 while(w != 1){
		 	if(w % 2 == 0)	w = w / 2;
		 	else			w = 3*w + 1;
		 	len++; 
		 }
		 if(max < len){
		 	max = len;
		 	res = i;
		 }
	}
	cout<<res<<endl;
	return 0;
}