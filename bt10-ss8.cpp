#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int array[10]={0,2,-4,5,5,8,8,0,1,1},temp_count=0,max_count=0,most_appear=0;
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
	bool printed[10] = {false};
	for(int i=0;i<10;i++)
	{
		if (printed[i]) continue;
	    temp_count=0;
	    for(int j=0;j<10;j++)
	    {
	    	if(array[i]==array[j])
			{
				temp_count++;
			}	
        }
	    if(temp_count==max_count)
	    {
		    printf("%d ",array[i]);
		    for (int k = 0; k < 10; k++) 
			{
                if (array[i] == array[k]) 
				{
                    printed[k] = true;
                }
            }
    	}
	}
	return 0;
}
