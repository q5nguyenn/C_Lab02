/* Chuong trinh tinh chu vi, dien tich cua hinh tron, hinh vuong, hinh chu nhat*/
#include <stdio.h>

#define pi 3.14

int main(void)
{
	float cv, rcn, dcn, r;
// Hinh tron
	printf("Nhap vao ban kinh hinh tron: ");
	scanf("%f", &r);
	printf("Chu vi hinh tron la: %.2f \n", 2 * pi * r);
	printf("Dien tich hinh tron la: %.2f \n", pi * r * r);
	printf("---------------------------------------------------\n");
// Hinh vuong
	printf("Nhap vao canh cua hinh vuong: ");
	scanf("%f", &cv);
	printf("Chu vi hinh vuong la: %.2f \n", 4 * cv);
	printf("Dien tich hinh vuong la: %.2f \n", cv * cv);
	printf("--------------------------------------------------\n");
// Hinh chu nhat
	printf("Nhap vao hai canh cua hinh chu nhat: \n");
	scanf("%f%f",&rcn ,&dcn);
	printf("Chu vi hinh chu nhat la: %.2f \n", 2 * (rcn + dcn));
	printf("Dien tich hinh chu nhat la: %.2f \n", dcn * rcn);

	return 0;
}
