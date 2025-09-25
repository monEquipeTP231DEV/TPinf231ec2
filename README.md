TPinf231ec2

ensemble de programmes codés en c ,fait en groupe et à envoyer dans une conversation créée dans le github

Collection de programmes en C Description générale

Ce repository contient neuf programmes en langage C pour réaliser différentes opérations sur des tableaux, matrices et vecteurs, ainsi que pour effectuer des calculs mathématiques simples. Chaque programme est autonome et illustre des concepts tels que l’inversion de tableau, le calcul de la médiane, la multiplication de matrices, le produit vectoriel, la recherche dans un tableau, et la vérification de l’ordre d’un tableau. Liste des fichiers et description

inverserTab.c
Programme pour inverser un tableau d’entiers saisi par l’utilisateur.ce programme va prendre en entree un tableau d'entiers ensuite utiliser une varieble e de type int et faire l'echange entre les derniers et les premiers elements du tableau et il y'aura au total n/2 echanges car l'element du milieu reste inchange

median.c
Programme pour trier un tableau et calculer sa médiane.il prend en entree un tableau d'entiers ,trie ses elements par ordre croissant en utisant une variable s de type int pour echanger t[i] lorsqu'ilest superieur a t[i+1] et ensuite verifie si le nombre d'elements du tableau est pair affecte a la mediane la somme des elements suivant et precedent le rang du tableau et s'il est impair l'element de rang (n+1)/2

prodEnt
Programme pour calculer le produit a * b en utilisant uniquement +1.il prend en entree deux entiers ensuite les parcours en supposant que ce sont des tableaux de 1 a et b fois et a chaque parcours ajoute 1 a la variable p (produit)

prodMat.c
Programme pour multiplier deux matrices si les dimensions sont compatibles(c'est a dire le nombres de colnnes dela premiere matrice est egale au nombre de lignes de la deuxieme matrice).

prodVect.c
Programme pour calculer le produit vectoriel de deux vecteurs 3D.il va declarer une structure vect ayant pour elements les coordonnees d'un vecteur 3D et ensuite prendre n entree deux vecteurs de et faire le produit selon la formule du produit vectoriel

prodVectMat.c
Programme pour multiplier une matrice par un vecteur si les dimensions sont compatibles.il va declarer une structure vect avec son nombre de vecteurs et son tableau de valeur de vecteur ,prendre en entree une matrice ,verifier si le nombre de colonnes ou lignes de la matrice est egale au nombre de coordonnes du vecteur ,si oui faire le produit et donnera en sortie un vecteur de meme dimensin que celui declare

rechSeq.c
Programme pour rechercher un élément dans un tableau et afficher sa position.

sommeMat.c
Programme pour additionner deux matrices si elles ont les mêmes dimensions(c.est a dire elles ont meme nombre de colonnes et de lignes).

tabTrie.c
Programme pour vérifier si un tableau est trié en ordre croissant, décroissant ou non trié.verifier cela en comparant chaque element du tableau a son suivant

Compilation et exécution Pour compiler chaque fichier (exemple avec prodEnt.c) : gcc prodEnt -o prodEnt execution: ./prodEnt

pour executer: ./prodEnt



