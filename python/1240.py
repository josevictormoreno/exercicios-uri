# 5678690 78690
# 5434554 543
# 1243 1243
# 54 654

# encaixa
# nao encaixa
# encaixa
# nao encaixa

n = int(input())

for x in range(n):
    a, b = input().split(' ')
    a = int(a)
    b = int(b)
    
    if len(str(a)) < len(str(b)):
        print('nao encaixa')
    
    else:
        aux = str(a)[len(str(a)) - len(str(b)):len(str(a))]
        if aux == str(b):
            print('encaixa')
        else:
            print('nao encaixa')
    


