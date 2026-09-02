#Demande le nom de l’étudiant
#Demande 5 notes (boucle)
#Calcule moyenne, max, min
#Affiche :
#Nom
#Moyenne
#Mention :
#≥ 16 : Très bien
#≥ 14 : Bien
#≥ 10 : Assez bien
#Sinon : Ajourné
def moyenne(notes):
    m=sum(notes)/5
    return m
def Mention(m):
    if m >= 16 :
       print("Très bien")
    elif m >= 14 :
       print(" bien")
    elif m>= 10 :
       print("Assez  bien")
    else:
        print("Ajourné")
notes =[]
nom = input("entrer le nom de l’étudiant ")
for i in range (0,5):
    n = float(input("entrer la note "+str(i+1)+": "))
    while n<0 or n>20 :
        n = float(input("entrer la note "+str(i+1)+": "))
    notes.append(n)
m = moyenne(notes)
print("le nom de l’étudiant",nom)
print("la note maximale est ",max(notes))
print("la note minimale est ",min(notes))
print("la moyenne est ",m)
print("la montion est ")
Mention(m)