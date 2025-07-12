Libft
Description
Libft est le premier projet de l'école 42 qui consiste à recréer une bibliothèque C personnelle en réimplémentant des fonctions de la libc standard ainsi que des fonctions utilitaires supplémentaires.

Objectifs

Ce projet permet de :
Approfondir la compréhension du langage C
Maîtriser la gestion de la mémoire avec malloc et free
Comprendre le fonctionnement interne des fonctions de la libc
Créer une base de code réutilisable pour les projets futurs

Fonctions implémentées

Partie 1 - Fonctions de la libc
Reimplementation des fonctions standard comme strlen, strcpy, strncmp, atoi, isalpha, memcpy, etc.

Partie 2 - Fonctions additionnelles
Fonctions utilitaires comme ft_substr, ft_strjoin, ft_strtrim, ft_split, ft_itoa, ft_putstr_fd, etc.

Partie bonus - Gestion des listes chaînées
Implémentation de fonctions pour manipuler les listes chaînées : ft_lstnew, ft_lstadd_front, ft_lstsize, ft_lstclear, etc.

Compilation
make        # Compile la bibliothèque
make bonus  # Compile avec les fonctions bonus
make clean  # Supprime les fichiers objets
make fclean # Supprime tout
make re     # Recompile entièrement

La bibliothèque génère un fichier libft.a à lier avec vos projets.
