#include<bits/stdc++.h>
using namespace std;

#define MAX_SIZE 10007

int main(){
	int n, m, q;    //q is first 10th digit
	cin>>n>>m>>q;

	string s[n];
	for(int i=0; i<n; i++){
		cin >> s[i];
	}

	int res[MAX_SIZE];
	int res_size;

	int w = 0;
	int carry = 0;
	for(int j=m-1; j>=0; j--){

		int sum = carry;
		for(int i=0; i<n; i++){
			sum += (int)( s[i][j] - '0');
		}

		res[w] = sum % 10;
		w++;
		carry = sum / 10;
	}
    int r = m;
	while(carry){
		res[r] = carry % 10;
		carry = carry / 10;
		r++;
	}

	res_size = r;
	reverse(res, res+res_size);
	
	for(int i=0; i<q; i++)  cout<<res[i];
	cout<<endl;

	return 0;
}