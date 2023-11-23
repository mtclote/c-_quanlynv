#include"nhanvien.h"
#include"nhanviensanxuat.h"
#include"nhanviencongnhat.h"
#include"nhanvienquanly.h"
#include"quanly.h"
#include<iostream>
using namespace std;
quanly::quanly()
{
	this->n = 0;
	
	for (int i = 0; i < MAX; i++)
	{
		this->loai[i] = 0;
		arrnhanvien[i] = NULL;
	}
}
quanly::~quanly()
{
	if (this->n > 0)
	{
		for (int i = 0; i < this->n; i++)
		{
			delete arrnhanvien[i];
			this->loai[i] = 0;
			arrnhanvien[i] = NULL;
		}
		this->n = 0;
		
	}
}
void quanly::nhap()
{
	cout << "Nhap so luong nhan vien: ";
	cin >> this->n;

	cout << "LOAI NHAN VIEN";
	cout << "\n1. Nhan vien cong nhat.";
	cout << "\n2. Nhan vien san xuat.";
	cout << "\n3. Nhan vien quan ly.";

	
	for (int i = 0; i < this->n; i++)
	{
		cout << "\nNhap loai cua nhan vien thu " << i + 1<<"   ";
		cin >> this->loai[i];
		if (loai[i] == 1)
		{
			this->arrnhanvien[i] = new nhanviencongnhat();
			this->arrnhanvien[i]->nhap();
			
		}
		if (loai[i] == 2)
		{
			this->arrnhanvien[i] = new nhanviensanxuat();
			this->arrnhanvien[i]->nhap();

		}
		if (loai[i] == 3)
		{
			this->arrnhanvien[i] = new nhanvienquanly();
			this->arrnhanvien[i]->nhap();

		}
	}
}
void quanly::xuat()
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhan vien thu " << i + 1;
		if (loai[i] == 1)
		{
			
			arrnhanvien[i]->xuat();
			cout <<"luong" << arrnhanvien[i]->tinhluong()<<endl;
		}
		if (loai[i] == 2)
		{
			 arrnhanvien[i]->xuat();
			 cout << "luong" << arrnhanvien[i]->tinhluong() << endl;

		}
		if (loai[i] == 3)
		{
			 arrnhanvien[i]->xuat();
			 cout << "luong" << arrnhanvien[i]->tinhluong() << endl;

		}
		
	}
}

void quanly::xuatthongtin()
{
	cout << "cong ty trach nhiem vo han 1 minh em"<<endl;
}

void quanly::soluongnv()
{
	int a=0, s=0, d=0;
	for (int i = 0; i < n; i++)
	{
		if (loai[i] == 1)
		{

			a++;

		}
		if (loai[i] == 2)
		{
			s++;

		}
		if (loai[i] == 3)
		{
			d++;
		}

	}
	cout << "\n so Nhan vien cong nhat  " << a;
	cout << "\n so Nhan vien san xuat  "<<s;
	cout << "\n so Nhan vien quan ly  "<<d;

}

void quanly::tongluong()
{
	float tong = 0;
	for (int i = 0; i < n; i++)
	{
		
		if (loai[i] == 1)
		{

		tong+= arrnhanvien[i]->tinhluong();

		}
		if (loai[i] == 2)
		{
		tong+= arrnhanvien[i]->tinhluong();

		}
		if (loai[i] == 3)
		{
		tong+= arrnhanvien[i]->tinhluong();

		}

	}
	cout << "\ntong luong "<<tong;
}