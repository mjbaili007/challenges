def moyenne(notes):
    m=sum(notes)/len(notes)
    return m
def mention(m):
    if m >= 16 :
       print("Très bien")
    elif m >= 14 :
       print(" bien")
    elif m>= 10 :
       print("Assez  bien")
    else:
        print("Ajourné")
étudiants =[]
n=int(input("entrer le nombre d'étudiants "))
for i in range(n):
     nom = input("entrer le nom d'étudiant " + str(i+1) + ": ")
     notes=[]
     for i in range(5):
         note=float(input("entrer la note  " + str(i+1) + ": "))
         while note < 0 or note > 20:
             note = float(input("entrer la note " + str(i + 1) + ": "))
         notes.append(note)
     étudiants.append((nom,notes))

for etu in étudiants:
    nom = etu[0]
    notes = etu[1]
    m = moyenne(notes)
    print("***********************************************************")
    print("le nom de l’étudiant",nom)
    print("la note maximale est ",max(notes))
    print("la note minimale est ",min(notes))
    print("la moyenne est ",m)
    print("la montion est ")
    mention(m)
