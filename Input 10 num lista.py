numeros = []
im = 0
print('Digite vários números:')
for num in range (10):
    numeros.append(int(input('')))


print('A soma de todos os números é ', sum(numeros))
print(numeros)
print('o menor elemento da lista é', min(numeros))
print('o maior elemento da lista é', max(numeros))
print('a quantidade de valores impares na lista é', im)
