#pragma once
#define MAX 100

struct SinhVien {
	string MaSV="";
	string HovaTenLot="";
	string Ten="";
	string GioiTinh="";
	int DTB=0;
	string Lop="";
};
typedef SinhVien DSSinhVien[MAX];
bool KTMaSV(int n, SinhVien SV, DSSinhVien DSSV) {
	for (int i = 0; i < n; i++) {
		if (DSSV[i].MaSV == SV.MaSV) {
			return 1;
		}
	}
	return 0;
}

void NhapSV(int n,SinhVien& SV, DSSinhVien DSSV) {
	system("cls");
	
	cout << "NHAP THIET BI " ;
	do {
		
		cout << "\nNhap vao ma sinh vien(max: 7): ";
		cin >> SV.MaSV; 

	} while (size(SV.MaSV) > 7 && KTMaSV(n, SV, DSSV));
	cin.ignore();
	do {
		cout << "\nNhap ho va ten lot sinh vien: "; getline(cin, SV.HovaTenLot);
	} while (size(SV.Ten) > 30 && size(SV.Ten) <= 0);
	do {
		cout << "\nNhap ten sinh vien: "; cin >> SV.Ten;
	} while (size(SV.Ten) > 10 && size(SV.Ten) <= 0);
	do {
		cout << "\nNhap vao gioi tinh(nam/nu): "; cin >> SV.GioiTinh;
	} while (SV.GioiTinh != "nam" && SV.GioiTinh != "nu");
	do {
		cout << "\nNhap vao DTB: "; cin >> SV.DTB;
	} while (SV.DTB <= 0 && SV.DTB >= 10);
	do {
		cout << "\nNhap vao lop cua sinh vien: "; cin >> SV.Lop;
	} while (size(SV.Lop) > 10 && size(SV.Lop) <= 0);

}

void XuatSV(SinhVien SV) {

	cout << endl << setiosflags(ios::left)
		<< setw(20) << SV.MaSV
		<< setw(25) << SV.HovaTenLot
		<< setw(25) << SV.Ten
		<< setw(30) << SV.Lop
		<< setw(30) << SV.GioiTinh
		<< setw(35) << SV.DTB;
}
void NhapDSSV(int n , DSSinhVien DSSV) {


	for (int i = 0; i < n; i++) {
		NhapSV(n,DSSV[i],DSSV);
	}
}

void XuatDSSV( int n,DSSinhVien DSSV) {
	cout << endl << setiosflags(ios::left)
		<< setw(20) << "Ma Sinh Vien "
		<< setw(25) << "Ho & Ten lot: "
		<< setw(25) << "Ten: "
		<< setw(30) << "Lop: "
		<< setw(30) << "Gioi Tinh: "
		<< setw(35) << "Diem Trung Binh: ";
	for (int i = 0; i < n; i++) {
		XuatSV(DSSV[i]);

	}
}


