#Écrire une fonction nb_mots(texte) qui retourne le nombre de mots d’une phrase.
def nb_mots(texte):
     return len(texte.split())
texte =input("enter un texte: ")
nb_mots = nb_mots(texte)
print("le nombre de mot est ",nb_mots)