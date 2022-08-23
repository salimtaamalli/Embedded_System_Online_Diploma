# include <stdio.h>


int Is_prime ( int num);

void main()
{
	int a,b,i;
	printf(" Enter two integers \n");
	fflush(stdout);
	scanf("%d" "%d",&a,&b);
	printf("primitive numbers \n");
	if(a<b)
	{
		for(i=a;i<=b;i++)
		{
			if (Is_prime(i)) printf("%d \n" ,i);
		}
	}
	else 
	for(i=b;i<=a;i++)
		{
			if (Is_prime(i)) printf("%d \n" ,i);
		}

}

int Is_prime( int num)
{	
	int i=1;
	while((num%(num-i))&&(i<num-1))
	{
		i++;
	}
	if(i==num-1) return 1;
	else return 0;  
}
	