#pragma once
#include "Nguoi.h"
class SinhVien :
	public Nguoi
{
private:
	int maSoSinhVien;
	string chuyenNganh;
public:
	
	void Nhap();
	void Xuat();

	SinhVien();
	~SinhVien();
};

