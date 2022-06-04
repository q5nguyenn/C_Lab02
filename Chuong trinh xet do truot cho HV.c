// Chuong trinh xet do truot cho hoc vien
#include <stdio.h>

int main (void)
{
	int tsb, sbh;
	int dlt, dth, dbtl;
	printf ("Nhap vao tong so buoi hoc cua mon hoc: ");
	scanf ("%d", &tsb);
	printf ("Nhap vao so buoi ban da di hoc: ");
	scanf ("%d", &sbh);
	if (sbh > 0.75 * tsb)
	{
		printf ("------------------------------------------\n");
		printf ("Nhap vao diem ly thuyet: \n ");
		scanf ("%d", &dlt);
		printf ("Nhap vao diem thuc hanh: \n ");
		scanf ("%d", &dth);
		printf ("Nhap vao diembai tap lon: \n ");
		scanf ("%d", &dbtl);
		if (dlt > 20 * 0.4)
			printf ("Ban da thi do ly thuyet.\n");
		else printf ("Ban da thi truot ly thuyet!\n");
		if (dth > 15 * 0.4)
			printf ("Ban da thi do thuc hanh.\n");
		else printf ("Ban da thi truot thuc hanh!\n");
		if (dbtl > 10 * 0.4)
			printf ("Ban da thi do bai tap lon. \n");
		else printf ("Ban da thi truot bai tap lon!\n");
	}
	else printf ("Ban phai hoc lai!");
	return 0;
	
}
