#ifndef DSA
#define DSA


/*
功能：       设置userid和userid的长度
userid：     用户名字
userid_len   用户名字字节数
*/
void bdnma_ds_setuser(char *userid, int userid_len);

/*
功能：       生成公私钥对
prvkey:      私钥
pubkey:      公钥
f:           0 ecdsa 1 sm2

返回值：
-1： 失败
0：  成功
*/
int bdnma_ds_keygen(char *prvkey, char *pubkey, int f);

/*
功能：      进行签名操作
message：   消息
key:        签名私钥
msg_len:    消息长度字节数
f:          0 ecdsa 1 sm2
signature:  签名结果

返回值：
-1： 失败
0：  成功
*/
int bdnma_ds_sign(char * message, char * key, int f, int msg_len, char * signature);

/*
功能：      验证签名结果
message：   消息
key:        验证公钥
msg_len:    消息长度字节数
f:          0 ecdsa 1 sm2
signature:  签名结果

返回值：
-1： 验证失败
0：  验证成功
*/
int bdnma_ds_verify(char * message, char * key, int f, int msg_len, char * signature);

/*
功能：      生成sm2公私钥对
prvkey:     私钥
pubkey:     公钥

返回值：
0： 成功
*/
int bdnma_sm2_keygen(char *prvkey, char *pubkey);

/*
功能：      sm2签名
message：   消息
key:        签名私钥
msg_len:    消息长度字节数
signature:  签名结果

返回值：
0： 成功
*/
int bdnma_sm2_sign(char * message, char * key, int msg_len, char * signature);

/*
功能：      sm2签名验证
message：   消息
key:        验证公钥
msg_len:    消息长度字节数
signature:  签名结果

返回值: 
-1： 验证失败
0：  验证成功
*/
int bdnma_sm2_verify(char * message,int msg_len, char * key, char * signature);

/*
功能：      生成ecdsa公私钥对
prvkey:     私钥
pubkey:     公钥

返回值：
0： 成功
*/
int bdnma_ecdsa_keygen(char *prvkey, char *pubkey);

/*
功能：      ecdsa签名
message：   消息
key:        签名私钥
msg_len:    消息长度字节数
signature:  签名结果

返回值：
0： 成功
*/
int bdnma_ecdsa_sign(char * message, char * key, int msg_len, char * signature);

/*
功能：      ecdsa签名验证
message：   消息
key:        验证公钥
msg_len:    消息长度字节数
signature:  签名结果

返回值:
-1： 验证失败
0：  验证成功
*/
int bdnma_ecdsa_verify(char * message, int msg_len, char * key, char * signature);


#endif
