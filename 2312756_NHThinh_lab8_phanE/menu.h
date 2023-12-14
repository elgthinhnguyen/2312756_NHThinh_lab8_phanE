#pragma once
void xuatMenu() {
	cout << "~~~~~~~~~~~~MENU CAC BAI~~~~~~~~~~~~";
	cout << "\n1.Nhap vao danh sach sinh vien";
	cout << "\n2.In ra danh sach sinh vien";
	cout << "\n3.Sap xep va xuat danh sach sinh vien giam dan theo diem trung binh";
	cout << "\n4.Sap xep va xuat danh sach sinh vien tang dan theo ten";
	cout << "\n5.Tim va xuat thong tin cua sinh vien co ten cho truoc";
	cout << "\n6.Xuat DSSV cua lop cho truoc";
	cout << "\n7.Xuat DSSV co kha nang khong duoc tot nghiep";
	cout << "\n8.Tim thong tin sinh vien theo ma so sv";
	cout << "\n9.Tinh ty le so sinh vien dat gioi tro len";
	cout << "\n10.Xep loai hoc luc cua sinh vien dua vao diem tb";
	cout << "\n11.Thong ke ty le hoc sinh theo xep loai hoc luc";
	cout << "\n12.Tinh diem tb cua tat ca sinh vien";
	cout << "\n13.Cho biet chenh lech ve so luong sinh vien nam va nu";
	cout << "\n14.Thong ke so luong sinh vien cua tung lop";
	cout << "\n15.Tim va  xuat thong tin cua nhung sinh vien co diem tb cao nhat";
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
}

int chonMenu(int soMenu) {
	int so;

	cin >> so;
	return so;
}
void xuLiMenu(int so, int& n) {
	
	
	switch (so) {

	case 1:;

		cout << "\n1.Nhap vao danh sach sinh vien";

		break;
	case 2:

		cout << "\n2.In ra danh sach sinh vien";

		break;
	case 3:

		cout << "\n3.Sap xep va xuat danh sach sinh vien giam dan theo diem trung binh";
		
		break;
	case 4:

		cout << "\n4.Sap xep va xuat danh sach sinh vien tang dan theo ten";
		break;
	case 5:

		cout << "\n5.Tim va xuat thong tin cua sinh vien co ten cho truoc";
		break;

	case 6:

		cout << "\n6.Xuat DSSV cua lop cho truoc";
		break;
	case 7:

		cout << "\n7.Xuat DSSV co kha nang khong duoc tot nghiep";

		
		break;
	case 8:
		cout << "\n8.Tim thong tin sinh vien theo ma so sv";
		break;
	
	case 9:

		cout << "\n9.Tinh ty le so sinh vien dat gioi tro len";

		break;

	case 10:

		cout << "\n10.Xep loai hoc luc cua sinh vien dua vao diem tb";
		break;
	
	case 11:

		cout << "\n11.Thong ke ty le hoc sinh theo xep loai hoc luc";
		break;
	
	case 12:

		cout << "\n12.Tinh diem tb cua tat ca sinh vien";
		break;
	
	case 13:

		cout << "\n13.Cho biet chenh lech ve so luong sinh vien nam va nu";
		break;
	
	case 14:

		cout << "\n14.Thong ke so luong sinh vien cua tung lop";
		break;
	
	case 15:

		cout << "\n15.Tim va  xuat thong tin cua nhung sinh vien co diem tb cao nhat";

		break;
	}
}
void hamXuLy(int soMenu) {
	int so;
	int n;
	cout << "So sinh vien: "; cin >> n;
	do {

		system("cls");


		xuatMenu();
		cout << "\nnhap 1 so de chon: ";
		so = chonMenu(soMenu);
		system("cls");
		xuLiMenu(so, n);

		if (so != 0) {
			cout << "\nfress any key to continue";
			_getch();
		}
		cout << "\nprogram ended!";
	} while (so != 0);

}