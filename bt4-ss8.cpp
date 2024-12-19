#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a[3][4]={{1,2,101,4},{0,-5,-23,23},{44,-2,6,103}};
	int max=a[0][0];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
			}
		}
	}
	printf("Phan tu lon nhat la %d", max);
	return 0;
}
