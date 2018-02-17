#include<stdio.h>
int main()
{
	int i,j,k,t,b[100],w[2],z=0;
	int a[100],c;///integer size is a problem 
	t=scanf("%d",&t);
	while(t--)
	{
		for(i=0;i<2;i++)
		scanf("%d",&w[i]);
		for(j=0;j<w[0];j++)
		scanf("%d",&a[j]);
		for(k=0;k<w[0];k++)
		{
			b[k]=a[k]+w[1];
		}
		for(k=0;k<w[0];k++)
		{
			z=2*(b[k]-(b[k]/10)*10) ;
			z=(b[k]/10)-z;
			z=z%7;
			if(z==0)	
			c++;
		}
	printf("%d\n",c);
	}
	return 0;
}
//try coding in java shall we? :/