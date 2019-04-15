#include <stdint.h>
#include <stdio.h>
#include "utils.h"

static uint8_t hex_to_byte(char c)
{
	if (c >= '0' && c <= '9') {
		return (uint8_t)(c - '0');
	}
	else {
		c |= 0x20;
		if (c >= 'a' && c <= 'f') {
			return (uint8_t)(c - 0x57);
		}
		return 0;
	}
}

void hexstr_to_bytes(const char *str, void *buf, uint32_t n)
{
	uint8_t *p = (uint8_t*)(buf);
	uint32_t i;
	for (i = 0; i < n; ++i) {
		*p++ = (hex_to_byte(*str) << 4) | (hex_to_byte(str[1]));
		str += 2;
	}
}

static const char s_hexchar[16] = {
	'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'
};

void bytes_to_hexstr(const void *buf, char *str, uint32_t n)
{
    bytes_to_hexchars(buf, str, n);
    str[n<<1] = '\0';
}

void bytes_to_hexchars(const void *buf, char *str, uint32_t n)
{
	const uint8_t *p = (const uint8_t*)(buf);
	uint32_t i;
	for (i = 0; i < n; ++i) {
		*str++ = s_hexchar[*p >> 4];
		*str++ = s_hexchar[(*p++) & 0xf];
	}
}

void printHex(const void *buf, int n)
{
	const uint8_t *p = (const uint8_t*)(buf);
	int i;
	for (i = 0; i < n; ++i) {
		printf("%02x", *p++);
		//if ((i & 0xf) == 0xf) printf("\n");
	}
	//if (n & 0xf)
		printf("\n");
}

