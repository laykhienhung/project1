#pragma once
#include "HinhThang.h"
class HinhBinhHanh :
	public HinhThang
{
protected:
	TuGiac tG;
public:

	void TinhChat();
	double TinhDienTich();
	bool LaHinhBinhHanh();
	void Nhap();
	void Xuat();
	
	HinhBinhHanh();
	~HinhBinhHanh();
};

