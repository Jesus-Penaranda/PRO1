# Feu un programa que llegeixi cinc enters x,a,b,c,d i digui si x∈[a,b]∪[c,d].

entrada = input()

x, a, b, c, d = map(int, entrada.split())

if (x >= a and x <= b) or (x >= c and x <= d):
    print("si")
else:
    print("no")







