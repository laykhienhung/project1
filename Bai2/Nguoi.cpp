#include "Nguoi.h"



void Nguoi::Nhap()
{
	cin.ignore();
	cout << "Nhap ho ten: ";
	getline(cin, this->hoTen);
	cout << "Nhap nam sinh: ";
	cin >> this->namSinh;
	cin.ignore();
	cout << "Nhap noi sinh: ";
	getline(cin, this->noiSinh);
}

void Nguoi::Xuat()
{
	cout << "Ho ten: " << this->hoTen << endl;
	cout << "Nam sinh: " << this->namSinh << endl;
	cout << "Noi sinh: " << this->noiSinh << endl;
}

Nguoi::Nguoi()
{
}


Nguoi::~Nguoi()
{
}
