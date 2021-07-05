a = int(input("Input a number: "))

if a % 2 == 0:
    r = "and is Even"
else:
    r = "and is odd"


def ep(a):
    con = int(0)
    r = True
    for i in range(1, a + 1):
        if a % i == 0:
            con += 1
        if con > 2:
            r = False
            break
    return r


if ep(a) == True:
    print("The number", a, "is prime", r)
    ##print("",r)
else:
    print("The number", a, "isn't prime", r)
    ##print("",r)
