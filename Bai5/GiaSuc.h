#pragma once
#include <iostream>
#include <time.h>
using namespace std;
class GiaSuc
{
protected:
	int soGiaSuc;
	int soLuongSinhCon;
	int soLitSua;
public:

	int DeCon();
	int CungCapSua();
	void TiengKeu();



	GiaSuc();
	~GiaSuc();
};

