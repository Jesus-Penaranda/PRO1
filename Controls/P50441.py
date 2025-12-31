p1 = (input()).split()
p2 = (input()).split()
p3 = (input()).split()

# Convertir las edades a enteros para comparar
edad1 = int(p1[1])
edad2 = int(p2[1])
edad3 = int(p3[1])

# Encontrar la edad mínima y el nombre correspondiente
if edad1 < edad2 and edad1 < edad3:
    print(p1[0])
elif edad2 < edad1 and edad2 < edad3:
    print(p2[0])
else:
    print(p3[0])
