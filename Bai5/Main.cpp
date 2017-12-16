#include "GiaSuc.h"
#include "Bo.h"
#include "Cuu.h"
#include "De.h"

void main()
{
	Bo b;
	Cuu c;
	De d;
	int soLuongBo, soLuongCuu, soLuongDe;
	cout << "Nhap so luong bo: ";
	cin >> soLuongBo;
	cout << "Nhap so luong cuu: ";
	cin >> soLuongCuu;
	cout << "Nhap so luong de: ";
	cin >> soLuongDe;
	Bo *danhSachBo;
	danhSachBo = new Bo[soLuongBo];
	Cuu *danhSachCuu;
	danhSachCuu = new Cuu[soLuongCuu];
	De *danhSachDe;
	danhSachDe = new De[soLuongDe];

	cout << "Nhung tieng keu nghe duoc trong nong trai: " << endl;
	for (int i = 0; i < soLuongBo; i++)
	{
			danhSachBo[i].TiengKeu();
	}
	for (int i = 0; i < soLuongCuu; i++)
	{
			danhSachCuu[i].TiengKeu();
	}
	for (int i = 0; i < soLuongDe; i++)
	{
			danhSachDe[i].TiengKeu();
	}

	int tongSoCon = 0, tongSoSua = 0;
	for (int i = 0; i < soLuongBo; i++)
	{
		tongSoCon += danhSachBo[i].DeCon();
		tongSoSua += danhSachBo[i].CungCapSua();
	}

	cout << "Tong so con sau 1 lua sinh va tong so sua sau 1 lan cho sua cua bo: " << tongSoCon << ", " << tongSoSua << endl;
	

	tongSoCon = 0; tongSoSua = 0;
	for (int i = 0; i < soLuongCuu; i++)
	{
		tongSoCon += danhSachCuu[i].DeCon();
		tongSoSua += danhSachCuu[i].CungCapSua();
	}
	cout << "Tong so con sau 1 lua sinh va tong so sua sau 1 lan cho sua cua cuu: " << tongSoCon << ", " << tongSoSua << endl;

	tongSoCon = 0; tongSoSua = 0;
	for (int i = 0; i < soLuongDe; i++)
	{
		tongSoCon += danhSachDe[i].DeCon();
		tongSoSua += danhSachDe[i].CungCapSua();
	}
	cout << "Tong so con sau 1 lua sinh va tong so sua sau 1 lan cho sua cua de: " << tongSoCon << ", " << tongSoSua << endl;


	system("pause");
	delete danhSachBo[];
	delete danhSachCuu[];
	delete danhSachDe[];
}