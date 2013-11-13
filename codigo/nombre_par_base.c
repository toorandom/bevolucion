/*
 * Dada una base en formato 8 bits, regresa su representacion en string, muy simple
 */
#include "bevolucion.h"
char *
nombre_par_base (int8_t n)
{
  char *ptr;

  switch (n)
    {
    case AT:
      ptr = "AT\0";
      break;
    case TA:
      ptr = "TA\0";
      break;
    case CG:
      ptr = "CG\0";
      break;
    case GC:
      ptr = "GC\0";
      break;
    case AU:
      ptr = "AU\0";
      break;
    case UA:
      ptr = "UA\0";
      break;
    default:
      fprintf (stderr,
               "ERROR, %x no representa ningun par complementario de bases nitrogenadas\n",
               n);
      ptr = NULL;
      exit (EXIT_FAILURE);

    }
  return ptr;
}
