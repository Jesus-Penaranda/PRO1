"""
    Feu un programa que llegeixi dos naturals a i b i escrigui la divisió real de a entre b, 
    la divisió entera de a entre b, i el rest de la divisió entera de a entre b.

    Entrada:
    L'entrada són dos naturals a i b.

    Sortida:
    Si b=0, la sortida és una línia amb el text “divisio per zero”.
"""

entrada = input()
a, b = list(map(int, entrada.split()))
if b == 0:
    print("divisio per zero")
else:
    print(f"{(a / b):.3f} {a // b} {a % b}")