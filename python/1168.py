# João quer montar um painel de leds contendo diversos números. Ele não possui muitos leds, e não tem certeza se conseguirá montar o número desejado. 
# Considerando a configuração dos leds dos números abaixo, faça um algoritmo que ajude João a descobrir a quantidade de 
# leds necessário para montar o valor.
# Entrada
# A entrada contém um inteiro N, (1 ≤ N ≤ 1000) correspondente ao número de casos de teste, seguido de N linhas, 
# cada linha contendo um número (1 ≤ V ≤ 10100) correspondente ao valor que João quer montar com os leds.

# Saída
# Para cada caso de teste, imprima uma linha contendo o número de leds que João precisa para montar o valor desejado, seguido da palavra "leds".

# testes 
# 3
# 115380
# 2819311
# 23456

def calculaLeds(leds):
    qtdLeds = 0
    for x in str(leds):
        if x == '9':
            qtdLeds += 6
        elif x == '8':
            qtdLeds += 7
        elif x == '7':
            qtdLeds += 3
        elif x == '6':
            qtdLeds += 6
        elif x == '5':
            qtdLeds += 5
        elif x == '4':
            qtdLeds += 4
        elif x == '3':
            qtdLeds += 5
        elif x == '2':
            qtdLeds += 5
        elif x == '1':
            qtdLeds += 2
        elif x == '0':
            qtdLeds += 6
    return qtdLeds

casos = int(input())
leds = 0
for x in range(casos):
    leds = int(input())
    print(calculaLeds(leds), 'leds')