#include "CaSi.h"

// them commennt 
void CaSi::Nhap()
{
	NgheSi::Nhap();

	cin.ignore();
	cout << "Nhap the loai cua ca si: ";
	getline(cin, this->theLoai);

	cin.ignore();
	cout << "Nhap ten album dau tay: ";
	getline(cin, this->albumDauTay);
}

void CaSi::Xuat()
{
	NgheSi::Xuat();
	cout << "The loai cua ca si: " << this->theLoai << endl;
	cout << "Ten album dau tay: " << this->albumDauTay << endl;
}

CaSi::CaSi()
{
}


CaSi::~CaSi()
{
}
