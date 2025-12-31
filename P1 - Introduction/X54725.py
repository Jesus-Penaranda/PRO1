#Escribe un programa que lea dos números y escrba su mínimo.

entrada = input()
number_1, number_2 = map(int, entrada.split())

if number_1 > number_2: 
    print(number_2)
else:
    print(number_1)


                 
