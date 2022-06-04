// Bai 02
#include <stdio.h>
#include <conio.h>
main(){
int num = 10; //Kieu du lieu so nguyen
char ch = 'A'; // Kieu du lieu ky tu
float f = 25.3; // Kieu du lieu so thuc float 
double d = 25.3; // Kieu du lieu so thuc double co mien rong hon , chinh xac hon float, co the co 10 con so phan thap phan
printf("num = %d\n", num); // in ra man hinh so num, ket qua se la so 10.
printf("ch = %c\n", ch); // in ra man ky tu A
printf("f = %.2f\n", f); // in ra man hinh kieu so thuc, 2 con so phan thap phan, ket qua se la 25.30
printf("d = %f\n", d); // in ra man hinh kieu so thuc, mac dinh se co 6 con so phan thap phan, ket qua se la 25.300000
getch();
}

