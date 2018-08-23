//
//  YHDefaultView.h
//  YHRongYiTong
//
//  Created by zxl on 2017/12/26.
//  Copyright © 2017年 YH. All rights reserved.
//

typedef NS_ENUM(NSInteger, YHDefaultType) {
    YHDefaultTypeDefault = 0,//暂无数据
    YHDefaultTypeNoBill = 1,//账单无数据
    YHDefaultTypeNoService = 2,//搜索不到
    YHDefaultTypeTimeout = 3,//服务器繁忙
    YHDefaultTypeAbnormal = 4,//反常的、未经授权的、签名错误等系统性问题
};

@interface YHDefaultView : YHBaseView

@property(nonatomic,strong)UIImageView *errorImageView;

@property(nonatomic,strong)UILabel *errorLabel;

@property(nonatomic,strong)UIButton *reloadBtn;//重新加载按钮

@property(nonatomic,strong)dispatch_block_t reloadBlock;

@property(nonatomic,assign)YHDefaultType type;

@end
