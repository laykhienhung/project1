#include "De.h"

int De::DeCon()
{
	srand(time(0));
	this->soLuongSinhCon = 1 + rand() % 10;
	return soLuongSinhCon;
}

int De::CungCapSua()
{

	srand(time(0));
	this->soLitSua = 0 + rand() % 11;
	return soLitSua;
}

void De::TiengKeu()
{
	cout << "Blee...Blee..." << endl;
}


De::De()
{
}


De::~De()
{
}
