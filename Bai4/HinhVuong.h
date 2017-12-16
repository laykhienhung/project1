#pragma once
#include "HinhChuNhat.h"
class HinhVuong :
	public HinhChuNhat
{
public:

	void TinhChat();
	double TinhDienTich();
	bool LaHinhVuong();

	HinhVuong();
	~HinhVuong();
};

