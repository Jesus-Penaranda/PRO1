def check_average(nums):
    a, b, c = sorted(nums)  # Ordenamos para simplificar la verificación
    if 2 * b == a + c:  # Comprobamos si b es el promedio de a y c
        print("YES")
    else:
        print("NO")

# Leer entrada y convertirla en una lista de enteros
nums = list(map(int, input().split()))

# Llamar a la función
check_average(nums)
