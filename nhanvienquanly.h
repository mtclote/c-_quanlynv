#pragma once
#include"nhanvien.h"
#ifndef __NHANVIENQUANLY__
#define __NHANVIENQUANLY__
class nhanvienquanly :public nhanvien {
private:
	float _luongcoban;
	float _hesoluong;
public:
	nhanvienquanly();
	~nhanvienquanly();
	void nhap();
	void xuat();
	float tinhluong();
};
#endif // !__NHANVIENQUANLY__