#ifndef HMAC
#define HMAC

/*
功能：      生成消息认证码
message：   消息
msg_len:    消息长度字节数
key:        密钥
key_len:    密钥长度字节数
f:          0 sha256 1 sm3
mac:        消息认证码

返回值：
-1： 失败
0：  成功
*/
int bdnma_mac(char * message, int msg_len, char * key, int key_len, int f, char * mac);

/*
功能：      生成sha256消息认证码
message：   消息
msg_len:    消息长度字节数
key:        密钥
key_len:    密钥长度字节数
mac:       消息认证码

返回值：
0： 成功
*/
int bdnma_hmac_sha256(char * message, int msg_len, char * key, int key_len, char * mac);

/*
功能：      生成sm3消息认证码
message：   消息
msg_len:    消息长度字节数
key:        密钥
key_len:    密钥长度字节数
mac:       消息认证码

返回值：
0： 成功
*/
int bdnma_hmac_sm3(char * message, int msg_len, char * key, int key_len, char * mac);


#endif
