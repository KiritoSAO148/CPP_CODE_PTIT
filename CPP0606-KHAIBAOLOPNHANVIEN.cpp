#include <bits/stdc++.h>
using namespace std;

class NhanVien{
	private:
		string ma,ten,gt,ns,dc,mst,hd;
	public:
		void nhap(){
		ma="00001";
		getline(cin,ten);
		cin >> gt >> ns;
		cin.ignore();
		getline(cin,dc);
		cin >> mst >> hd;
		}
		void xuat(){
			cout << ma << " " << ten << " " << gt << " " << ns << " " << dc << " " << mst << " " << hd;
		}
};

int main(){
    NhanVien a;
	a.nhap();
    a.xuat();
    return 0;
}
