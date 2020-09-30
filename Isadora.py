medias = []
nota3 = []
nota2 = []
nota1 = []
cpf = []
aprovados = []
final = []
reprovados = []
nomes = []
opcao = 0
opcao_editar = 0
while opcao != -1:
    print("1 - Cadastrar Alunos")
    print("2 - Consultar Aluno (chave: CPF)")
    print("3 - Editar Aluno (chave: CPF)")
    print("-1 - Encerrar programa")
    opcao = int(input("Digite a opção: "))
    if opcao == 1:
        cpf.append(input("Digite o seu cpf: "))
        nomes.append(input("Digite o seu nome: "))
        nota1.append(float(input("Digite sua 1 nota: ")))
        nota2.append(float(input("Digite sua 2 nota: ")))
        nota3.append(float(input("Digite sua 3 nota: ")))
        medias.append((nota1[-1] + nota2[-1]+nota3[-1]) / 3)
        print('Média:', medias[-1])
        if medias[-1] >= 7:
            (print('Situação: A'))
            aprovados.append(nomes[-1])
        elif medias[-1] < 7 and medias[-1] >= 3:
            print('Situação: F')
            final.append(nomes[-1])
        elif medias[-1] < 3:
            reprovados.append(nomes[-1])
            print('Situação: R')
    elif opcao == 2:
        cpf_consulta = input("digite o cpf: ")
        posicao = cpf.index(cpf_consulta)
        print("nome: ", nomes[posicao])
        print("nota 1: ", nota1[posicao])
        print("nota 2: ", nota2[posicao])
        print("média: ", medias[posicao])
        if medias[posicao] >= 7:
            print('Situação: A')
        elif medias[posicao] < 7 and medias[posicao] >= 4:
            print('Situação: F')
        elif medias[posicao] < 4:
            print('Situação: R')

    elif opcao == 3:
        cpf_consulta = input("digite o cpf: ")
        posicao = cpf.index(cpf_consulta)
        print("1 - alterar cpf")
        print("2 - alterar nome")
        print("3 - alterar nota 1")
        print("4 - alterar nota 2")
        print("5 - alterar média")
        opcao_editar = int(input("Digite uma das opções: "))
        if opcao_editar == 1:
            cpf[posicao] = input('Digite o novo nome: ')
        elif opcao_editar == 2:
            nomes[posicao] = input('Digite o novo nome: ')
        elif opcao_editar == 3:
            nota1[posicao] = input('Digite a nova nota: ')
            a = (float(nota1[posicao]))
            b = (float(nota2[posicao]))
            c = (float(nota3[posicao]))
            medias[posicao] = (a+b+ c)/3
        elif opcao_editar == 4:
            nota2[posicao] = input('Digite a nova nota 2: ')
            a = (float(nota1[posicao]))
            b = (float(nota2[posicao]))
            c = (float(nota3[posicao]))
            medias[posicao] = (a + b + c) / 3
        elif opcao_editar == 5:
            nota2[posicao] = input('Digite a nova nota 2: ')
            a = (float(nota1[posicao]))
            b = (float(nota2[posicao]))
            c = (float(nota3[posicao]))
            medias[posicao] = (a + b + c) / 3
        elif opcao_editar == 6:
            medias[posicao] = input('Digite a nova média: ')

