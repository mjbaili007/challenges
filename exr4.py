def factoriel(x):
    f = 1
    if x==0:
        return f
    else:
        for i in range(1,x+1):
           f = i * f
        return f
B=0
while B==0:
   n = int(input("Enter un nombre positive: "))
   if n>=0:
       B=1
print(factoriel(n))