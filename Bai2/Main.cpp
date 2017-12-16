#include "Nguoi.h"
#include "SinhVien.h"
#include "HocSinh.h"
#include "CongNhan.h"
#include "NgheSi.h"
#include "CaSi.h"

void main()
{
	SinhVien sV;
	HocSinh hS;
	CongNhan cN;
	NgheSi nS;
	CaSi cS;
	int soDoiTuong = 0;
	cout << "1. Sinh vien" << endl;
	cout << "2. Hoc sinh" << endl;
	cout << "3. Cong nhan" << endl;
	cout << "4. Nghe si" << endl;
	cout << "5. Ca si" << endl;

	do
	{
		if (soDoiTuong < 0 && soDoiTuong > 5)
			cout << "Nhap sai, nhap lai";
			cout << "Nhap so doi tuong can nhap: " << endl;
			cin >> soDoiTuong;
	} while (soDoiTuong<0&&soDoiTuong>5);

	switch (soDoiTuong)
	{
	case 1:sV.Nhap(); sV.Xuat() ; break;
	case 2:hS.Nhap(); hS.Xuat(); break;
	case 3:cN.Nhap(); cN.Xuat(); break;
	case 4:nS.Nhap(); nS.Xuat(); break;
	case 5:cS.Nhap(); cS.Xuat(); break;
	default:
		break;
	}
	system("pause");
}
