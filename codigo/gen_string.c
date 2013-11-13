/*
 * Regresa el gen en formato de palabra para imprimirse
 */
#include "bevolucion.h"
int8_t *
gen_string (gen g)
{
  int8_t *gs;
  int32_t i;
  gs = calloc (sizeof (int8_t), MAX_NUC_GEN);
  for (i = 0; i < g.tamano; i++)
    memcpy (gs + (i * 2), nombre_par_base (g.par_bases[i]), 2);

  return gs;
}
