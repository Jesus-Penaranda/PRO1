import yogi

dinero = yogi.read(float)
divisa = yogi.read(str)
if divisa == "euros":
    conver = dinero*1.254
    print(f"{conver:.2f} dolars")
else:
    print(f"{dinero/1.254:.2f} euros")