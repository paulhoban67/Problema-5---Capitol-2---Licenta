Problema 5 - Capitol 2 - Licenta

Algoritmul citeste un numar si afiseaza numarul impreuna cu alte 2 numere prime care insumate vor da numarul citit; la citirea unui numar <= 2 se va afisa ca nu exista numere prime insumate

4 -> 4 2 2

6 -> 6 3 3

8 -> 8 3 5

7 -> 7 2 5

5 -> 5 2 3


Rezolvare notepad:

 a  |  b  |  c  |
 
-----------------

 5  | 0-2 | 0-3 |     5 2 3 (numerele prime care insumate dau 5)
 
 7  |  2  |  3  |
 
 4  |  2  |  5  |
 
 6  |  2  |  5  |

------------------

desc(5,0,0)
 n | p1 | p2 |
--------------
 5 |  0 |  0 |        5 2 3
   |  2 |  3 |


desc(7,2,3)
 n | p1 | p2 |        7 2 5
--------------
 7 |  2 |  3 |
   |  2 |  5 |


desc(4,2,5)
 n | p1 | p2 |        
--------------
 4 |  2 |  5 |        4 2 2
   |  2 |  2 |


desc(6,2,2)
 n | p1 | p2 |        
--------------
 6 |  2 |  5 |        6 3 3
   |  3 |  3 |

