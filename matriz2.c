#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>


int main (void)
{
	int m, n;
	scanf("%d", &m);
	scanf("%d", &n);
	int matriz[m][n];
	
    if (1<= m && n <= 1000){
    	for (int a = 0; a < m; a++) {
    		
    		for (int b = 0; b < n; b++) {
    			
    			scanf("%d", &matriz[a][b]);
    			
    		}
    
    	}
    	for (int i = 0; i < n; i++) {
    		printf("| ");
    			for (int j = 0; j < m; j++) {
    				printf("%d ", matriz[j][i]);
    			}
    			printf("|\n");
    		}
    } else{
        printf("/n");
    }
	return 0;
}

