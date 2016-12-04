### my_printf

#Sujet :

Recoder le printf de la Lib C. Le prototype doit être identique.
Le buffering du Printf n'est pas à reproduire.
Tous les flags sont à reproduire exepté :
  - Les flags de type float / double
  - Le flag n

Il devra être ajouté :
  - %b :
        Affiche un unsigned int en base binaire.
  - %S :
        Affiche une chaîne comme %s avec une valeur octal pour les caractères non affichables (ascii < 32 && == 127)

Les formats / Modificateurs conversion et autres ne sont pas à gérer.

Fonctions / lib Autorisées :
  - \<stdarg.h\>
  - malloc()
  - free()
  - write()

#Le rendu :

Il à été rendu un printf complet répondant au sujet.
Avec en plus :
  - %f %F pour les doubles.
  - Les conversions l, h, hh.
  - Le modificateur #
  - Le formating %30d %030d
  - Les fonctions printf fprintf dprintf sprintf snprintf ainsi que les vprintf....
  - Les formats doivent respecter le format suivant %[modificateur #][0][precision].[precision][conversion][flag]

#La correction :

Les tests basiques 100%

Les tests complexes 80% (les 20 % sont les flags de type % 30d et les paramètes des format dans un ordre différent)
