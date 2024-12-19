#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int array[10]={0,1,-4,5,5,8,1,0,1,1},temp_count=0,max_count=0,most_appear=0;
	for(int i=0;i<10;i++)
	{
		temp_count=0;
		for(int j=0;j<10;j++)
		{
			if(array[i]==array[j])
			{
				temp_count++;
			}
		}
		if(temp_count>max_count)
		{
			max_count=temp_count;
			most_appear=array[i];
		}
	}
	printf("%d ",most_appear);
	return 0;
}
