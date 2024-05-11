//a. Il manque un point virgule => do cin >> c ; while (c != '\n') ;
do cin >> c while (c != '\n') ;

//b. Il manque une instruction (peut être vide) après le mot do => do {} while ( cin >> c, c != '\n') ; OU do ; while ( cin >> c, c != '\n') ;
do while ( cin >> c, c != '\n') ;

//c. C'est une boucle infinie
do {} while (1) ;
