#ifndef PRNG
#define PRNG

/*
功能：     设置强随机数发生器种子
seed:      随机种子
seed_len:  种子长度字节数
*/
void bdnma_prng_seed(char * seed, int seed_len);

/*
功能：    生成指定长度随机数
length:   随机数长度字节数
prn:      随机数
*/
int bdnma_prng(int length, char *prn);

/*
功能：    设置随机数发生器种子
seed:     种子

返回值：
0 成功
*/
void bdnma_prng_init(long seed);

#endif
