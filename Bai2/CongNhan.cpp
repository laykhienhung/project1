#include "CongNhan.h"



void CongNhan::Nhap()
{
	Nguoi::Nhap();
	cout << "Nhap ma so cong nhan: ";
	cin >> this->maSoCongNhan;
	cout << "Nhap luong: ";
	cin >> this->luong;
}

void CongNhan::Xuat()
{
	Nguoi::Xuat();
	cout << "Ma so cong nhan: " << this->maSoCongNhan << endl;
	cout << "Luong: " << this->luong << endl;
}

CongNhan::CongNhan()
{
}


CongNhan::~CongNhan()
{
}
