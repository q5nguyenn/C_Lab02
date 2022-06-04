/* Chuong trinh tinh dien tich hinh thang*/
#include <stdio.h>

int main(void)
{
	float top, bottom, height, s;
	printf("Nhap vao day lon cua hinh thang: ");
	scanf("%f", &bottom);
	printf("Nhap vao day nho cua hinh thang: ");
	scanf("%f", &top);
	printf("Nhap vao chieu cao cua hinh thang: ");
	scanf("%f", &height);
	s = (top + bottom) * height / 2;
	printf("Dien tich hinh thang la: %.2f", s);
	return 0;
}
