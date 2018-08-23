    //
    //  YHBaseViewController.h
    //  YHRongYiTong
    //
    //  Created by zxl on 2017/11/13.
    //  Copyright © 2017年 YH. All rights reserved.
    //

#import <UIKit/UIKit.h>

#import <YHBaseSDK/YHBaseSDK.h>

#import "YHNetErrorView.h"
#import "YHDefaultView.h"

@interface YHBaseViewController : YHBaseVC

@property(nonatomic,strong)YHNetErrorView *errorView;

@property(nonatomic,strong)YHDefaultView *defaultView;//默认空页面
/**
 增加网络异常页面
 */
-(void)addNetErrorView;


/**
 移除网络异常页面
 */
-(void)removeNetErrorView;

/**
 当网络异常时候重新加载事件
 */
-(void)reloadActionWhenError;

/**
 是否添加 defaultview
 
 @param isEmpty bool
 @param superView superview
 */
-(void)showDefaultView:(BOOL)isEmpty onSuperView:(UIView *)superView withType:(YHDefaultType)type;

/**
 在指定界面添加defaultview
 
 @param superView superview
 
 @param type 类型
 */
-(void)addDefaultViewOnSuperView:(UIView *)superView withType:(YHDefaultType)type;

/**
 移除defaultview
 */
-(void)removeDefaultView;

    //子类最好不要继承通知
-(void)registerNotification;

-(void)removeAllObserver;


/**
 增加背影渐变色
 */
-(void)addGradientLayer;


/**
 增加蓝色背影梦幻气泡
 */
-(void)addBubbleFantasyLayer;

@end

