#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a[10]={-5,-4,-3,-2,-1,0,1,2,3,4}, b, found=0;
	printf("Nhap vao phan tu bat ki: ");
	scanf("%d",&b);
	for(int i=0;i<10;i++)
	{
		if(b==a[i])
		{
			printf("Vi tri cua phan tu trong mang la a[%d]",i);
			found=1;
			break; 
		}
    }
    if(!found)
    {
    	printf("Phan tu khong ton tai trong mang");
	}
	return 0;
}
