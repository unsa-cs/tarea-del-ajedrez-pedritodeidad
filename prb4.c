#include "chess.h"
#include "figures.h"

void display(){
  char** blackS = reverse(whiteSquare);
  char** whiteS = whiteSquare;
  char** prueba2 = join(whiteS, blackS);
  char** prueba7 = repeatH(prueba2, 4);
  char** prueba8 = reverse(prueba7);
  char** prueba9 = knight;
  char** prueba10 = superImpose(whiteSquare, reverse(knight));
  interpreter(prueba10);
}
