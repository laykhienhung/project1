#pragma once
#include "Nguoi.h"
class HocSinh :
	public Nguoi
{
private:
	int khoi;
public:

	void Nhap();
	void Xuat();

	HocSinh();
	~HocSinh();
};

