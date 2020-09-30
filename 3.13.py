frase = input("Digite uma frase: ")
if 'sábado' in frase:
    nova_frase = frase.replace('sábado', 'domingo')
    print(nova_frase)
else:
    print('A palavra sábado não foi encontrada.')