#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int array[4][4]={{1,2,3,4},{0,6,-1,-5},{5,-7,34,2},{11,-4,7,10}}, sum=0;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(i==0 || i==3 || j==0 || j==3)
			{
				sum=sum+array[i][j];
			}
		}
	}
	printf("Tong cac phan tu nam o bien la: %d",sum);
	return 0;
}
