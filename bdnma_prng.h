#ifndef PRNG
#define PRNG

/*
���ܣ�     ����ǿ���������������
seed:      �������
seed_len:  ���ӳ����ֽ���
*/
void bdnma_prng_seed(char * seed, int seed_len);

/*
���ܣ�    ����ָ�����������
length:   ����������ֽ���
prn:      �����
*/
int bdnma_prng(int length, char *prn);

/*
���ܣ�    �������������������
seed:     ����

����ֵ��
0 �ɹ�
*/
void bdnma_prng_init(long seed);

#endif
