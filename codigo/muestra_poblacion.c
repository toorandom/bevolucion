/*
 * Imprime toda la poblacion con ciertas caracteristicas
 */
#include "bevolucion.h"

void
muestra_poblacion (celula * poblacion, uint16_t habitantes, int16_t cromo_ref,
		   int16_t gen_ref, gen gen_elite)
{
  int32_t i, j, k, w;
  gen gen_actual;
  for (k = 0; k < habitantes; k++)
    for (i = 0; i < poblacion[k].num_cromo; i++)
      for (j = 0; j < poblacion[k].num_genes; j++)
	if ((i == cromo_ref) && (j == gen_ref))
	  {
	    printf
	      ("celula[indice=%02d]{id=%016llx}->cromosoma[%02d]->gen[%02d] = { ",
	       k, poblacion[k].identidad, i, j);
	    gen_actual = poblacion[k].cromosomas[i].molecula_adn.genes[j];
	    for (w = 0; w < gen_actual.tamano; w++)
	      printf ("%s", nombre_par_base (gen_actual.par_bases[w]));
	    printf
	      (" } cercania adaptacion gen_elite(%d,%d): %d\n",
	       cromo_ref, gen_ref, gen_actual.aptitud);

	  }
  printf ("\n");
}
