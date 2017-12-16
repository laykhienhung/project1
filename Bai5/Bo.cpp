#include "Bo.h"



int Bo::DeCon()
{
	srand(time(0));
	this->soLuongSinhCon = 1 + rand() % 10;
	return soLuongSinhCon;
}

int Bo::CungCapSua()
{
	srand(time(0));
	this->soLitSua = 0 + rand() % 21;
	return soLitSua;
}

void Bo::TiengKeu()
{
	cout << "Moo...Moo..." << endl;
}

Bo::Bo()
{
}


Bo::~Bo()
{
}
