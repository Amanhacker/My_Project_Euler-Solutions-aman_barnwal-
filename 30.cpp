        //PROBLEM NO 30 - DIGIT FIFTH POWERS
#include<bits/stdc++.h>
using namespace std;

#define MAX_SIZE 354294		//999999
typedef long long int ll;

 //	pow(10, d-1) <= d1 * pow(9,5) < pow(10, d)
// When d = 6, find d1 and then MAX_SIZE = d1*pow(9,5)

//Here d1 = 6 so calculate the respective MAX_SIZE

int main(){
	int n;
	cin>>n;
	ll res = 0;
	
	for(int i=2; i<=MAX_SIZE; i++){
		ll sum = 0;

		string w = to_string(i);
		for(int j=0; j<w.length(); j++){
		    int q = (int)(w[j] - '0');
			sum += pow(q,n);
		}
		if(sum == i){
		    //cout<< i<<" ";
		    res += i;
		}	
	}
	//cout<<endl;
	cout<<res<<endl;
	return 0;
}