import sys

add = 0
average = (len(sys.argv) - 1)
for i in range(len(sys.argv)-1):
    add = add+int(sys.argv[i+1])
average = add / average
print('add: '+str(add))
print(average)
