/*
version 20110506
D. J. Bernstein
Public domain.
*/

#include "crypto_stream.h"

int crypto_stream_salsa20_armneon6(
        unsigned char *c,unsigned long long clen,
  const unsigned char *n,
  const unsigned char *k
)
{
  return crypto_stream_salsa20_armneon6_xor(c,0,clen,n,k);
}
