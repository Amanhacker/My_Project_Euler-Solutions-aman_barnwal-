#include<bits/stdc++.h>
using namespace std;

#define MAX_SIZE 100007
typedef long long int ll;

int multiply(int res[], int x, int res_size){
    int carry = 0;
    
    for(int i=0; i<res_size; i++){
        int w = res[i] * x + carry;
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

void findPower(int z){
    int res[MAX_SIZE];
    res[0] = 1;
    int res_size = 1;
    int x = 2;
    
    for(int i=0; i<z; i++){
        res_size = multiply(res, x, res_size);
    }
    
    int sum = 0;
    for(int i=0; i<res_size; i++){
        sum += res[i];
    }
    
    cout<<sum<<endl;
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int z;
	cin>>z;    
	
	findPower(z);
	return 0;
}