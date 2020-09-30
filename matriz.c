#include <stdio.h>


int main (void)
{
	int m = 3, n = 3, matriz[m][n], num_maior = -1999999, soma, delta, i = 0, soma_principal = 0;
	float media;
	
	for (int a = 0; a < m; a++) {
		
		for (int b = 0; b < n; b++) {
			
			scanf("%d", &matriz[a][b]);
			
			if (i == 0){
				soma_principal = soma_principal + matriz[a][b];
			}
			if (i == 4){
				soma_principal = soma_principal + matriz[a][b];
			}
			if (i == 8){
				soma_principal = soma_principal + matriz[a][b];
			}
			i += 1;
			
			soma += matriz[a][b];
			
			if (matriz[a][b] > num_maior){
				
				num_maior = matriz[a][b];
			}
		}

	}
	if (num_maior > 0){
		delta = 1;
	}else if(num_maior == 0){
		delta = 0;
	}else{
		delta = -1;
	}
	media = soma;
	media = media/9;
	printf("%.2f %d %d %d", media, num_maior, delta, soma_principal);
	return 0;
}

