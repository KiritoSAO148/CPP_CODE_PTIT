#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		long long n;
		cin >> n;
		long long dao=0;
		long long m=n;
		while (m>0){
			dao=dao*10+m%10;
			m/=10;
		}
		if (dao==n){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}
