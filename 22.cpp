		//PROBLEM NO 22 - NAMES SCORES
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int findS(string w){
	int sum = 0;
	for(int i=0; i<w.length(); i++){
		int q = (int)(w[i] - 'a') + 1;
		sum += q;
	}
	return sum;
}

int main(){
	int n;
	cin>>n;
    
    vector<string> v;
	for(int i=0; i<n; i++){
		string s;
		cin>>s;
		v.push_back(s);
	}
	sort(v.begin(), v.end());

	int res = 0;
	int ind = 1;
	
	for(auto it=v.begin(); it!=v.end(); it++,ind++){
		ll sum = findS(*it) * ind;
		res += sum; 
	}
	cout<<res<<endl;

	return 0;
}