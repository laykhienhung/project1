#pragma once
#include "HinhBinhHanh.h"
class HinhChuNhat :
	public HinhBinhHanh
{
protected:
	TuGiac tG;
public:

	void TinhChat();
	double TinhDienTich();
	bool LaHinhChuNhat();
	void Nhap();
	void Xuat();

	HinhChuNhat();
	~HinhChuNhat();
};

