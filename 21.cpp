		//PROBLEM NO 21 - AMICABLE NUMBERS
#include<bits/stdc++.h>
using namespace std;

int isPair(int z){
	int s1 = 0;
	for(int i=1; i<z; i++){
		if( (z % i)== 0 )       s1 += i;
	}
	return s1;
}

bool isAmic(int w){
	//find all proper divisors and find the sum
    int s2 = 0;
	for(int i=1; i<w; i++){
		if(w%i == 0)        s2 += i;
	}

	if(isPair(s2) == w && s2 != w)	    return true;
	else					return false;
}

int main(){
	int n;
	cin>>n;
    
	set<int> b;
	b.clear();
	int res = 0;
	for(int i=1; i<=n; i++){
		if(isAmic(i) == true)	b.insert(i);
	}

	set<int> :: iterator it;
	for(it = b.begin(); it!= b.end(); it++){
	    res += *it;
	    //cout<<*it<<" ";
	}	
	//cout<<endl;

	cout<<res<<endl;

	return 0;
}