
ma_i = 0
bonus = 0
for funcionarios in range  (1, 31, 1):
        quant_filhos = int(input('Digite sua quantidade de filhos menor de idade e em seguida a respectiva idade de cada um:\n'))
        for quant_filhos in range (0, quant_filhos):
            quant_filhos = quant_filhos -1
            idade = int(input(''))
            if idade <= 7:
                m_i += 1
                bonus += 250.00
            if idade > 7 and idade < 18:
                ma_i += 1
                bonus += 150.00
print('Até 7 anos:', m_i)
print('Entre 8 e 17 anos:', ma_i)
print('Total do bônus: R$', bonus)


