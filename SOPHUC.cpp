#include <bits/stdc++.h>
using namespace std;

struct SoPhuc{
	int thuc,ao;
};

SoPhuc binh_phuong_tong (SoPhuc A, SoPhuc B){
	SoPhuc tmp;
	tmp.thuc= ((A.thuc+B.thuc)*(A.thuc+B.thuc)) - ((A.ao+B.ao)*(A.ao+B.ao));
	tmp.ao= 2 * (A.ao+B.ao) * (A.thuc+B.thuc);
	return tmp;
}

void hien_thi (SoPhuc C){
	cout << C.thuc << " + " << C.ao << "i";
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		SoPhuc A;
		SoPhuc B;
		cin >> A.thuc >> A.ao >> B.thuc >> B.ao;
		SoPhuc C = binh_phuong_tong(A, B);
		hien_thi(C);
		cout << endl;
	}
}