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

-(NSString *)yh_signSortString;

//-(NSString *)yh_signWithMd5;

-(NSString *)yh_signWithMd5WithSecret:(NSString *)secret;
    
-(NSDictionary *)pullAway:(NSArray *)keys;

@end

@interface NSArray(YhSign)

-(NSString *)sortJsonString;

@end

@interface NSString(YhSign)

-(NSString *)stringByReplacingEscapeCharacter;

@end
