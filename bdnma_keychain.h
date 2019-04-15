#ifndef KEYCHAIN
#define KEYCHAIN

/*
功能：      生成密钥链
prvkey:     签名私钥
f:          0 ecdsa + sha256, 1 sm2+sm3
keylen:     密钥长度（比特）
N:          密钥个数
rnum:       种子密钥
rlen:       种子密钥长度（字节）
chain:      密钥链
signature:  签名结果

返回值：
-1： 失败
0：  成功
*/
int bdnma_keychain_gen(char *prvkey, int f, int keylen, int N, char *rnum, int rlen, char *chain, char *signature);

/*
功能：      生成密钥链，算法采用ecdsa+sha256
*/
int bdnma_keychain_gen_ecdsa(char *prvkey, int keylen, int N, char *rnum, int rlen, char *chain, char *signature);

/*
功能：      生成密钥链，算法采用sm2+sm3
*/
int bdnma_keychain_gen_sm2(char *prvkey, int keylen, int N, char *rnum, int rlen, char *chain, char *signature);

#endif
