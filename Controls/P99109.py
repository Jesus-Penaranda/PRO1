import yogi

palabra_1 = yogi.read(str)
palabra_2 = yogi.read(str)
palabra_3 = yogi.read(str)

if palabra_1 <= palabra_2 and palabra_1 <= palabra_3:
    print(palabra_1)
elif palabra_1 >= palabra_2 and palabra_2 <= palabra_3:
    print(palabra_2)
else:
    print(palabra_3)

