from sys import argv
from typing import Iterator
##myName = "AdielAvila"
#lista = list()
# list container
lista = ["Red", "Black", "White", "Gray", "Green"]
# list Comp.
lista2 = [i for i in range(1, 101)]
lista3 = [i for i in range(1, 101)if i % 2 == 0]
listaEvenOdd = [[i for i in range(1, 101)if i % 2 == 0]], [
    i for i in range(1, 101)if i % 2 != 0]
print(lista2)
print("___________________________")
print(lista3)
print("___________________________")
print(listaEvenOdd)
if __name__ == "__main__":
    print(f'programName:{argv[0]}\n')
    print(lista, len(lista))

    # * Manual
    # print(lista[0])
    # print(lista[1])
    # print(lista[2])
    # print(lista[3])
    # ...
    # ...
    # ...
    index = 0
    while(index < 4):
        print(f'index: {index}, value: {lista[index]}')
        index += 1
    ##print(f'programName:{argv[0]}my name is {myName}')
    ## print('programName:', str(argv[0]), "my name is", myName)
    print("____________________________")
    for index in range(0, len(lista)):
        print(f'index: {index}, value: {lista[index]}')
