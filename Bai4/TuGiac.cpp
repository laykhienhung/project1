#include "TuGiac.h"



void TuGiac::Nhap()
{
	cout << "Nhap toa do dinh A: ";
	A.Nhap();
	cout << "Nhap toa do dinh B: ";
	B.Nhap();
	cout << "Nhap toa do dinh C: ";
	C.Nhap();
	cout << "Nhap toa do dinh D: ";
	D.Nhap();
}

void TuGiac::Xuat()
{
	TinhChat();
}

void TuGiac::TinhChat()
{
	cout << "Tu gia la 1 da giac co 4 canh" << endl;
}

double TuGiac::TinhDienTich()
{
	return 0.0;
}

TuGiac::TuGiac()
{
}


TuGiac::~TuGiac()
{
}
