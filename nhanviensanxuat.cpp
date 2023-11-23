#include"nhanviensanxuat.h"
#include<iostream>
using namespace std;
nhanviensanxuat::nhanviensanxuat() :nhanvien()
{
  _sosanpham = 0;
}
nhanviensanxuat::~nhanviensanxuat()
{
	nhanvien::~nhanvien();
	_sosanpham = 0;
}
float nhanviensanxuat::tinhluong()
{
	float kq;
	kq = _sosanpham * 3000;
	return kq;
}
void nhanviensanxuat::nhap()
{
	nhanvien::nhap();
	cout << "Nhap so luong san pham: ";
	cin >> _sosanpham;
}
void nhanviensanxuat::xuat()
{
	nhanvien::xuat();
	cout << "\nSo luong san pham: " << _sosanpham << endl;
}