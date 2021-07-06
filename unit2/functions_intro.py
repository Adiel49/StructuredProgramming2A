from sys import argv as ag


def add_to_number(num1, num2):
    print('StartProgram: addToNumbers executed...\n')
    return num1 + num2
    return result


answer = False


def is_even(aNumber):
    if(aNumber % 2 == 0):
        # return "it's even"
        return True
        #print("it's even")
    else:
        # return "it's odd"
        return False
        #print("it's odd")


if __name__ == "__main__":
    ##print(f'La suma de dos numeros = {add_to_number(int(ag[1]), int(ag[2]) )}')
    n1 = int(input('Dame numero 1:\t'))
    n2 = int(input('Dame numero 2:\t'))

    #print(f'La suma de dos numeros={add_to_number(n1,n2)}')

    #answer = is_even(add_to_number(n1, n2))
    # print(answer)

    if(is_even(add_to_number(n1, n2))):
        print(f'n1:"{n1}" and n2:"{n2}" are your lucky numbers!')
    else:
        print(f'n1:"{n1}" and n2:"{n2}" are not your lucky numbers!')
