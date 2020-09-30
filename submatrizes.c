#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main(void) {
	
	//variaveis iniciais 
	int m, n, primo = 0;
	
	scanf("%d", &m);
	scanf("%d", &n);
	if (3 <= m && n <= 20){
	
		//variaveis das matrizes e submatrizes de KCAJ
		int matrizk[m][n], submatrizk1[m][n], sum1k = 0, submatrizk2[m][n], sum2k = 0;
		int msumk = 0, mnumk = 0, submatrizk3[m][n], sum3k = 0, submatrizk4[m][n], sum4k = 0;
		
		//variaveis das matrizes e submatrizes de ANSA
		int matriza[m][n], submatriza1[m][n], sum1a = 0, submatriza2[m][n], sum2a = 0;
		int msuma = 0, mnuma = 0, submatriza3[m][n], sum3a = 0, submatriza4[m][n], sum4a = 0;
	
		//matriz KCAJ
		for (int i = 0; i < m; i++){
			for (int j = 0; j < n; j++){
				scanf("%d", &matrizk[i][j]);
			}
		}
		//matriz ANSA
		for (int i = 0; i < m; i++){
			for (int j = 0; j < n; j++){
				scanf("%d", &matriza[i][j]);
			}
		}
		
		//submatrizes KCAJ
		//CASO 1 - submatriz menos a ultima linha e ultima coluna
		for (int i = 0; i < (m-1); i++) {
	    	for (int j = 0; j < (n-1); j++) {
	    		submatrizk1[i][j] = matrizk[i][j];
	    		if (i == j){
	    			if ( submatrizk1[i][j] == 1){
	    				primo++;
					} 
	    			for (int y = 2; y <= submatrizk1[i][j]/ 2; y++) {
	    				if (submatrizk1[i][j] % y == 0){
	    					primo++;
	    					break;
						}
	    			}
	    			if (primo == 0){
	    				sum1k += submatrizk1[i][j];	
					}
					primo = 0;
				}
			}
		}
		
		//CASO 2 - submatriz menos a ultima coluna e a primeira linha
		for (int i = 0; i < m; i++){
			for (int j = 0; j < (n-1); j++){
				submatrizk2[i][j] = matrizk[i+1][j];
				if (i == j){
					if (submatrizk2[i][j] == 1){
						primo++;
					}
					for (int y = 2; y <= submatrizk2[i][j] / 2; y++){
						if (submatrizk2[i][j] % y == 0){
							primo++;
							break;
						}
					}
					if (primo == 0){
						sum2k += submatrizk2[i][j];
					}
					primo = 0;
				}
			}
		}
		
		//CASO 3 - submatriz menos a primeira coluna e a primeira linha
		for (int i = 0; i < m; i++){
			for (int j = 0; j < (n-1); j++){
				submatrizk3[i][j] = matrizk[i+1][j+1];
				if (i == j){
					if (submatrizk3[i][j] == 1){
						primo++;
					}
					for (int y = 2; y <= submatrizk3[i][j] / 2; y++){
						if (submatrizk3[i][j] % y == 0){
							primo++;
							break;
						}
					}
					if (primo == 0){
						sum3k += submatrizk3[i][j];
					}
					primo = 0;
				}
			}
		}
		
		//CASO 4 - submatriz menos a ultima linha e a primeira coluna
		for (int i = 0; i < (m-1); i++){
			for (int j = 0; j < n; j++){
				submatrizk4[i][j] = matrizk[i][j+1];
				if (i == j){
					if (submatrizk4[i][j] == 1){
						primo++;
					}
					for (int y = 2; y <= submatrizk4[i][j] / 2; y++){
						if (submatrizk4[i][j] % y == 0){
							primo++;
							break;
						}
					}
					if (primo == 0){
						sum4k += submatrizk4[i][j];
					}
					primo = 0;
				}
			}
		}	
	
		//submatrizes ANSA
		//CASO 1 - submatriz menos a ultima linha e ultima coluna
		for (int i = 0; i < (m-1); i ++){
			for (int j = 0; j < (n -1); j++){
				submatriza1[i][j] = matriza[i][j];
				if (i == j){
					if (submatriza1[i][j] == 1){
						primo++;
					}
					for (int y = 2; y <= submatriza1[i][j]/ 2; y++) {
						if (submatriza1[i][j] % y == 0){
							primo++;
							break;
						}
					}
					if (primo == 0){
						sum1a += submatriza1[i][j];
					}
					primo = 0;
				}
			}
		}
		
		//CASO 2 - submatriz menos a ultima coluna e a primeira linha
		for (int i = 0; i < m; i++){
			for (int j = 0; j < (n-1); j++){
				submatriza2[i][j] = matriza[i+1][j];
				if (i == j){
					if (submatriza2[i][j] == 1){
						primo++;
					}
					for (int y = 2; y <= submatriza2[i][j] / 2; y++){
						if (submatriza2[i][j] % y == 0){
							primo++;
							break;
						}
					}
					if (primo == 0){
						sum2a += submatriza2[i][j];
					}
					primo = 0;
				}
			}
		}
		
		//CASO 3 - submatriz menos a primeira coluna e a primeira linha
		for (int i = 0; i < m; i++){
			for (int j = 0; j < (n-1); j++){
				submatriza3[i][j] = matriza[i+1][j+1];
				if (i == j){
					if (submatriza3[i][j] == 1){
						primo++;
					}
					for (int y = 2; y <= submatriza3[i][j] / 2; y++){
						if (submatriza3[i][j] % y == 0){
							primo++;
							break;
						}
					}
					if (primo == 0){
						sum3a += submatriza3[i][j];
					}
					primo = 0;
				}
			}
		}
		
		//CASO 4 - submatriz menos a ultima linha e a primeira coluna
		for (int i = 0; i < (m-1); i++){
			for (int j = 0; j < n; j++){
				submatriza4[i][j] = matriza[i][j+1];
				if (i == j){
					if (submatriza4[i][j] == 1){
						primo++;
					}
					for (int y = 2; y <= submatriza4[i][j] / 2; y++){
						if (submatriza4[i][j] % y == 0){
							primo++;
							break;
						}
					}
					if (primo == 0){
						sum4a += submatriza4[i][j];
					}
					primo = 0;
				}
			}
		}	
	
		//imprimindo melhor submatriz KCAJ
		//CASO 1 -imprimindo submatriz menos a ultima linha e ultima coluna
		if (sum1k >= sum2k && sum1k >= sum3k && sum1k >= sum4k){
			msumk = sum1k;
			for (int a = 0; a < (m-1); a++) {
		    	for (int b = 0; b < (n-1); b++) {
		    		if (a == b){
	    				if ( submatrizk1[a][b] == 1){
	    					primo++;
						} 
	    				for (int y = 2; y <= submatrizk1[a][b]/ 2; y++) {
	    					if (submatrizk1[a][b] % y == 0){
	    						primo++;
	    						break;
							}
	    				}
	    				if (primo == 0){
	    					if (mnumk < submatrizk1[a][b]){
	    						mnumk = submatrizk1[a][b];
				    		}
						}
						primo = 0;
					}
		    		if (b != 0){
		    			printf(" %d", submatrizk1[a][b]);
					}else{
						printf("%d", submatrizk1[a][b]);
					}
		    	}
		    	printf("\n");
			}
		}
		
		//CASO 2 - imprimindo submatriz menos a primeira linha e a ultima coluna 
		else if (sum2k >= sum1k && sum2k >= sum3k && sum2k >= sum4k){
			msumk = sum2k;
			for (int a = 0; a < (m-1); a++) {
		    	for (int b = 0; b < (n-1); b++) {
		    		if (a == b){
	    				if ( submatrizk2[a][b] == 1){
	    					primo++;
						} 
	    				for (int y = 2; y <= submatrizk2[a][b]/ 2; y++) {
	    					if (submatrizk2[a][b] % y == 0){
	    						primo++;
	    						break;
							}
	    				}
	    				if (primo == 0){
	    					if (mnumk < submatrizk2[a][b]){
	    						mnumk = submatrizk2[a][b];
				    		}
						}
						primo = 0;
					}
		    		if (b != 0){
		    			printf(" %d", submatrizk2[a][b]);
					}else{
						printf("%d", submatrizk2[a][b]);
					}
		    	}
		    	printf("\n");
		    }
		}
		
		//CASO 3 - imprimindo submatriz menos a primeira linha e a primeira coluna
		else if (sum3k >= sum1k && sum3k >= sum2k && sum3k >= sum4k){
			msumk = sum3k;
			for (int a = 0; a < (m-1); a++) {
		    	for (int b = 0; b < (n-1); b++) {
		    		if (a == b){
	    				if ( submatrizk3[a][b] == 1){
	    					primo++;
						} 
	    				for (int y = 2; y <= submatrizk3[a][b]/ 2; y++) {
	    					if (submatrizk3[a][b] % y == 0){
	    						primo++;
	    						break;
							}
	    				}
	    				if (primo == 0){
	    					if (mnumk < submatrizk3[a][b]){
	    						mnumk = submatrizk3[a][b];
				    		}
						}
						primo = 0;
					}
		    		if (b != 0){
		    			printf(" %d", submatrizk3[a][b]);
					}else{
						printf("%d", submatrizk3[a][b]);
					}
		    	}
		    	printf("\n");
		    }
		}
		
	    //CASO 4 - imprimindo submatriz menos a ultima linha e a primeira coluna
	    else if (sum4k >= sum1k && sum4k >= sum2k && sum4k >= sum3k){
	    	msumk = sum4k;
			for (int a = 0; a < (m-1); a++) {
		    	for (int b = 0; b < (n-1); b++) {
		    		if (a == b){
	    				if ( submatrizk4[a][b] == 1){
	    					primo++;
						} 
	    				for (int y = 2; y <= submatrizk4[a][b]/ 2; y++) {
	    					if (submatrizk4[a][b] % y == 0){
	    						primo++;
	    						break;
							}
	    				}
	    				if (primo == 0){
	    					if (mnumk < submatrizk4[a][b]){
	    						mnumk = submatrizk4[a][b];
				    		}
						}
						primo = 0;
					}
		    		if (b != 0){
		    			printf(" %d", submatrizk4[a][b]);
					}else{
						printf("%d", submatrizk4[a][b]);
					}
		    	}
		    	printf("\n");
		    }
	 	}
		printf("\n"); 	
	 	
	    //imprimindo melhor submatriz ANSA
		//CASO 1 - imprimindo submatriz menos a ultima linha e ultima coluna
		if (sum1a >= sum2a && sum1a >= sum3a && sum1a >= sum4a){
			msuma = sum1a;
			for (int a = 0; a < (m-1); a++) {
		    	for (int b = 0; b < (n-1); b++) {
		    		if (a == b){
	    				if ( submatriza1[a][b] == 1){
	    					primo++;
						} 
	    				for (int y = 2; y <= submatriza1[a][b]/ 2; y++) {
	    					if (submatriza1[a][b] % y == 0){
	    						primo++;
	    						break;
							}
	    				}
	    				if (primo == 0){
	    					if (mnuma < submatriza1[a][b]){
	    						mnuma = submatriza1[a][b];
				    		}
						}
						primo = 0;
					}
		    		if (b != 0){
		    			printf(" %d", submatriza1[a][b]);
					}else{
						printf("%d", submatriza1[a][b]);
					}
		    	}
		    	printf("\n");
			}
		}
		
		//CASO 2 - imprimindo submatriz menos a primeira linha e a ultima coluna 
		else if (sum2a >= sum1a && sum2a >= sum3a && sum2a >= sum4a){
			msuma = sum2a;
			for (int a = 0; a < (m-1); a++) {
		    	for (int b = 0; b < (n-1); b++) {
		    		if (a == b){
	    				if ( submatriza2[a][b] == 1){
	    					primo++;
						} 
	    				for (int y = 2; y <= submatriza2[a][b]/ 2; y++) {
	    					if (submatriza2[a][b] % y == 0){
	    						primo++;
	    						break;
							}
	    				}
	    				if (primo == 0){
	    					if (mnuma < submatriza2[a][b]){
	    						mnuma = submatriza2[a][b];
				    		}
						}
						primo = 0;
					}
		    		if (b != 0){
		    			printf(" %d", submatriza2[a][b]);
					}else{
						printf("%d", submatriza2[a][b]);
					}
		    	}
		    	printf("\n");
		    }
		}
		
		//CASO 3 - imprimindo submatriz menos a primeira linha e a primeira coluna
		else if (sum3a >= sum1a && sum3a >= sum2a && sum3a >= sum4a){
			msuma = sum3a;
			for (int a = 0; a < (m-1); a++) {
		    	for (int b = 0; b < (n-1); b++) {
		    		if (a == b){
	    				if ( submatriza3[a][b] == 1){
	    					primo++;
						} 
	    				for (int y = 2; y <= submatriza3[a][b]/ 2; y++) {
	    					if (submatriza3[a][b] % y == 0){
	    						primo++;
	    						break;
							}
	    				}
	    				if (primo == 0){
	    					if (mnuma < submatriza3[a][b]){
	    						mnuma = submatriza3[a][b];
				    		}
						}
						primo = 0;
					}
		    		if (b != 0){
		    			printf(" %d", submatriza3[a][b]);
					}else{
						printf("%d", submatriza3[a][b]);
					}
		    	}
		    	printf("\n");
		    }
		}
		
	 	//CASO 4 - imprimindo submatriz menos a ultima linha e a primeira coluna
	 	else if (sum4a >= sum1a && sum4a >= sum2a && sum4a >= sum3a){
	 		msuma = sum4a;
			for (int a = 0; a < (m-1); a++) {
		    	for (int b = 0; b < (n-1); b++) {
		    		if (a == b){
	    				if ( submatriza4[a][b] == 1){
	    					primo++;
						} 
	    				for (int y = 2; y <= submatriza4[a][b]/ 2; y++) {
	    					if (submatriza4[a][b] % y == 0){
	    						primo++;
	    						break;
							}
	    				}
	    				if (primo == 0){
	    					if (mnuma < submatriza4[a][b]){
	    						mnuma = submatriza4[a][b];
				    		}
						}
						primo = 0;
					}
		    		if (b != 0){
		    			printf(" %d", submatriza4[a][b]);
					}else{
						printf("%d", submatriza4[a][b]);
					}
		    	}
		    	printf("\n");
		    }
		}
		printf("\n");
		
		//descobrindo quem ganhou e imprimindo
		if (msumk > msuma){
			printf("Kcaj ganhou");
		}else if (msumk < msuma){
			printf("Ansa ganhou");
		}else if (mnumk > mnuma){
			printf("Kcaj ganhou");
		}else if (mnumk < mnuma){
			printf("Ansa ganhou");	
		}else{
			printf("Empate");
		}
	}
		
		
	
	
	return 0;
}