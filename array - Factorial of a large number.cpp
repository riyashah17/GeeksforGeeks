#include <iostream>
using namespace std;
#define MAX 10000

int multiply(int x, int res[], int res_size){
    int carry = 0;
    for(int i=0;i<res_size;i++){
        int prod = x*res[i]+carry;
        res[i] = prod%10;
        carry = prod/10;
    }
    
    while(carry){
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    
    return res_size;
}
int main() {
	//code
	int test;
	cin>>test;
	while(test--){
	    int n;
	    cin>>n;
	    int res[MAX];
	    int res_size=1;
	    res[0]=1;
	    
	    for(int i=2;i<=n;i++){
	        res_size = multiply(i,res,res_size);
	    }
	    
	    for(int i=res_size-1;i>=0;i--){
	        cout<<res[i];
	    }
	    cout<<"\n";
	}
	return 0;
}
