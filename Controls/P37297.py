#Your task is to write a program that reads a natural number and prints the sum of their three last digits.

number = int(input())    
number = number%1000

suma = sum(map(int, str(number)))
print(suma)
