/* Chuong trinh nhap vao diem 3 mon toan, ly, hoa in ra tong diem va diem trung binh*/
#include <stdio.h>

int main(void)
{
	float toan, ly, hoa, tong, tb;
	printf("Nhap vao diem toan: ");
	scanf("%f", &toan);
	printf("Nhap vao diem ly: ");
	scanf("%f", &ly);
	printf("Nhap vao diem hoa: ");
	scanf("%f", &hoa);
	printf("Tong diem 3 mon toan, ly, hoa la: %.2f \n", toan + ly + hoa);
	printf("Diem TB 3 mon toan, ly, hoa la: %.2f", (toan + ly + hoa) / 3);
	return 0;
}
