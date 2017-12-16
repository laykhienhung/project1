#include "Diem.h"


void Diem::Nhap()
{
	cout << "Nhap hoanh do va tung do";
	cin >> x >> y;
}

void Diem::Xuat()
{
	cout << "(" << this->x << "," << this->y << ")" << endl;
}

double Diem::DoDai(Diem a, Diem b)
{
	double doDai = sqrt((b.x - a.x)*(b.x - a.x) + (b.y - a.y)*(b.y - a.y));
	return doDai;
}

Diem::Diem()
{
}


Diem::~Diem()
{
}
