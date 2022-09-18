#include "Cryptographic.h"

uint64_t fast_pow_mod(uint64_t a, uint64_t x, uint64_t p)
{
	uint64_t temp = 1;

	while (x) {
		if (x & 0x01) {
			temp = (a * temp) % p;
		}
		a = (a * a) % p;
		x >>= 1;
	}
	return uint64_t(temp);
}