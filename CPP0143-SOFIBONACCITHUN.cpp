#include <iostream>
using namespace std;

long long fibo (int n){
	if (n<2){
		return n;
	}
	long long a=0,b=1;
	long long fibon=a+b;
	for (int i=1; i<n; i++){
		fibon=a+b;
		a=b;
		b=fibon;
	}
	return fibon;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		long long fibo_n=fibo(n);
		cout << fibo_n << endl;
	}
	return 0;
}
