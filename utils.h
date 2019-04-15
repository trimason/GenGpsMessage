#ifndef _SC_CRYPTO_UTILS_H_
#define _SC_CRYPTO_UTILS_H_

#ifdef __cplusplus
#include <cstdint>
extern "C" {
#else
#include <stdint.h>
#endif

void hexstr_to_bytes(const char *str, void *buf, uint32_t n);
void bytes_to_hexstr(const void *buf, char *str, uint32_t n);
void bytes_to_hexchars(const void *buf, char *str, uint32_t n);
void printHex(const void *buf, int n);

#ifdef __cplusplus
}
#endif
#endif //_SC_CRYPTO_UTILS_H_

