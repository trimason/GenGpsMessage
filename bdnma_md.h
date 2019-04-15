#ifndef MD
#define MD


/*
功能：       生成消息摘要
message：    消息
msg_len:     消息长度字节数
f:           0 sha256 1 sm3
digest:      消息摘要

返回值：
-1：失败
0： 成功
*/
int bdnma_md(char * message, int msg_len, int f, char * digest);

/*
功能：      生成sha256的消息摘要
message：   消息
msg_len:    消息长度字节数
digest:     消息摘要

返回值：
0： 成功
*/
int bdnma_sha256(char * message, int msg_len, char * digest);

/*
功能：      生成sm3消息摘要
message：   消息
msg_len:    消息长度字节数
digest:     消息摘要

返回值：
0： 成功
*/
int bdnma_sm3(char * message, int msg_len, char * digest);


#endif
