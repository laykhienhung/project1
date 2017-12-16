#pragma once
#include "Nguoi.h"
class CongNhan :
	public Nguoi
{
private:
	int maSoCongNhan;
	float luong;
public:

	void Nhap();
	void Xuat();

	CongNhan();
	~CongNhan();
};

