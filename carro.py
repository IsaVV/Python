class carro:
    modelo = ""
    cor = ""
    motorizacao = 1.0
    velocimetro = 0

    def acelerar(self, valor):
        self.velocimetro += valor
    def desacelerar(self, valor):
        self.velocimetro -= valor

    def printCar(self):
        print("O carro de modelo " + self.modelo + " é da cor " + self.cor)
        print("O carro possui a motorização: " + str(self.motorizacao))
        print("A velocidade deste carro é: " + str(self.velocimetro) + " Km/h")

class moto:
    modelo = ""
    cor = ""
    motorizacao = 1.0
    velocimetro = 0