//
//  YHCommonDP.h
//  YHCommonSDK
//
//  Created by zxl on 2018/7/20.
//  Copyright © 2018年 YH. All rights reserved.
//

#import <YHNetSDK/YHNetSDK.h>

@class YHBaseReqModel;

@interface YHCommonDP : YHBaseLoadMoreDP

/**
 参数容器
 */
@property(nonatomic,strong)YHBaseReqModel *reqModel;

/**
 初始化参数
 */
-(void)initData;

/**
 刷新动态参数
 */
-(void)refreshParam;

@end
