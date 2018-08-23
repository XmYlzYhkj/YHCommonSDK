//
//  YHDecryptData.h
//  YHRongYiTong
//  解析加密数据
//  Created by zxl on 2018/2/5.
//  Copyright © 2018年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YHDecryptData : NSObject


/**
 解密加密数据

 @param responeObj 原始数据
 @param isEncrypt 是否加密，0表示加密
 @return 解密后的数据
 */
+(NSMutableDictionary *)decryptNetData:(id)responeObj  isEncrypt:(NSString *)isEncrypt;


/**
 加密

 @param param param
 @param isEncrypt 是否加密
 @return value
 */
+(NSMutableDictionary *)encryptNetData:(NSMutableDictionary *)param isEncrypt:(NSString *)isEncrypt;

@end
