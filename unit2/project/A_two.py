# Design a program that receives two numbers using argv argument and print the following
# arithmetical operations. add, subtraction, multiplication, dicision
import sys

add = int(sys.argv[2]) + int(sys.argv[2])
sub = int(sys.argv[1]) - int(sys.argv[2])
mul = int(sys.argv[1]) * int(sys.argv[2])
div = int(sys.argv[1]) / int(sys.argv[2])

print('add:'+str(add))
print('subtraction:'+str(sub))
print('multiplication:'+str(mul))
print('division:'+str(div))
