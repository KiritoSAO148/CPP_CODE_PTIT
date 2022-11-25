#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n,k;
		cin >> n >> k;
		int a[n];
		for (int i=0; i<n; i++){
			cin >> a[i];
		}
		for (int i=0; i<n-1; i++){
			for (int j=n-1; j>i; j--){
				if (a[j]<a[j-1]){
					int tmp=a[j];
					a[j]=a[j-1];
					a[j-1]=tmp;
				}
			}
		}
		cout << a[k-1] << endl;
	}
	return 0;
}
