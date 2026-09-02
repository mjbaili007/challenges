#Écrivez un programme qui demande à l’utilisateur de saisir un entier positif, puis appelle une
#fonction factoriel qui calcule et renvoie la valeur du factoriel de ce nombre. Le programme doit
#ensuite afficher le résultat retourné par la fonction.
def factoriel(n):
    f =1
    if n==0:
        return f
    else:
        for i in range(1,n+1):
            f=f*i
        return f
n= int (input("entrer la valeur de n ")  )
while n < 0 :
   n= int (input("entrer la valeur de n ")  )
print("le factoriel est ",factoriel(n))