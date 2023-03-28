#include<stdio.h>
main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if(b/10==0)
	{
		if(c/100==0)
		{
			if(c/10==0)
			{
				printf("%d%2d%3d",a,b,c);
			}
			else
			{
				printf("%d%2d%3d",a,b,c);
			}
		}
		else
		{
			printf("%d%2d%d", a,b,c);
		}
	}
	else
	{
		if(c/100==0)
		{
			if(c/10==0)
			{
				printf("%d%d%3d",a,b,c);
			}
			else
			{
				printf("%d%d%3d",a,b,c);
			}
		}
		else
		{
			printf("%d%d%d", a,b,c);
		}
	}
}
