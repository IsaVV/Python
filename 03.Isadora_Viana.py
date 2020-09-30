
pessoas = ([],[],[],[],[])
while (len(pessoas[0])) != 5:
    a = input('Nome: ')
    b = (float(input('Peso: ')))
    if b >= 50:
        pessoas[0].append(a)
        pessoas[1].append(b)
print(pessoas)