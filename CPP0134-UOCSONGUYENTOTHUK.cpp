#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n,k;
		cin >> n >> k;
		int d=0, value=-1;
		for (int i=2; i<=sqrt(n); i++){
			while (n%i==0){
				d++;
				if(d==k){
					value=i;
					break;
				}
				n/=i;
			}
			if (value>0) break;
		}
		if (n>1){
			d++;
			if (d==k){
				value=n;
			}
		}
		cout << value << endl;
	}
	return 0;
}
