#pragma once
#include "Nguoi.h"
class NgheSi :
	public Nguoi
{
protected:
	string nganhNghe;

public:

	void Nhap();
	void Xuat();

	NgheSi();
	~NgheSi();
};

