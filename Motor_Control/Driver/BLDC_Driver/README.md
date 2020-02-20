# BLDC Driver Code
Code pour contrôller des moteurs BLDC

## Liste des tâches

  - Fonctions de bases
    - Tourner dans les deux directions
    - Variation de la vitesse
    - Freiner
    - Fichier de test
      - Pour tester les nouveaux boards
      - Utilisable par quelqu'un sans coder
      - Écrit les exepected output dans la console
      - Test toutes les fonctionalités critiques
  - Contrôle en position
    - Variation d'un certain angle
    - Ajout d'un PID
  - Contrôle en vitesse
    - Calculer la vitesse
    - Contrôle par PID
  - Communication I2C
    - Connecter le board à un Teensy Master
    - Envoyer des commandes par le master
    - Lire la réponse du board 
  - Gestion des erreurs
    - Lire les registres d'erreur
    - Afficher les erreurs sur les LED
    - Communiquer avec le master quand une erreur est trouvée


## Liste des fonctions