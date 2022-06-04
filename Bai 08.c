/* Chuong trinh hien thi ra kich thuoc cua cac kieu du lieu*/
#include <stdio.h>

int main(void)
{
	printf ("Kieu int: %d Byte \n", sizeof(int));
	printf ("So nguyen %d \n", 1);
	printf ("Kieu float: %d Byte \n", sizeof(float));
	printf ("So nguyen %f \n", 3.456);
	printf ("Kieu double: %d Byte \n", sizeof(double));
	printf ("So nguyen %lf \n", 3.4567891235);
	printf ("Kieu char: %d Byte \n", sizeof(char));
	printf ("So nguyen %c \n", 'E');
	printf ("Kieu long int: %d Byte \n", sizeof(long int));
	printf ("Kieu long double: %d Byte \n", sizeof(long double));
	return 0;
}
