#include "Cuu.h"

int Cuu::DeCon()
{
	srand(time(0));
	this->soLuongSinhCon = 1 + rand() % 10;
	return soLuongSinhCon;
}

int Cuu::CungCapSua()
{

	srand(time(0));
	this->soLitSua = 0 + rand() % 6;
	return soLitSua;
}

void Cuu::TiengKeu()
{
	cout << "Blah...Blah..." << endl;
}

Cuu::Cuu()
{
}


Cuu::~Cuu()
{
}
