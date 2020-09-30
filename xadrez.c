// SPDX-License-Identifier: GPL-3.0
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int peoes(int linha_rei, int coluna_rei, char tabuleiro[8][8])
{
		if (tabuleiro[linha_rei-1][coluna_rei-1] == 'p' || tabuleiro[linha_rei-1][coluna_rei-1] == 'k')
			return 1;
		if (tabuleiro[linha_rei-1][coluna_rei+1] == 'p' || tabuleiro[linha_rei-1][coluna_rei+1] == 'k')
			return 1;
		return 0;
}
int cavalin(int linha_rei, int coluna_rei, char tabuleiro[8][8])
{
		if (tabuleiro[linha_rei - 2][coluna_rei - 1] == 'c')
			return 1;
		if (tabuleiro[linha_rei - 1][coluna_rei - 2] == 'c')
			return 1;
		if (tabuleiro[linha_rei - 2][coluna_rei + 1] == 'c')
			return 1;
		if (tabuleiro[linha_rei - 1][coluna_rei + 2] == 'c')
			return 1;
		if (tabuleiro[linha_rei + 1][coluna_rei - 2] == 'c')
			return 1;
		if (tabuleiro[linha_rei + 2][coluna_rei - 1] == 'c')
			return 1;
		if (tabuleiro[linha_rei + 1][coluna_rei + 2] == 'c')
			return 1;
		if (tabuleiro[linha_rei + 2][coluna_rei + 1] == 'c')
			return 1;
		return 0;
}
int torroes(int linha_rei, int coluna_rei, char tabuleiro[8][8])
{
		for (int i = (coluna_rei+1); i < 8; i++) {
			if (tabuleiro[linha_rei][i] != 't' && tabuleiro[linha_rei][i] != '-' && tabuleiro[linha_rei][i] != 'q')
				break;
			if (tabuleiro[linha_rei][i] == 't' || tabuleiro[linha_rei][i] == 'q')
				return 1;
		}
		for (int i = (coluna_rei-1); i < 8; i--) {
			if (tabuleiro[linha_rei][i] != 't' && tabuleiro[linha_rei][i] != '-' && tabuleiro[linha_rei][i] != 'q')
				break;
			if (tabuleiro[linha_rei][i] == 't' || tabuleiro[linha_rei][i] == 'q')
				return 1;
		}
		for (int i = (linha_rei-1); i < 8; i--) {
			if (tabuleiro[i][coluna_rei] != 't' && tabuleiro[i][coluna_rei] != '-' && tabuleiro[i][coluna_rei] != 'q')
				break;
			else if (tabuleiro[i][coluna_rei] == 't' || tabuleiro[i][coluna_rei] == 'q')
				return 1;
		}
		for (int i = (linha_rei+1); i < 8; i++) {
			if (tabuleiro[i][coluna_rei] != 't' && tabuleiro[i][coluna_rei] != '-' && tabuleiro[i][coluna_rei] != 'q')
				break;
			else if (tabuleiro[i][coluna_rei] == 't' || tabuleiro[i][coluna_rei] == 'q')
				return 1;
		}
		return 0;
}
int bispous(int linha_rei, int coluna_rei, char tabuleiro[8][8])
{
		for (int i = 1; i < 8; i++) {
			if (tabuleiro[linha_rei+i][coluna_rei+i] != 'b' && tabuleiro[linha_rei+i][coluna_rei+i] != '-' && tabuleiro[linha_rei+i][coluna_rei+i] != 'q')
				break;
			if (tabuleiro[linha_rei+i][coluna_rei+i] == 'b' || tabuleiro[linha_rei+i][coluna_rei+i] == 'q')
				return 1;
		}
		for (int i = 1; i < 8; i++) {
			if (tabuleiro[linha_rei+i][coluna_rei-i] != 'b' && tabuleiro[linha_rei+i][coluna_rei-i] != '-' && tabuleiro[linha_rei+i][coluna_rei-i] != 'q')
				break;
			if (tabuleiro[linha_rei+i][coluna_rei-i] == 'b' || tabuleiro[linha_rei+i][coluna_rei-i] == 'q')
				return 1;
		}
		for (int i = 1; i < 8; i++) {
			if (tabuleiro[linha_rei-i][coluna_rei+i] != 'b' && tabuleiro[linha_rei-i][coluna_rei+i] != '-' && tabuleiro[linha_rei-i][coluna_rei+i] != 'q')
				break;
			if (tabuleiro[linha_rei-i][coluna_rei+i] == 'b' || tabuleiro[linha_rei-i][coluna_rei+i] == 'q')
				return 1;
		}
		for (int i = 1; i < 8; i++) {
			if (tabuleiro[linha_rei-i][coluna_rei-i] != 'b' && tabuleiro[linha_rei-i][coluna_rei-i] != '-' && tabuleiro[linha_rei-i][coluna_rei-i] != 'q')
				break;
			if (tabuleiro[linha_rei-i][coluna_rei-i] == 'b' || tabuleiro[linha_rei-i][coluna_rei-i] == 'q')
				return 1;
		}
		return 0;
}
int reizon(int linha_rei, int coluna_rei, char tabuleiro[8][8])
{
		if (tabuleiro[linha_rei+1][coluna_rei-1] == 'k')
			return 1;
		if (tabuleiro[linha_rei+1][coluna_rei+1] == 'k')
			return 1;
		if (tabuleiro[linha_rei][coluna_rei+1] == 'k')
			return 1;
		if (tabuleiro[linha_rei][coluna_rei-1] == 'k')
			return 1;
		if (tabuleiro[linha_rei+1][coluna_rei] == 'k')
			return 1;
		if (tabuleiro[linha_rei-1][coluna_rei] == 'k')
			return 1;
		return 0;
}
int main(void)
{
		char tabuleiro[8][8];
		int linha_rei, coluna_rei, cont = 0;

		for (int linha = 0; linha < 8; linha++) {
			for (int coluna = 0; coluna < 8; coluna++) {
				scanf("%s", &tabuleiro[linha][coluna]);
				if (tabuleiro[linha][coluna] == 'K') {
					linha_rei = linha;
					coluna_rei = coluna;
				}
			}
		}
		if (peoes(linha_rei, coluna_rei, tabuleiro) == 1) {
			printf("XEQUE");
			return 0;
		}
		if (cavalin(linha_rei, coluna_rei, tabuleiro) == 1) {
			printf("XEQUE");
			return 0;
		}
		if (torroes(linha_rei, coluna_rei, tabuleiro) == 1) {
			printf("XEQUE");
			return 0;
		}
		if (bispous(linha_rei, coluna_rei, tabuleiro) == 1) {
			printf("XEQUE");
			return 0;
		}
		if (reizon(linha_rei, coluna_rei, tabuleiro) == 1) {
			printf("XEQUE");
			return 0;
		}
		printf("NAO XEQUE");
		return 0;
}