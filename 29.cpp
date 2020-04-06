	//PROBLEM NO 29 - DISTINCT POWERS
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define MAX_SIZE 1000007

set<string> s;

int multiply(int res[], int res_size, int x){
	int carry = 0;
	for(int i=0; i<res_size; i++){
		int r = res[i]*x + carry;
		res[i] = r % 10;
		carry = r / 10;
	}

	while(carry){
		res[res_size] = carry % 10;
		carry = carry / 10;
		res_size++;
	}
	return res_size;
}

void findPow(int a, int b){
	int res[MAX_SIZE];
	res[0] = 1;
	string w = to_string(a);
	int res_size = w.length();

	for(int i=1; i<=b; i++){
		res_size = multiply(res, res_size, a);
	}

	reverse(res, res + res_size);
	string z = "";
	for(int i=0; i<res_size; i++){
		z += (char)(res[i] + '0');
	}
	s.insert(z);
}

int main(){
    int m, n;   
    cin>>m>>n;
    
    set<double> w;
    
	for(int i=m; i<=n; i++){
		for(int j=m; j<=n; j++){
		    //findPow(i,j);
		    double res = pow(i,j);
		    w.insert(res);
		}
	}

    // cout<<s.size()<<endl;
    // s.clear();

	cout<<w.size()<<endl;
    w.clear();
	return 0;
}