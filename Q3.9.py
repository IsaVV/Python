
numeros_maria = {'a': 100, 'b': 200, 'c': 300}
numeros_sara = {'a': 300, 'b': 200, 'd': 400, 'c': 500, 'e': 250}

for numeros in numeros_sara:
    numeros_maria[numeros] = numeros_sara[numeros]

print(numeros_maria)
