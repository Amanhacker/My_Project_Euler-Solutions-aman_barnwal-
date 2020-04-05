		//PROBLEM NO 18 : MAXIMUM PATH SUM

#include<bits/stdc++.h>
using namespace std;

#define MAX_SIZE 100007
typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n;
	cin>>n;
    int dp[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
			int x;
			cin>>x;
			dp[i][j] = x;
		}
	} 

	for(int i=n-2; i>=0; i--){
		for(int j=0; j<=i; j++){
			dp[i][j] += max(dp[i+1][j], dp[i+1][j+1]);
		}
	}   
	cout<<dp[0][0]<<endl;

	return 0;
}