# algoritmi-ex2

Questo progetto implementa due versioni dell'algoritmo per calcolare la distanza di edit tra due stringhe, considerando solo operazioni di inserimento e cancellazione:
Versione ricorsiva: segue un approccio diretto, ma può essere inefficiente per stringhe lunghe.
Versione con programmazione dinamica: utilizza una matrice per ottimizzare i calcoli, rendendo l'algoritmo molto più veloce.

Il progetto include due programmi eseguibili:
edit_distance_recursive: permette di calcolare la distanza di edit utilizzando la versione ricorsiva.
edit_distance_dynamic: utilizza invece l'approccio dinamico. Inoltre, è incluso un eseguibile per eseguire test automatici sulle due versioni.

Dai test effettuati, la versione con programmazione dinamica risulta molto più efficiente, soprattutto per stringhe lunghe, grazie all'uso di una matrice che riduce i calcoli ridondanti. L’approccio ricorsivo, pur funzionando correttamente, diventa rapidamente impraticabile per input più grandi a causa della sua complessità esponenziale.
