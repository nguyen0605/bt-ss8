#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a[3][3]={{0,1,2},{3,4,5},{6,7,8}},sum=0;
	for(int i=0;i<3;i++)
	{
		printf("%d ",a[i][2-i]);
		sum+=a[i][3-i];
	}
	printf("Tong cac phan tu tren duong cheo phu la: %d",sum);
	return 0;
}
