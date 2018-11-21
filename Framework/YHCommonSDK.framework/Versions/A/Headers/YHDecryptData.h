//
//  YHDecryptData.h
//  YHRongYiTong
//  解析加密数据
//  Created by zxl on 2018/2/5.
//  Copyright © 2018年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YHDecryptData : NSObject

#pragma mark ----------------------------:: 解密 ::----------------------------
/**
 默认方式解密

 @param responeObj 原始数据
 @param isEncrypt 是否加密并验签，0表示不加密不验签
 @return 解密后的数据
 */
+(NSMutableDictionary *)decryptNetData:(id)responeObj isEncrypt:(NSString *)isEncrypt;

/**
 默认方式解密
 
 @param responeObj 原始数据
 @param isEncrypt 是否加密，0表示不加密
 @param isSign 是否验证签名，0表示不验证
 @return 解密后的数据
 */
+(NSMutableDictionary *)decryptNetData:(id)responeObj isEncrypt:(NSString *)isEncrypt isSign:(BOOL)isSign;

/**
 通过指定应用id、密钥对返回数据解密。

 @param responeObj 请求回来参数
 @param isEncrypt 是否加密，0表示不加密
 @param isSign 是否验证签名，0表示不验证
 @param appId 应用id
 @param appSecret 应用私钥
 @return 解密后的数据
 */
+(NSMutableDictionary *)decryptNetData:(id)responeObj isEncrypt:(NSString *)isEncrypt isSign:(BOOL)isSign appId:(NSString *)appId appSecret:(NSString *)appSecret;

/**
 通过指定应用id、密钥、初始向量对返回数据解密。

 @param responeObj 请求回来参数
 @param isEncrypt 是否加密，0表示不加密
 @param appId 应用id
 @param appSecret 应用私钥
 @param iv 初始化向量
 @return 解密后的数据
 */
+(NSMutableDictionary *)decryptNetData:(id)responeObj isEncrypt:(NSString *)isEncrypt isSign:(BOOL)isSign appId:(NSString *)appId appSecret:(NSString *)appSecret iv:(NSString *)iv;

/**
 通过指定应用id、密钥、初始向量、加密方式对返回数据解密。

 @param responeObj 请求回来参数
 @param isEncrypt 是否加密，0表示不加密
 @param appId 应用id
 @param appSecret 应用私钥
 @param iv 初始化向量
 @param encodeType 加密方式：bese64、hex（默认）
 @return 解密后的数据
 */
+(NSMutableDictionary *)decryptNetData:(id)responeObj isEncrypt:(NSString *)isEncrypt isSign:(BOOL)isSign appId:(NSString *)appId appSecret:(NSString *)appSecret iv:(NSString *)iv encodeType:(NSString *)encodeType;

/**
 通过指定应用id、密钥对返回数据解密。支持签名配置。
 
 @param responeObj 请求回来参数
 @param isEncrypt 是否加密，0表示不加密
 @param appId 应用id
 @param appSecret 应用私钥
 @param isSign 是否签名
 @param signBlackList 签名黑名单
 @return 解密后的数据
 */
+(NSMutableDictionary *)decryptNetData:(id)responeObj isEncrypt:(NSString *)isEncrypt appId:(NSString *)appId appSecret:(NSString *)appSecret isSign:(BOOL)isSign signBlackList:(NSArray <NSString *> *)signBlackList;

/**
 通过指定应用id、密钥、初始向量、加密方式对返回数据解密。支持签名配置。

 @param responeObj 请求回来参数
 @param isEncrypt 是否加密，0表示不加密
 @param appId 应用id
 @param appSecret 应用私钥
 @param isSign 是否签名
 @param signBlackList 签名黑名单
 @param iv 初始化向量
 @param encodeType 加密方式：bese64、hex（默认）
 @return 解密后的数据
 */
+(NSMutableDictionary *)decryptNetData:(id)responeObj isEncrypt:(NSString *)isEncrypt appId:(NSString *)appId appSecret:(NSString *)appSecret isSign:(BOOL)isSign signBlackList:(NSArray <NSString *> *)signBlackList iv:(NSString *)iv encodeType:(NSString *)encodeType;

/**
 解密
 
 注：encryptData为待解密的数据。
 
 @param encryptData 需要解密的数据
 @param isEncrypt 是否加密，0表示不加密
 @param appId 应用id
 @param appSecret 应用私钥
 @return 解密后的数据
 */
+(NSDictionary *)decryptData:(NSString *)encryptData isEncrypt:(NSString *)isEncrypt appId:(NSString *)appId appSecret:(NSString *)appSecret;


/**
 解密
 
 注：encryptData为待解密的数据。

 @param encryptData 需要解密的数据
 @param isEncrypt 是否加密，0表示不加密
 @param appId 应用id
 @param appSecret 应用私钥
 @param iv 初始化向量
 @param encodeType 加密方式：bese64、hex（默认）
 @return 解密后的数据
 */
