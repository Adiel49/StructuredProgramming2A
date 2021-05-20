print("start program")
paid=1.5
ph=300
m=0
time=int(input("input hour:\n"))
if(time>40):
    m= ((ph*40)+ (time-40)*paid)
else:
    m=time*ph
        
print("Money:",m,"$")
print("end program...")