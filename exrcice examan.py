def compter (n , chaine):
    if n==1:
        return len(chaine.split())
    elif n==2:
        for c in chaine:
            comp=0
            if c.isupper():
              comp=comp +1
        return comp
    elif n==3:
        comp=0
        for c in chaine:
            c.isdigit()
            comp=comp +1
        return comp
    else :
        return -1
chaine = input("Saisir une chaîne : ")
while True :
   print("1 - Compter les mots")
   print("2 - Compter les lettres majuscules")
   print("3 - Compter les chiffres")
   print("0 - Quitter  ")
   n = int(input("Votre choix : "))
   if  n == 0:
       print("bay ")
       break
   res = compter(n, chaine)
   if res == -1:
      print("Choix invalide")
   elif n == 1:
      print("Nombre de mots :", res)
   elif n == 2:
      print("Nombre de majuscules :", res)
   elif n == 3:
      print("Nombre de chiffres :", res)

