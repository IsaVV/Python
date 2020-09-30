idades = [1,]
medias_maior = []
idades_menor_25 = []
a = 0
media = 0

while idades[-1] > 0:
    idades.append(int(input()))
    if idades[-1] < 25:
        idades_menor_25.append(idades[-1])
idades_menor_25.pop(-1)
idades.pop(-1)
idades.pop(0)
print('Quantidade de idades válidas: ', len(idades))
print('Soma das idades: ', sum(idades))
media = (sum(idades))/ (len(idades))
for x in idades:
    if x > media:
        medias_maior.append(x)
print('Média das idades: ', media)
print('Quant. de idades acima da média: ', len(medias_maior))
print('Quant. de idades abaixo de 25: ', len(idades_menor_25))
print('Programa encerrado')
