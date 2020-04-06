    //PROBLEM NO 27 - NUMBER SPIRAL DIAGONALS

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	int n;
	cin>>n;
	
	int k;
	k = (n-3)/2 + 1;
	//We need to form the required matrix
	ll sum = 0;
	for(int i=1; i<=500; i++){
		ll w = 4*(4*i*i + i + 1);
		sum += w;
	}
  //    These are the patterns which can be seen
//      An = (9,25,49,81,121,...)
//      Bn = (5,17,37,65,101,...)
//      Cn = (3,13,31,57,91,...)
//      Dn = (7,21,43,73,111,...)

	cout<<sum + 1<<endl;

	return 0;
}