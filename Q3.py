soma = 0
m = 0
me = 0
i = 0
idade = 0
print('digite uma idade ou -1 para parar')
while idade != -1:
    idade = int(input(''))
    if idade != -1:
        i += 1
        soma = soma + idade
        if idade >= 25:
            m += 1
        if idade < 25:
            me += 1
print('Total de idades:', i)
media = soma / i
print('Média das idades:', media)
print('Maiores de 25 anos:', m)
print('Menores de 25 anos', me)