#include <iostream>
using namespace std;

int main(){
		int n;
		cin >> n;
		int a[n][3];
		for (int i=0; i<n; i++){
			for (int j=0; j<3; j++){
				cin >> a[i][j];
			}
		}
		int kq=0;
		for (int i=0; i<n; i++){
			int s=0;
			for (int j=0; j<3; j++){
				s+=a[i][j];
			}
			if (s>=2) kq++;
		}
		cout << kq << endl;
	return 0;
}

