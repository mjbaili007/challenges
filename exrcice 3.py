def calculer_programme(n):

    termes = [3, 2, 7]

    a = 3
    b = 2
    c = 7


    for i in range(3, n + 1):

        d = a + (b * 2) + (c * 3)
        termes.append(d)
        a = b
        b = c
        c = d

    print("Les premiers termes sont :", termes)



n = int(input("Entrez un nombre n supérieur ou égal à 2 : "))
while n < 3:
    n = int(input("Erreur ! Entrez un nombre n supérieur ou égal à 2 : "))

calculer_programme(n)