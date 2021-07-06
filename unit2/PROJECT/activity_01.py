import sys

num1 = 9


def isPrime():
    # def message(): ##!Local
    #    print("This is a function...")
    global num1
    num1 = 3

    def local_function(string):
        print("This is a local funtion")
    # local_function  # Local function

    # message()
    #message("This is a function...")
    num_div = 1
    count = 2  # dos cuentas

    if(num1 == 1):
        print("it is not prime")
        exit()
    while(count <= num1):
        if(num1 % count == 0):
            num_div += 1

        count += 1

    if(num_div > 2):
        return False
    else:
        return True


def message():  # !Global
    print("global var")


def powTwoNumber(num1, num2):
    pownum1 = pow(num1, 2)
    pownum2 = pow(num2, 2)
    #print(pownum1, pownum2)
    return (pownum1, pownum2)


(a, b) = ("hola", "Adiel")

if __name__ == "__main__":
    # print(isPrime(int(sys.argv[1])))
    # message()
    print(a, b)
    print(f'num1: {num1}')
    print(isPrime())
    print(f'num1:{num1}')

    print(powTwoNumber(2, 3))
