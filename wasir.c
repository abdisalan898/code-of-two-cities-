#include <stdio.h>
	const int CITY =2;
	const int WEEK =7;
	int main(int argc, char const *argv[])
	{
		int temperature[CITY][WEEK];
		int i, j;

		for(i=0;i<CITY; i++)
		{
			for(j=0;j<WEEK; j++)
		{
	   printf("CITY[%d], Day[%d]:", i+1, j+1);
	   scanf("%d", &temperature[i][j]);
	   }
	   printf("\n");
	   }
	   printf("Displaying Values:\n\n");
	  for(i=0;i<CITY;i++)
      {
      	for(j=0;j<WEEK;j++)
       {
       	printf("city[%d], Day[%d=%d\n", i+1,j+1,temperature[i][j]);
       }
       printf("\n");
	   }
		return 0;
	}
