#include <iostream>
using namespace std;

void fixArr (long long a[], int n){
	int tmp;
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			if (a[j]==i){
				tmp=a[j];
				a[j]=a[i];
				a[i]=tmp;
				break;
			}
		}
	}
	for (int i=0; i<n; i++){
		if (a[i]!=i){
			a[i]=-1;
		}
	}
	for (int i=0; i<n; i++){
		cout << a[i] << " ";
	}
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		long long a[n];
		for (int i=0; i<n; i++){
			cin >> a[i];
		}
		fixArr (a,n);
		cout << endl;
	}
	return 0;
}
