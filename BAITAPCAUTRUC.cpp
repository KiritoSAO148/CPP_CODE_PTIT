#include <bits/stdc++.h>
using namespace std;

struct SinhVien{
	string maSV;
	string hoTen;
	string lop;
	double diem1;
	double diem2;
};

int cmp1 (SinhVien sv1, SinhVien sv2){
	return sv1.hoTen < sv2.hoTen;
}

int cmp2 (SinhVien sv1, SinhVien sv2){
	return sv1.diem1+sv1.diem2 > sv2.diem1+sv2.diem2;
}

void nhapSV(SinhVien &sv){
	cin >> sv.maSV;
	cin.ignore();
	getline(cin,sv.hoTen);
	cin >> sv.lop;
	cin >> sv.diem1;
	cin >> sv.diem2;
}

void inSV(SinhVien sv){
	if (sv.diem2>=7.0){
		cout << sv.maSV << " " << sv.hoTen << " " << sv.lop << " " << fixed << setprecision(1) << sv.diem1 << " " << sv.diem2 << endl;
	}
}

int main(){
	int n;
	cin >> n;
	struct SinhVien sv[n];
	for (int i=0; i<n; i++){
		nhapSV(sv[i]);
	}
	sort (sv,sv+n,cmp1);
	for (int i=0; i<n; i++){
		inSV(sv[i]);
	}
	sort (sv,sv+n,cmp2);
	for (int i=0; i<n; i++){
		inSV(sv[i]);
	}
	return 0;
}
