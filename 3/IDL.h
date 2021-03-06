/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _IDL_H_RPCGEN
#define _IDL_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct numbers {
	int a;
};
typedef struct numbers numbers;

#define FACTORIAL_POROG 0x23451111
#define FACTORIAL_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define factorial 1
extern  int * factorial_1(numbers *, CLIENT *);
extern  int * factorial_1_svc(numbers *, struct svc_req *);
extern int factorial_porog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define factorial 1
extern  int * factorial_1();
extern  int * factorial_1_svc();
extern int factorial_porog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_numbers (XDR *, numbers*);

#else /* K&R C */
extern bool_t xdr_numbers ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_IDL_H_RPCGEN */
