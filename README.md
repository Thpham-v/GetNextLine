# GetNextLine
getnextline - Lecture de lignes à partir d'un descripteur de fichier
Ce projet consiste à écrire une fonction getnextline en C qui lit une ligne à la fois à partir d'un descripteur de fichier.

# Fonctionnalités
Lecture de lignes à partir d'un descripteur de fichier (tel que STDIN_FILENO, open ou pipe).
Support de plusieurs descripteurs de fichiers simultanément.
Gestion correcte des fins de fichier et des erreurs d'entrée / sortie.
# Compilation
Pour compiler le projet, utilisez la commande make dans le répertoire racine. Cela générera un fichier bibliothèque statique libgnl.a que vous pouvez inclure dans vos projets futurs.

# Utilisation
Pour utiliser GNL dans votre projet, incluez l'instruction #include "get_next_line.h" dans vos fichiers source et ajoutez-la à la liste des bibliothèques à lier lors de la compilation.
