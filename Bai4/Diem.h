#pragma once
#include <iostream> 
#include <string>
using namespace std;
class Diem
{

public:
	float x, y;

	void Nhap();
	void Xuat();
	double DoDai(Diem,Diem);

	Diem();
	~Diem();
};

