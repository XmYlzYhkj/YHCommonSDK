//
//  YHBasePresenter.h
//  YHRongYiTong
//
//  Created by zxl on 2017/11/21.
//  Copyright © 2017年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YHBasePresenter : NSObject<YHPresenterProtocol>

@property(nonatomic,weak)UIViewController <YHDataProtocol> *curentVC;

@property(nonatomic,weak) UIView <YHDataProtocol> *view;

-(id)initWithView:(UIView<YHDataProtocol> *)view;

-(id)initWithViewController:(UIViewController<YHDataProtocol> *)vc;

-(void)present;

-(void)presentWithModel:(id)model;

-(void)presentWithModel:(id)model viewController:(UIViewController *)viewController;

@end
