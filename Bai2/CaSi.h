#pragma once
#include "NgheSi.h"
class CaSi :
	public NgheSi
{
private:
	string theLoai;
	string albumDauTay;
public:

	void Nhap();
	void Xuat();

	CaSi();
	~CaSi();
};

