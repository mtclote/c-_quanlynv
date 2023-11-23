#include"nhanvienquanly.h"
#include<iostream>
using namespace std;
nhanvienquanly::nhanvienquanly() :nhanvien()
{
	_luongcoban = 0;
	_hesoluong = 0;

}
nhanvienquanly::~nhanvienquanly()
{
	nhanvien::~nhanvien();
	_luongcoban = 0;
	_hesoluong = 0;
}
float nhanvienquanly::tinhluong()
{
	float kq;
	kq = _luongcoban * _hesoluong;
	return kq;
}
void nhanvienquanly::nhap()
{
	nhanvien::nhap();
	cout << "Nhap luong co ban: ";
	cin >> _luongcoban;
	cout << "Nhap he so luong: ";
	cin >> _hesoluong;
}
void nhanvienquanly::xuat()
{
	nhanvien::xuat();
	cout << "\nLuong co ban: " << _luongcoban;
	cout << "\nHe so luong: " << _hesoluong << endl;
}