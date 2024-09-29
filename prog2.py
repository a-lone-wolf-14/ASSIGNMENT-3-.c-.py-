bin=int(input("Enter the binary value: "))
bin2=bin
dec=0
i=0
flag=0

while bin>0:
    rem=bin%10
    if rem!=0 and rem!=1:
        print(f'{bin2} binary value not supported')
        flag=1
        break
    bin=bin//10
    dec+=(rem*(2**i))
    i+=1

if flag==0:
    print(f'Decimal conversion for {bin2} is: {dec}')