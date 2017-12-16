#include "HinhThang.h"



void HinhThang::TinhChat()
{
	cout << "Hinh thang la hinh co 2 canh day song song nhau" << endl;
}

bool HinhThang::LaHinhThang()
{
	if (tG.A.y == tG.B.y&&tG.D.y == tG.C.y)
	{
		cout << "hinh vua nhap la hinh thang" << endl;
		return true;
	}
	else
	{
		cout << "hinh vua nhap khong phai hinh thang" << endl;
		return false;
	}
}

void HinhThang::Nhap()
{
	tG.Nhap();
}

void HinhThang::Xuat()
{
	if (LaHinhThang()==true)
	{
		TinhChat();
	}
}

HinhThang::HinhThang()
{
}


HinhThang::~HinhThang()
{
}
