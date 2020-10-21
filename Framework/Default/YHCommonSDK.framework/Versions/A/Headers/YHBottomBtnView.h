//
//  YHBottomBtnView.h
//  YHRongYiTong
//
//  Created by zxl on 2017/12/28.
//  Copyright © 2017年 YH. All rights reserved.
//

@interface YHBottomBtnView : YHBaseView

@property(nonatomic,copy)NSString *title;

@property(nonatomic,strong)UIColor *textColor;

@property(nonatomic,strong)UIColor *btnBgColor;

@property(nonatomic,strong)UIColor *textDisableColor;

@property(nonatomic,strong)UIColor *btnDisableBgColor;

@property(nonatomic,copy)dispatch_block_t nextBlock;

@property(nonatomic,strong)UIImage *image;

@property(nonatomic,assign)BOOL enable;


@end
