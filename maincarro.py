from carro import carro, moto

gol = carro()


gol.modelo = "Gol"
gol.motorizacao = 1.6
gol.cor = "Branca"
gol.acelerar(40)
gol.desacelerar(12)
gol.printCar()

ferrari = carro()
ferrari.modelo = "Ferrari"
ferrari.motorizacao = 3.0
ferrari.cor = "Vermelha"
gol.acelerar(150)
ferrari.printCar()
