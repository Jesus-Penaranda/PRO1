
casos = int(input())
words = list()

for i in range(casos):
    words.append(str(input()))
for i in range(len(words) - 1, -1, -1):
    aux = words[i]
    print(aux[::-1])