#include<stdio.h>
#include<conio.h>
struct Diem
{
	float x, y; 
} ;
typedef struct Diem DIEM;
void NhapDiem(DIEM &);
void XuatDiem(DIEM );

void NhapDiem(DIEM &d)
{
	float diem;
	printf("\n Nhap x: ");
	scanf("%f", &diem);
	d.x = diem;
	
	printf("\n Nhap y: ");
	
	scanf("%f", &diem);
	d.y = diem; 
} 

void XuatDiem(DIEM d)
{
	printf("(%f,%f)", d.x,d.y); 
} 
int main()
{
	DIEM d; 
	NhapDiem(d); 
	XuatDiem(d);
	getch();
	return 0; 
} 