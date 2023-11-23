#include"nhanvien.h"
#include"quanly.h"
#include<iostream>
using namespace std;
void main()
{ 
	quanly *a = new quanly;
	a->nhap();
	a->xuat();	
	a->xuatthongtin();
	a->soluongnv();
	a->tongluong();
	delete a;
}