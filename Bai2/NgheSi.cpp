#include "NgheSi.h"



void NgheSi::Nhap()
{
	Nguoi::Nhap();
	cin.ignore();
	cout << "Nhap nganh nghe cua nghe si: ";
	getline(cin, this->nganhNghe);
}

void NgheSi::Xuat()
{
	Nguoi::Xuat();
	cout << "Nganh nghe: " << this->nganhNghe << endl;

}

NgheSi::NgheSi()
{
}


NgheSi::~NgheSi()
{
}
