
//B�i 607: H�y khai b�o ki?u d? li?u d? bi?u di?n th�ng tin c?a 1 t?nh (TINH). Bi?t r?ng m?t t?nh g?m nh?ng th�nh ph?n sau:
//
//M� t?nh: Ki?u s? nguy�n 2 byte
//T�n t?nh: Chu?i t?i da 30 k� t?
//Di?n t�ch: Ki?u s? th?c
//Sau d� vi?t h�m nh?p, xu?t cho ki?u d? li?u n�y
//


#include <stdio.h>
#include<conio.h>

struct Tinh
{
	int MaTinh;
	char TenTinh[30];
	float DienTich;
};
typedef struct Tinh TINH; // tao ten thay the cho kieu du lieu da co

void NhapTinh(TINH &t)
{
	printf("Nhap ma tinh: \n");
	scanf("%d",&t.MaTinh);
	
	fflush(stdin);
	printf("Nhap vao ten tinh: \n");
	gets(t.TenTinh);
	
	printf("Nhap vao dien tich: \n");
	scanf("%f", &t.DienTich);
}

void XuatTinh(TINH t)
{
	printf("Ma tinh: %d\n", t.MaTinh);
	printf("Ten tinh: %s\n", t.TenTinh);
	printf("Dien tich: %.2f (km^2)\n", t.DienTich);
}


int main()
{
	TINH t1;
	NhapTinh(t1);
	XuatTinh(t1);
	
	getch();
	return 0;
}
