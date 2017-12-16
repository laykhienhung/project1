#include "Diem.h"
#include "TuGiac.h"
#include "HinhThang.h"
#include "HinhBinhHanh.h"
#include "HinhChuNhat.h"
#include "HinhVuong.h"
void main()
{
	HinhThang hT;
	HinhBinhHanh hBH;
	HinhChuNhat hCN;
	HinhVuong hV;
	int hinh;
	cout << "Nhap hinh can xem: " << endl;
	cout << "1. Hinh Thang" << endl;
	cout << "2. Hinh Binh Hanh" << endl;
	cout << "3. Hinh Chu Nhat" << endl;
	cout << "4. Hinh Vuong" << endl;
	cin >> hinh;
	switch (hinh)
	{
	case 1: hT.Nhap(); hT.Xuat(); break;
	case 2: hBH.Nhap(); hBH.Xuat(); break;
	case 3: hCN.Nhap(); hCN.Xuat(); break;
	case 4: hV.Nhap(); hV.Xuat(); break;
	default:
		break;
	}

	system("pause");
}