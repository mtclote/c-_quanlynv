#pragma once
#include"nhanvien.h"
#ifndef __NHANVIENCONGNHAT__
#define __NHANVIENCONGNHAT__
class nhanviencongnhat :public nhanvien {
private:
	int _songaycong;
public:
	nhanviencongnhat();
	~nhanviencongnhat();
	void nhap();
	void xuat();
	float tinhluong();
};
#endif // !__NHANVIENCONGNHAT__