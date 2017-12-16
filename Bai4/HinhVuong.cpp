#include "HinhVuong.h"



void HinhVuong::TinhChat()
{
	cout << "Hinh vuong la hinh chu nhat co 4 canh bang nhau" << endl;
}

double HinhVuong::TinhDienTich()
{
	return DoDai(tG.A, tG.B)*DoDai(tG.A, tG.D);
}

bool HinhVuong::LaHinhVuong()
{
	if (LaHinhChuNhat() == true)
	{
		if (DoDai(tG.A, tG.B) == DoDai(tG.A, tG.D))
		{
			cout << "Hinh vua nhap la hinh vuong" << endl;
			return true;
		}
		else
		{
			cout << "Hinh vua nhap khong phai hinh vuong" << endl;
			return false;
		}
	}
	else return false;
}

HinhVuong::HinhVuong()
{
}


HinhVuong::~HinhVuong()
{
}
