#include <stdio.h>

int main()
{
	// Un algorithme qui lit deux entiers et affiche s’il est premier ou non.
	
	int n,m,o,p,q;

	printf("Saisir N :");
	scanf("%d",&n);
	printf("Saisir M :");
	scanf("%d",&m);

		for(int i=1 ; i<=n ;++i)
		{
				o=n%i;
				p=m%i;

			if(o==0 && p==0)
			{
				q=i;
			}
		}

		if(q==1)
		{
			printf("%d et %d sont premier entre eux\n",n,m);
		}
		else
		{
			printf("%d et %d ne sont pas premier enter eux\n",n,m);
		}
return (0);
}