#pragma once
#include "Diem.h"
class TuGiac :
	public Diem
{
protected:

public:
	Diem A, B, C, D;
	void Nhap();
	void Xuat();
	void TinhChat();
	double TinhDienTich();
	TuGiac();
	~TuGiac();
};

