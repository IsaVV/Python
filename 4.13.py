palavra = input("Digite uma palavra: ")
if palavra == palavra[::-1]:
    print("A palavra digitada é um palíndromo")
else:
    print("A palavra digitada não é um palíndromo")
    print(palavra)
    print(palavra[::-1])