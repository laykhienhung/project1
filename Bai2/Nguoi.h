#pragma once
#include <string>
#include <iostream>
using namespace std;
class Nguoi
{
protected:
	string hoTen;
	int namSinh;
	string noiSinh;
public:

	void Nhap();
	void Xuat();


	Nguoi();
	~Nguoi();
};

