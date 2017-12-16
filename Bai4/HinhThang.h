#pragma once
#include "TuGiac.h"
class HinhThang :
	public TuGiac
{
protected:
	TuGiac tG;
public:

	void TinhChat();
	double TinhDienTich();
	bool LaHinhThang();
	void Nhap();
	void Xuat();

	HinhThang();
	~HinhThang();
};

