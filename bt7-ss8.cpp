#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a[3][3]={{0,1,2},{3,4,5},{6,7,8}},sum=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(i==j)
			{
				printf("%d ",a[i][j]);
				sum+=a[i][j];
			}
		}
	}
	printf("Tong cac phan tu tren duong cheo chinh la: %d",sum);
	return 0;
}
