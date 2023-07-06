#include<stdio.h>
/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

main()
{
	int r,c;//r=row,c=column
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf("%d",c);
		}
	
	   printf("\n");
	
	}
}
