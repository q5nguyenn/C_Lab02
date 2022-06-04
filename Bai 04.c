/* Chuong trinh nhap vao do C va hien thi ra do F*/
#include <stdio.h>

int main(void)
{
	float c, f;
	printf("Nhap vao do C: ");
	scanf("%f", &c);
	f = 9 * c / 5 + 32;
	printf("%.2f do C se bang %.2f do F.", c, f);
	return 0;
}
