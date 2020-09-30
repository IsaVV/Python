cli_bonus = 0
bonus = 0
quant_cli = int (input('Digite quantos clientes há na loja e em seguida o nome e o valor de suas compras no ano:\n'))
for quant_cli in range (0, quant_cli):
        nome_cliente = input('')
        valor_compras = float(input(''))
        if valor_compras >= 2000:
            valor_bonus = valor_compras * 0.15
            print('Cliente apto para receber bônus')
            bonus += valor_bonus
            cli_bonus += 1
print('Clientes:', cli_bonus)
print('Total: R$', bonus)
