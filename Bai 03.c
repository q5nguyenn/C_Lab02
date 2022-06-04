/* Chuong trinh nhap vao 2 so in ra tong, hieu, tich, thuong cua 2 so*/
#include <stdio.h>

int main(void)
{
	int num1, num2;
	printf("Nhap so thu nhat: ");
	scanf("%d", &num1);
	printf("Nhap so thu hai:  ");
	scanf("%d", &num2);
	printf("Tong: %d \n",num1 + num2);
	printf("Hieu: %d \n",num1- num2);
	printf("Tich: %d \n",num1 * num2);
	printf("Thuong: %.2f \n",(float)num1 / num2);
	return 0;
}
