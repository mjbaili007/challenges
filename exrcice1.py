#Écrire une fonction nb_caracteres(texte) qui retourne
# le nombre de caractères d’une chaîne (espaces inclus).
def nb_caracteres(texte):
    l=len(texte)
    return l

texte= input("entrer un texte: ")
print("le nombre de caractères est ",nb_caracteres(texte))
