#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a[5]={0,5,-6,20,-4};
	for(int i=4;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
