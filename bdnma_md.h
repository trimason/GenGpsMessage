#ifndef MD
#define MD


/*
���ܣ�       ������ϢժҪ
message��    ��Ϣ
msg_len:     ��Ϣ�����ֽ���
f:           0 sha256 1 sm3
digest:      ��ϢժҪ

����ֵ��
-1��ʧ��
0�� �ɹ�
*/
int bdnma_md(char * message, int msg_len, int f, char * digest);

/*
���ܣ�      ����sha256����ϢժҪ
message��   ��Ϣ
msg_len:    ��Ϣ�����ֽ���
digest:     ��ϢժҪ

����ֵ��
0�� �ɹ�
*/
int bdnma_sha256(char * message, int msg_len, char * digest);

/*
���ܣ�      ����sm3��ϢժҪ
message��   ��Ϣ
msg_len:    ��Ϣ�����ֽ���
digest:     ��ϢժҪ

����ֵ��
0�� �ɹ�
*/
int bdnma_sm3(char * message, int msg_len, char * digest);


#endif
