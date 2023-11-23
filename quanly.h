#pragma once
#include"nhanvien.h"
using namespace std;
#define  MAX 100
#ifndef __QUANLY__
#define __QUANLY__
class quanly {
private:
	int n;
	int loai[MAX];
	nhanvien* arrnhanvien[MAX];
public:
	quanly();
	~quanly();
	void nhap();
	void xuat();
	void xuatthongtin();
	void soluongnv();
	void tongluong();
};
#endif // !__QUANLY__
