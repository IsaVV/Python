class TV:
    modelo: ""
    cor: ""
    fabricante: ""
    tamanho = 0
    estado_tv = "Desligada"
    canal_atual = 0
    volume_atual = 0

    def mudarCanal(self, valor):
        self.canal_atual = valor
    def aumentarVolume(self, valor):
        self.volume_atual = valor
    def printTV(self):
        print("O modelo da televisão é", self.modelo)
        print("A cor da televisão é", self.cor)
        print("O fabricante da televisão é", self.fabricante)
        print("A televisão é de", self.tamanho, "polegadas")
        print("A televisão esta", self.estado_tv)
        if (self.estado_tv == "Ligada"):
            print("No canal", self.canal_atual, "com o volume no", self.volume_atual)

