def romanToInt(roman):
    soma = 0
    aux = 0 

    for num in range(len(roman)):
        print(num)
        if num == len(roman) - 1 or num == 0 and len(roman) != 2:
            soma += somaValor(roman[num])
            print('soma if: ',soma)
        else:
            aux = somaValor(roman[num - 1])
            print('aux: ', aux)
            print('atual: ', somaValor(roman[num]))
            if somaValor(roman[num]) > aux and num -1 != 0:
                soma += somaValor(roman[num])
                soma -= aux
                print('soma else if: ',soma)
            else:
                print('soma else else: ',soma)
                soma += somaValor(roman[num])

    print(soma)
                

def somaValor(roman):
    if roman == 'M': 
        return 1000
    if roman == 'D':
        return 500
    if roman == 'C':
        return 100
    if roman == 'L':
        return 50
    if roman == 'X':
        return 10
    if roman == 'V':
        return 5
    else:
        return 1

def subtraiValor(roman):
    if roman == 'D':
        return -500
    if roman == 'C':
        return -100
    if roman == 'L':
        return -50
    if roman == 'X':
        return -10
    if roman == 'V':
        return -5
    else:
        return -1

romanToInt('MIV')
