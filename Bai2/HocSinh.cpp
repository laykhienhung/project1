#include "HocSinh.h"



void HocSinh::Nhap()
{
	Nguoi::Nhap();
	cout << "Nhap khoi hoc sinh: ";
	cin >> this->khoi;

}

void HocSinh::Xuat()
{
	Nguoi::Xuat();
	cout << "Khoi cua hoc sinh: " << this->khoi << endl;
}

HocSinh::HocSinh()
{
}


HocSinh::~HocSinh()
{
}
