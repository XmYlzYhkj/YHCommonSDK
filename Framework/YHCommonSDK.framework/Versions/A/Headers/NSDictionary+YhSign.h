//
//  NSDictionary+JsonString.h
//  HealthyCommonSDKTest
//
//  Created by ljt on 15/5/14.
//  Copyright (c) 2015年 dev. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary(YhSign)


+(instancetype)dictionaryWithJSON:(NSString *)jsonString;

-(NSString *)jsonString;

-(NSString *)sortJsonString;

/**
 字典按参数名升序，对基础数据类型格式化处理，滤空操作，以"参数名=值&参数名=值&...&参数名=值"格式生成
 
 注：默认会过滤：@"sign", @"encryptData", @"externalMap", @"pageParam"
 
 @return 处理后的字符
 */
-(NSString *)yh_signSortString;

/**
 字典按参数名升序，对基础数据类型格式化处理，滤空操作，以"参数名=值&参数名=值&...&参数名=值"格式生成，可指定黑名单剔除不需要的数据

 @param blackList 需要剔除key的集合。
 @return 处理后的字符
 */
-(NSString *)yh_signSortStringWithBlackList:(NSArray<NSString *> *)blackList;

/**
 对字典数据进行签名

 注：默认会过滤：@"sign", @"encryptData", @"externalMap", @"pageParam"
 
 @param secret 签名私钥
 @return 签名后数据
 */
-(NSString *)yh_signWithMd5WithSecret:(NSString *)secret;

/**
对字典数据进行签名

 @param secret 签名私钥
 @param blackList 需要剔除key的集合。
 @return 签名后数据
 */
-(NSString *)yh_signWithMd5WithSecret:(NSString *)secret blackList:(NSArray<NSString *> *)blackList;
    
/**
 对字典验签
 
 @param sign 签名
 @param secret 签名私钥
 @return 是否签名成功
 */
-(BOOL)yh_verifySign:(NSString *)sign secret:(NSString *)secret;

/**
 对字典验签

 @param sign 签名
 @param secret 签名私钥
 @param blackList 不参与验签的key
 @return 是否签名成功
 */
-(BOOL)yh_verifySign:(NSString *)sign secret:(NSString *)secret blackList:(NSArray<NSString *> *)blackList;

-(NSDictionary *)pullAway:(NSArray *)keys;

+(NSArray<NSString *> *)signIgnorePropertyArr;

@end

@interface NSArray(YhSign)

-(NSString *)sortJsonString;

@end

@interface NSString(YhSign)

-(NSString *)stringByReplacingEscapeCharacter;

@end
