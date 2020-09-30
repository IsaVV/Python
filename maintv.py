from televisor import TV

objeto = TV()
objeto.modelo = "Full HD"
objeto.cor = "Preta"
objeto.fabricante = "Sony"
objeto.tamanho = 40
objeto.estado_tv = "Ligada"
objeto.mudarCanal(13)
objeto.aumentarVolume(32)
objeto.printTV()