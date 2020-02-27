//
//  YHDecryptData.h
//  YHRongYiTong
//  解析加密数据
//  Created by zxl on 2018/2/5.
//  Copyright © 2018年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YHBaseReqModel.h"

@interface YHDecryptData : NSObject

#pragma mark ----------------------------:: 解密 ::----------------------------
/**
 AES解密，MD5验签.

 @Discussion 该方法为了向前兼容，使用AES解密，MD5验签，使用前请确认加密方式是否正确。
 
 @param responseObj 原始数据
 @param isEncrypt 是否加密，默认验签
 @return 解密后的数据
 */
+(NSMutableDictionary *)decryptNetData:(id)responseObj isEncrypt:(NSString *)isEncrypt;

/**
 自定义解密。
 
 @Discussion  解密相关数据：isEncrypt、appId、appSecret、encryptType、signType从reqModel提取。使用该方便前需配置好以上数据，默认开启验签。
 
 @param responseObj 请求回来参数
 @param reqModel 请求数据
 @return 解密后的数据
 */
+(NSMutableDictionary *)decryptNetData:(id)responseObj reqModel:(YHBaseReqModel *)reqModel;


/**
 自定义解密。
 
 @Discussion  解密相关数据：isEncrypt、appId、appSecret、encryptType、signType从reqModel提取。使用该方便前需配置好以上数据。
 
 @param responseObj 请求回来参数
 @param reqModel 请求数据
 @param isSign 是否签名。使用该参数，将不会遵循reqModel的isSign配置。
 @param signBlackList 签名黑名单。使用该参数，将不会遵循reqModel的signBlackList配置。
 @return 解密后的数据
 */
+(NSMutableDictionary *)decryptNetData:(id)responseObj reqModel:(YHBaseReqModel *)reqModel isSign:(BOOL)isSign signBlackList:(NSArray <NSString *> *)signBlackList;

/**
 自定义解密。

 @Discussion  解密相关数据：isEncrypt、appId、appSecret、encryptType、signType从reqModel提取。使用该方便前需配置好以上数据。
 
 @param responseObj 请求回来参数
 @param reqModel 请求数据
 @param isSign 是否签名
 @param signBlackList 签名黑名单
 @param iv 初始化向量
 @param encodeType 编码方式：bese64、hex（默认）
 @return 解密后的数据

  */
+(NSMutableDictionary *)decryptNetData:(id)responseObj reqModel:(YHBaseReqModel *)reqModel isSign:(BOOL)isSign signBlackList:(NSArray <NSString *> *)signBlackList iv:(NSString *)iv encodeType:(NSString *)encodeType;

#pragma mark ----------------------------:: 加密 ::----------------------------
/**
 使用默认配置的密钥对请求参数内的param使用AES加密，MD5加签。

 @Discussion 该方法为了向前兼容，使用AES加密，MD5验签，使用前请确认加密方式是否正确。
 
 @param param 请求参数
 @param isEncrypt 是否加密 0表示不加密
 @return value
 */
+(NSMutableDictionary *)encryptNetData:(NSMutableDictionary *)param isEncrypt:(NSString *)isEncrypt;

/**
 自定义加密。
 
 @Discussion  加密相关数据：isEncrypt、appId、appSecret、encryptType、signType、isSign，从reqModel提取。使用该方便前需配置好以上数据。
 
 @param reqModel 请求数据
 
 @return 加密后的数据
 */
+(NSMutableDictionary *)encryptNetData:(YHBaseReqModel *) reqModel;

/**
 自定义加密。
 
 @Discussion  加密相关数据：isEncrypt、appId、appSecret、encryptType、signType、isSign，从reqModel提取。使用该方便前需配置好以上数据。
 
 @param reqModel 请求数据
 @param iv 初始化向量
 @param encodeType 编码方式：bese64、hex（默认）
 @return 加密后的数据
 */
+(NSMutableDictionary *)encryptNetData:(YHBaseReqModel *)reqModel iv:(NSString *)iv encodeType:(NSString *)encodeType;

@end
