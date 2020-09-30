usuarios = {}
usuarios_media = {}
menor_media = 0
nome_menor_media = ''
maior_media = 0
nome_maior_media = ''
while (len(usuarios)) != 4:
    nome = input('Digite seu nome: ')
    foto1 = int(input('Digite a quantidade de curtdas da primeira foto: '))
    foto2 = int(input('Digite a quantidade de curtdas da segunda foto: '))
    foto3 = int(input('Digite a quantidade de curtdas da terceira foto: '))
    media = (foto1 + foto2 + foto3) / 3
    usuarios[nome] = (foto1, foto2, foto3)
    usuarios_media[nome] = media
    if menor_media == 0:
        nome_menor_media = nome
        menor_media = media
    if media < menor_media:
        nome_menor_media = nome
        menor_media = media
    if media > maior_media:
        nome_maior_media = nome
        maior_media = media
for nome in usuarios_media:
    print(nome, ':', usuarios_media[nome])


print(nome_maior_media, 'teve o maior número de curtidas')
print(nome_menor_media,'teve o menor número de curtidas')


