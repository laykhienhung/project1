#include "HinhChuNhat.h"



void HinhChuNhat::TinhChat()
{
	cout << "Hinh chu nhat la hinh binh hanh co 2 duong cheo bang nhau" << endl;
}

double HinhChuNhat::TinhDienTich()
{
	
	return DoDai(tG.A, tG.B)*DoDai(tG.A, tG.D);
}

bool HinhChuNhat::LaHinhChuNhat()
{
	if (LaHinhBinhHanh() == true)
	{
		if (DoDai(tG.A, tG.C) == DoDai(tG.B, tG.D))
		{
			cout << "Hinh vua nhap la hinh chu nhat" << endl;
			return true;
		}
		else
		{
			cout << "hinh vua nhap khong phai la hinh chu nhat" << endl;
			return false;
		}
	}
	else return false;
}

void HinhChuNhat::Nhap()
{
	tG.Nhap();
}

void HinhChuNhat::Xuat()
{
	if (LaHinhChuNhat() == true)
	{
		HinhChuNhat::TinhChat();
		HinhChuNhat::TinhDienTich();
	}
}

HinhChuNhat::HinhChuNhat()
{
}


HinhChuNhat::~HinhChuNhat()
{
}
