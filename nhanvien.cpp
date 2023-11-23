#include"nhanvien.h"
#include<iostream>
using namespace std;
nhanvien::nhanvien()
{
	_hoten = "";
	_ngaysinh = "";
	_diachi = "";
	_dienthoai = 0;
}
nhanvien::nhanvien(string ten,string ngaysinh,string diachi,int diemthoai)
{
	_hoten = ten;
	_ngaysinh = ngaysinh;
	_diachi = diachi;
	_dienthoai = diemthoai;
}
nhanvien::~nhanvien()
{
	_hoten = "";
	_ngaysinh = "";
	_diachi = "";
	_dienthoai = 0;
}
void nhanvien::nhap()
{
	cin.ignore();
	cout << "Nhap ho ten: ";
	getline(cin, _hoten);
	cout << "Nhap ngay sinh: ";
	getline(cin, _ngaysinh);
	cout << "Nhap dia chi: ";
	getline(cin, _diachi);
	cout << "Nhap dien thoai: ";
	cin >> _dienthoai;
}
void nhanvien::xuat()
{
	cout << "\nHo ten: "<< _hoten;
	cout << "\nNgay sinh: " << _ngaysinh;
	cout << "\nDia chi: " << _diachi;
	cout << "\nDien thoai: " << _dienthoai;
}