+(NSDictionary *)decryptData:(NSString *)encryptData isEncrypt:(NSString *)isEncrypt appId:(NSString *)appId appSecret:(NSString *)appSecret iv:(NSString *)iv encodeType:(NSString *)encodeType;

#pragma mark ----------------------------:: 加密 ::----------------------------
/**
 使用默认配置的密钥对请求参数内的param加密。

 @param param 请求参数
 @param isEncrypt 是否加密 0表示不加密
 @return value
 */
+(NSMutableDictionary *)encryptNetData:(NSMutableDictionary *)param isEncrypt:(NSString *)isEncrypt;


/**
 通过应用id和密钥加密数据对请求参数内的param加密。

 @param param 请求参数
 @param isEncrypt 是否加密 0表示不加密
 @param appId 应用id
 @param appSecret 应用私钥
 @return 加密后的数据
 */
+(NSMutableDictionary *)encryptNetData:(NSMutableDictionary *)param isEncrypt:(NSString *)isEncrypt appId:(NSString *)appId appSecret:(NSString *)appSecret;

/**
 通过应用id和密钥加密数据对请求参数内的param加密，支持签名设置。

 @param param 请求参数
 @param isEncrypt 是否加密 0表示不加密
 @param appId 应用id
 @param appSecret 应用私钥
 @param isSign 是否进行签名
 @param signBlackList 签名黑名单
 
 @return 加密后的数据
 */
+(NSMutableDictionary *)encryptNetData:(NSMutableDictionary *)param isEncrypt:(NSString *)isEncrypt appId:(NSString *)appId appSecret:(NSString *)appSecret isSign:(BOOL)isSign signBlackList:(NSArray <NSString *> *)signBlackList;

/**
 通过应用id、密钥、初始化向量对请求参数内的param加密。

 @param param 请求参数
 @param isEncrypt 是否加密 0表示不加密
 @param appId 应用id
 @param appSecret 应用私钥
 @param iv 初始化向量
 @return 加密后的数据
 */
+(NSMutableDictionary *)encryptNetData:(NSMutableDictionary *)param isEncrypt:(NSString *)isEncrypt appId:(NSString *)appId appSecret:(NSString *)appSecret iv:(NSString *)iv;

/**
 通过应用id、密钥、初始化向量，加密方式对请求参数内的param加密。

 @param param 请求参数
 @param isEncrypt 是否加密 0表示不加密
 @param appId 应用id
 @param appSecret 应用私钥
 @param iv 初始化向量
 @param encodeType 加密方式：bese64、hex（默认）
 @return 加密后的数据
 */
+(NSMutableDictionary *)encryptNetData:(NSMutableDictionary *)param isEncrypt:(NSString *)isEncrypt appId:(NSString *)appId appSecret:(NSString *)appSecret iv:(NSString *)iv encodeType:(NSString *)encodeType;


/**
 通过应用id、密钥、初始化向量,加密方式对请求参数内的param加密,支持签名配置。
 
 @param param 请求参数
 @param isEncrypt 是否加密 0表示不加密
 @param appId 应用id
 @param appSecret 应用私钥
 @param isSign 是否进行签名
 @param signBlackList 签名黑名单
 @param iv 初始化向量
 @param encodeType 加密方式：bese64、hex（默认）
 @return 加密后的数据
 */
+(NSMutableDictionary *)encryptNetData:(NSMutableDictionary *)param isEncrypt:(NSString *)isEncrypt appId:(NSString *)appId appSecret:(NSString *)appSecret isSign:(BOOL)isSign signBlackList:(NSArray <NSString *> *)signBlackList iv:(NSString *)iv encodeType:(NSString *)encodeType;

/**
 通过应用id、密钥、初始化向量对请求参数加密。
 
 注：param为需要加密的数据，非整个请求窜，返回数据为param加密后的字符串。该方法适用于后端接口未使用通用数据key。
 
 @param param 加密的参数
 @param isEncrypt 是否加密 0表示不加密
 @param appId 应用id
 @param appSecret 应用私钥
 @return 加密后的数据
 */
+(NSString *)encryptData:(NSDictionary *)param isEncrypt:(NSString *)isEncrypt appId:(NSString *)appId appSecret:(NSString *)appSecret;


/**
 通过应用id、密钥、初始化向量对请求参数加密。

 注：param为需要加密的数据，非整个请求窜，返回数据为param加密后的字符串。该方法适用于后端接口未使用通用数据key。
 
 @param param 加密的参数
 @param isEncrypt 是否加密 0表示不加密
 @param appId 应用id
 @param appSecret 应用私钥
 @param iv 初始化向量
 @param encodeType 加密方式：bese64、hex（默认）
 @return 加密后的数据
 */
+(NSString *)encryptData:(NSDictionary *)param isEncrypt:(NSString *)isEncrypt appId:(NSString *)appId appSecret:(NSString *)appSecret iv:(NSString *)iv encodeType:(NSString *)encodeType;
@end
