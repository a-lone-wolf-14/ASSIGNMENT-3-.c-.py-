There are number systems based on 'n' value in base-n, with every change in 'n' value there are changes in how you represent a number or change them from one 'n' value base to another and how many integral/alphabetical characters used in a number system.

Base-2 (n=2) **Binary**- It includes only integral characters with values (0,1)
Base-8 (n=8) **Octal**- It includes only integral characters with values (0,1,2,3,4,5,6,7)
Base-10 (n=10) **Decimal**- It includes only integral characters with values (0,1,2,3,4,5,6,7,8,9)
Base-16 (n=16) **Hexadecimal**- It includes integral characters with values (0,1,2,3,4,5,6,7,8,9) as well as alphabetical characters (A(=10),B(=11),C(=12),D(=13),E(=14),F(=15))

Now we will talk about how to change numbers from one base value to another.

Decimal ---> Binary  : Divide the number continuously by 2 and record the remainder, when the number finally becomes 1 then start from bottom to top and write the remainders. That will be the binary conversion of a decimal number.

Ex- 2045  2  |  2045  |  1
          2  |  1022  |  0
          2  |  511   |  1
          2  |  255   |  1
          2  |  127   |  1
          2  |  63    |  1
          2  |  31    |  1
          2  |  15    |  1 
          2  |  7     |  1 
          2  |  3     |  1
             |  (1)--> start from this one.  
  Final Binary conversion: 11111111101

  Binary ---> Deciaml  : Starting from left to right, multiply the binary place value to exponent of 2, with exponent as place of the digit and then add them all up.

  Ex- 1101001110
      1  |  1  |  0  |  1  |  0  |  0  |  1  |  1  |  1  |  0
      x  |  x  |  x  |  x  |  x  |  x  |  x  |  x  |  x  |  x
      2^9  2^8    2^7  2^6    2^5  2^4    2^3  2^2    2^1  2^0
      --------------------------------------------------------
      512  +  256  +  0  +  64  +  0  +  0  +  8  +  4  +  2  +  0  =  846
