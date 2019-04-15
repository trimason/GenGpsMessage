#ifndef DSA
#define DSA


/*
���ܣ�       ����userid��userid�ĳ���
userid��     �û�����
userid_len   �û������ֽ���
*/
void bdnma_ds_setuser(char *userid, int userid_len);

/*
���ܣ�       ���ɹ�˽Կ��
prvkey:      ˽Կ
pubkey:      ��Կ
f:           0 ecdsa 1 sm2

����ֵ��
-1�� ʧ��
0��  �ɹ�
*/
int bdnma_ds_keygen(char *prvkey, char *pubkey, int f);

/*
���ܣ�      ����ǩ������
message��   ��Ϣ
key:        ǩ��˽Կ
msg_len:    ��Ϣ�����ֽ���
f:          0 ecdsa 1 sm2
signature:  ǩ�����

����ֵ��
-1�� ʧ��
0��  �ɹ�
*/
int bdnma_ds_sign(char * message, char * key, int f, int msg_len, char * signature);

/*
���ܣ�      ��֤ǩ�����
message��   ��Ϣ
key:        ��֤��Կ
msg_len:    ��Ϣ�����ֽ���
f:          0 ecdsa 1 sm2
signature:  ǩ�����

����ֵ��
-1�� ��֤ʧ��
0��  ��֤�ɹ�
*/
int bdnma_ds_verify(char * message, char * key, int f, int msg_len, char * signature);

/*
���ܣ�      ����sm2��˽Կ��
prvkey:     ˽Կ
pubkey:     ��Կ

����ֵ��
0�� �ɹ�
*/
int bdnma_sm2_keygen(char *prvkey, char *pubkey);

/*
���ܣ�      sm2ǩ��
message��   ��Ϣ
key:        ǩ��˽Կ
msg_len:    ��Ϣ�����ֽ���
signature:  ǩ�����

����ֵ��
0�� �ɹ�
*/
int bdnma_sm2_sign(char * message, char * key, int msg_len, char * signature);

/*
���ܣ�      sm2ǩ����֤
message��   ��Ϣ
key:        ��֤��Կ
msg_len:    ��Ϣ�����ֽ���
signature:  ǩ�����

����ֵ: 
-1�� ��֤ʧ��
0��  ��֤�ɹ�
*/
int bdnma_sm2_verify(char * message,int msg_len, char * key, char * signature);

/*
���ܣ�      ����ecdsa��˽Կ��
prvkey:     ˽Կ
pubkey:     ��Կ

����ֵ��
0�� �ɹ�
*/
int bdnma_ecdsa_keygen(char *prvkey, char *pubkey);

/*
���ܣ�      ecdsaǩ��
message��   ��Ϣ
key:        ǩ��˽Կ
msg_len:    ��Ϣ�����ֽ���
signature:  ǩ�����

����ֵ��
0�� �ɹ�
*/
int bdnma_ecdsa_sign(char * message, char * key, int msg_len, char * signature);

/*
���ܣ�      ecdsaǩ����֤
message��   ��Ϣ
key:        ��֤��Կ
msg_len:    ��Ϣ�����ֽ���
signature:  ǩ�����

����ֵ:
-1�� ��֤ʧ��
0��  ��֤�ɹ�
*/
int bdnma_ecdsa_verify(char * message, int msg_len, char * key, char * signature);


#endif
