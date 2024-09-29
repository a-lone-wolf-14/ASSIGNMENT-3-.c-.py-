dec=int(input("Enter the decimal value: "))
dec2=dec
bin=0
bin_list=[]

while dec!=1:
    rem=dec%2
    dec=dec//2
    bin_list.append(rem)

print(f'Binary conversion for {dec2} is: 1',end='')

for i in range (len(bin_list),0,-1):
    print(bin_list[i-1],end='')