//
//  YHPageControl.h
//  YHRongYiTong
//
//  Created by zxl on 2017/9/7.
//  Copyright © 2017年 YH. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface YHPageControl : UIPageControl

@property(nonatomic,assign)CGFloat margin;//圆点间距；

@property(nonatomic,assign)CGFloat selectedWidth;

@property(nonatomic,assign)CGFloat unSelectedWidth;

@property(nonatomic,assign)CGFloat pageHeight;//圆点高度

@property(nonatomic,assign)CGFloat cornerRadius;//圆点半径

@property(nonatomic,assign)NSTextAlignment alignment;//对齐位置

-(CGFloat)getWidth;
@end
