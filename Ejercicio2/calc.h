/*
 * cabecera que define la dupla de datos, la versión y dirección del programa y las operacionex a realizar
 */

#ifndef _CALC_H_RPCGEN
#define _CALC_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct dupla_int {
	int a;
	int b;
};
typedef struct dupla_int dupla_int;

#define CALC_PROG 0x23451112
#define CALC_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define SUMA 1
extern  int * suma_1(dupla_int *, CLIENT *);
extern  int * suma_1_svc(dupla_int *, struct svc_req *);
#define RESTA 2
extern  int * resta_1(dupla_int *, CLIENT *);
extern  int * resta_1_svc(dupla_int *, struct svc_req *);
#define MULTIPLICACION 3
extern  int * multiplicacion_1(dupla_int *, CLIENT *);
extern  int * multiplicacion_1_svc(dupla_int *, struct svc_req *);
#define DIVISION 4
extern  int * division_1(dupla_int *, CLIENT *);
extern  int * division_1_svc(dupla_int *, struct svc_req *);
extern int calc_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define SUMA 1
extern  int * suma_1();
extern  int * suma_1_svc();
#define RESTA 2
extern  int * resta_1();
extern  int * resta_1_svc();
#define MULTIPLICACION 3
extern  int * multiplicacion_1();
extern  int * multiplicacion_1_svc();
#define DIVISION 4
extern  int * division_1();
extern  int * division_1_svc();
extern int calc_prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_dupla_int (XDR *, dupla_int*);

#else /* K&R C */
extern bool_t xdr_dupla_int ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_CALC_H_RPCGEN */
