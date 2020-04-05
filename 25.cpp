#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define MAX_SIZE 1000007

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n;
	cin>>n;

    int res = ceil(4.78497 * n - 3.1127);
    cout<<res<<endl;
// 	ll res=45;
// 	ll fib[MAX_SIZE];
// 	fib[1] = 1, fib[2] = 1;
	
// 	for(ll i=3; i<MAX_SIZE; i++){
// 		fib[i] = fib[i-1] + fib[i-2];

// 		string w = to_string(fib[i]);
// 		if(w.length()==n){
// 			res = i;
// 			break;
// 		}
// 	}
// 	cout<<res<<endl;

	return 0;
}