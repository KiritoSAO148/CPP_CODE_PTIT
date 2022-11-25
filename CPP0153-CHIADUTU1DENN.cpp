#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		long n,k;
		cin >> n >> k;
		int s=0;
		for (int i=1; i<=n; i++){
			s+=i%k;
		}
		cout << s << endl;
	}
}
