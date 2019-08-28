#include<stdio.h>
#include<math.h>

int main()
{
	int n, aux = 0, aux2 = 2;
	scanf("%d", &n);
	int matriz[n + 1][n + 1];
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
			matriz[i][j] = 0;
	
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			if(i == j) matriz[i][j] = 1;
			else{
				if(matriz[i][j] != 0)
				{
					matriz[i][j] = matriz[j][i];
				}
				else
				{
					matriz[i][j] = pow(i, aux2);
				}
			}
		}
		aux = 0;
		aux2++;
	}
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	return 0;
}
