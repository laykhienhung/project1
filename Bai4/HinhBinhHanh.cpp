#include "HinhBinhHanh.h"



void HinhBinhHanh::TinhChat()
{
	cout << "Hinh binh hanh la hinh thang co 1 cap canh song song va bang nhau" << endl;
}

bool HinhBinhHanh::LaHinhBinhHanh()
{
	if (LaHinhThang() == true)
	{
		if (DoDai(tG.A, tG.B) == DoDai(tG.D, tG.C) || DoDai(tG.A, tG.D) == DoDai(tG.B, tG.C))
		{
			cout << "hinh vua nhap la hinh binh hanh" << endl;
			return true;
		}
		else
		{
			cout << "hinh vua nhap khong phai la hinh binh hanh" << endl;
			return false;
		}
	}
	else
		return false;
}

void HinhBinhHanh::Nhap()
{
	tG.Nhap();
}

void HinhBinhHanh::Xuat()
{
	if (LaHinhBinhHanh() == true)
	{
		TinhChat();
	}
}

HinhBinhHanh::HinhBinhHanh()
{
}


HinhBinhHanh::~HinhBinhHanh()
{
}
