#ifndef AREAS_H
#define AREAS_H

/* Constante matematica PI */
#define PI 3.141593

/* Macros de calculo de areas com parenteses de protecao */
#define A_CIRC(raio) (PI * (raio) * (raio))
#define A_RET(base, alt) ((base) * (alt))
#define A_TRI(base, alt) (((base) * (alt)) / 2.0)

#endif
