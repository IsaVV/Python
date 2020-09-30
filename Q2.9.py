
corredores = {}
vencedor = []
medias = []

for corredor in range (4):
    nome = input('')
    corredores[nome] = [float(input('')), float(input('')),
                        float(input('',))]

for nome in corredores:
    medias.append(sum(corredores[nome]) / len(corredores[nome]))
    vencedor.append(nome)

print('Vencedor:', vencedor[medias.index(min(medias))])
print('Média do tempo:', min(medias))


#tive bastantee dificuldade eu passei 1 dia tentando fazer após isso pedi ajuda para realizar, o qual me explicou
#como eu poderia fazer e eu fui tentado sozinha após isso. Tentei fazer pelo exemplo que você deu em sala de aula
# porém fiquei muito confusa
