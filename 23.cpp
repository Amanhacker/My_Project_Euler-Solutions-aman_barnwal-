		//PROBLEM NO 23 - NON ABUNDANT SUMS
#include<bits/stdc++.h>
using namespace std;

#define MAX_SIZE 100007
typedef long long int ll;

bool isAbundant(int w){
	int sum = 0;
	for(int i=1; i<w; i++){
		if(w % i == 0){
			sum += i;
		}
	}
	if(sum > w)	return true;
	else		return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n;
	cin>>n;

	set<int> s;
	set<int> :: iterator it;
	set<int> :: iterator it1;

	for(int i=2; i<=n; i++){
		if(isAbundant(i) == true)	s.insert(i);
	}
	
	bool findBool[MAX_SIZE];
	memset(findBool, true, sizeof(findBool));

	for(it=s.begin(); it!=s.end(); it++){
		for(auto it1=it ; it1!=s.end(); it1++){
			int z = (*it) + (*it1);
			if(z > n)	break;
			else        findBool[z] = false;
		}
	}

	ll res = 0;
	
	for(int i=1; i<=n; i++){
		if(findBool[i] == true){
			res += i;
		}
	}
	cout<<res<<endl;
	return 0;
}