#ifndef HMAC
#define HMAC

/*
���ܣ�      ������Ϣ��֤��
message��   ��Ϣ
msg_len:    ��Ϣ�����ֽ���
key:        ��Կ
key_len:    ��Կ�����ֽ���
f:          0 sha256 1 sm3
mac:        ��Ϣ��֤��

����ֵ��
-1�� ʧ��
0��  �ɹ�
*/
int bdnma_mac(char * message, int msg_len, char * key, int key_len, int f, char * mac);

/*
���ܣ�      ����sha256��Ϣ��֤��
message��   ��Ϣ
msg_len:    ��Ϣ�����ֽ���
key:        ��Կ
key_len:    ��Կ�����ֽ���
mac:       ��Ϣ��֤��

����ֵ��
0�� �ɹ�
*/
int bdnma_hmac_sha256(char * message, int msg_len, char * key, int key_len, char * mac);

/*
���ܣ�      ����sm3��Ϣ��֤��
message��   ��Ϣ
msg_len:    ��Ϣ�����ֽ���
key:        ��Կ
key_len:    ��Կ�����ֽ���
mac:       ��Ϣ��֤��

����ֵ��
0�� �ɹ�
*/
int bdnma_hmac_sm3(char * message, int msg_len, char * key, int key_len, char * mac);


#endif
