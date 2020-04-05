        //Project Euler Problem 20 - Factorial digit Sum
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define MAX_SIZE 2000000

int multiply(int res[], int x, int res_size){
	int carry = 0;
	int i = 0;
	for( ; i<=res_size-1; i++){
		ll w = res[i] * x + carry;
		res[i] = w % 10;
		carry = w / 10;
	}
	while(carry){
		res[res_size] = carry % 10;
		carry = carry / 10;
		res_size++;
	}
	return res_size;
}

void sumFact(int n){

	int res[MAX_SIZE];
	
	res[0] = 1;
	int res_size = 1;

	for(int i=2; i<=n; i++){
		res_size = multiply(res, i, res_size);
	}

	ll sum = 0;
	for(int i = res_size-1; i>=0; i--)	sum += res[i];
	cout<<sum<<endl;;
}

int main(){
	int n;
	cin>>n;

    sumFact(n);
    return 0;
}