#2. Faça um programa que calcule a raiz quadrada de um número, caso o número informado
#for negativo, a exceção deve ser tratada, caso a entrada não for um número,
#a exceção também deverá ser tratada.
#O programa só irá finalizar após o usuário digitar uma entrada válida.
#O valor da raiz quadrada deve ser exibido na tela.
import math
i = 0
while i == 0:
    try:
        n1 = int(input('Digite um número: '))
        n2 = math.sqrt(n1)
        print(n2)
        break
    except ValueError:
        print('lembre de só utilizar números ex: 4, Não use ex: quatro\nDigite números positivos')



