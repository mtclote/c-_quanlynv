#pragma once
#include"nhanvien.h"
#ifndef __NHANVIENSANXUAT__
#define __NHANVIENSANXUAT__
class nhanviensanxuat :public nhanvien {
private:
	int _sosanpham;
public:
	nhanviensanxuat();
	~nhanviensanxuat();
	void nhap();
	void xuat();
	float tinhluong();
};
#endif // !__NHANVIENSANXUAT__
