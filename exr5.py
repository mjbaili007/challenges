def compte_lettre(x,copmte):
    comptecon=0
    ptecomv=0
    if copmte==ptecomv:
        for c in x:
            if c in "aeiouyAEIOUY":
                ptecomv+=1
                print(ptecomv)
    elif copmte== comptecon:
        for c in x:
            if c not in "aeiouyAEIOUY":
                comptecon+=1
                print(comptecon)
    else :
        print("Invalide")
compte=input("Enter un chaine de caractere: ")
