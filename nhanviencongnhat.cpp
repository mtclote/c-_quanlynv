#include"nhanviencongnhat.h"
#include<iostream>
using namespace std;
nhanviencongnhat::nhanviencongnhat() :nhanvien()
{
	_songaycong = 0;
}
nhanviencongnhat::~nhanviencongnhat()
{
	nhanvien::~nhanvien();
	_songaycong = 0;
}
float nhanviencongnhat::tinhluong()
{
	float kq;
	kq = _songaycong * 70000;
	return kq;
}
void nhanviencongnhat::nhap()
{
	nhanvien::nhap();
	cout << "Nhap so ngay cong: ";
	cin >> _songaycong;
}
void nhanviencongnhat::xuat()
{
	nhanvien::xuat();
	cout << "\nSo ngay cong: " << _songaycong <<endl;
}