# Implemente um programa denominado combinador, que recebe duas strings e deve combiná-las, 
# alternando as letras de cada string, começando com a primeira letra da primeira string, 
# seguido pela primeira letra da segunda string, em seguida pela segunda letra da primeira string, e assim sucessivamente. 
# As letras restantes da cadeia mais longa devem ser adicionadas ao fim da string resultante e retornada.

# Entrada
# A entrada contém vários casos de teste. A primeira linha contém um inteiro N que indica a quantidade de casos de 
# teste que vem a seguir. Cada caso de teste é composto por uma linha que contém duas cadeias de caracteres, 
# cada cadeia de caracteres contém entre 1 e 50 caracteres inclusive.

# Saída
# Combine as duas cadeias de caracteres da entrada como mostrado no exemplo abaixo e exiba a cadeia resultante.

casos = int(input())
textos = []
for x in range(casos):

    textos[1] = str(input())
    textos[2] = str(input())
    menor = min(textos, key=len)
    maior = max(textos, key=len)
    textFinal = ''
    for char in range(len(textOne)):
        if char <= len(textOne) - 1:
            textFinal += textOne[char] + textTwo[char]

        else:
            for char in range(len(textOne), len(textTwo)):
                print('entrou')
                textFinal += textTwo[char]
    print(textFinal)