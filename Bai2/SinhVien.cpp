#include "SinhVien.h"



void SinhVien::Nhap()
{
	Nguoi::Nhap();
	cout << "Nhap ma so sinh vien: ";
	cin >> this->maSoSinhVien;

	cin.ignore();
	cout << "Nhap chuyen nganh: ";
	getline(cin, this->chuyenNganh);
}

void SinhVien::Xuat()
{
	Nguoi::Xuat();
	cout << "Ma so sinh vien: " << this->maSoSinhVien << endl;
	cout << "Chuyen nganh: " << this->chuyenNganh << endl;
}

SinhVien::SinhVien()
{
}


SinhVien::~SinhVien()
{
}
