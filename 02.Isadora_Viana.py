
cidades = [[],[],[],[],[]]
novas_temperaturas = [[],[],[],[],[]]
for cidade in range (5):
    cidades[cidade].append(input('Digite a cidade: '))
    cidades[cidade].append(float(input('Digite a temperatura: ')))
    novas_temperaturas[cidade].append(cidades[cidade][0])
    novas_temperaturas[cidade].append(((cidades[cidade][1]) * 1.8) + 32)
for x in novas_temperaturas:
    print(x[0],x[1],'°F')
