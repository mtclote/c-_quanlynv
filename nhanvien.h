#pragma once
#include<iostream>
#include<string>
using namespace std;
#ifndef __NHANVIEN__
#define __NHANVIEN__
class nhanvien {
protected:
	string _hoten;
	string _ngaysinh;
	string _diachi;
	int _dienthoai;
public:
	nhanvien();
	nhanvien(string, string, string, int);
	~nhanvien();
	virtual void nhap();
	virtual void xuat();
	virtual float tinhluong() = 0;
};
#endif // !__NHANVIEN__
