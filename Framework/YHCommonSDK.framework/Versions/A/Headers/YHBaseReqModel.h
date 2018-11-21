//
//  YHBaseReq
//  YHRongYiTong
//
//  Created by jagtu on 2017/11/30.
//  Copyright © 2017年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>

#define FirstPageNo @"1"

@class YHPageParamReqModel;
@interface YHBaseReqModel : NSObject

@property(nonatomic,copy)NSString *appId;

@property(nonatomic,copy)NSString *appSecret;

@property(nonatomic,copy)NSString *serviceId;

@property(nonatomic,copy)NSString *deviceId;     //设备

@property(nonatomic,copy)NSString *isEncrypt;   //是否加密 (开发阶段为0)

@property(nonatomic,copy)NSString *sign;

@property(nonatomic,assign)BOOL isSign;        //是否加签验签 NO

@property(nonatomic,copy)NSString *signType;    //加签方式，默认MD5

@property(nonatomic,copy)NSString *encryptType; //加密方式，默认AES

@property(nonatomic,copy)NSString *timestamp;//e.g 20171127051619060

@property(nonatomic,copy)NSString *version;

@property(nonatomic,copy)NSString *appVersion;//app's buildVersion

@property(nonatomic,copy)NSString *sessionId;

@property(nonatomic,strong)NSMutableDictionary *param;//业务参数

@property(nonatomic,strong)YHPageParamReqModel *pageParam;//分页参数

@property(nonatomic,strong)NSMutableDictionary *paramBody;//最外层参数

//默认为NO,不使用自定义分页参数，当为YES，需要自定义分页参数
@property(nonatomic,assign)BOOL isUseCustomPageParam;

@property(nonatomic,strong)NSArray<NSString *> *blackList;
@property(nonatomic,strong)NSDictionary<NSString *, NSString *> *customPropertyMapper;
@property(nonatomic,strong)NSDictionary *addDefaultPropertyDic;

/**
 *  返回最终请求参数
 */
-(NSMutableDictionary *)reqParam;
@end

@interface YHPageParamReqModel : NSObject

@property(nonatomic,copy)NSString *pageNo;
@property(nonatomic,copy)NSString *pageSize;
@property(nonatomic,copy)NSString *pageDate_c;
@property(nonatomic,copy)NSString *pageTime_c;
@property(nonatomic,copy)NSString *pageDate_f;
@property(nonatomic,copy)NSString *pageTime_f;

-(BOOL)isFirstPage;

-(void)setNextPage;

@end

