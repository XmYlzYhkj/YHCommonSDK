//
//  YHTextFieldView.h
//  YHRongYiTong
//
//  Created by zxl on 2017/12/8.
//  Copyright © 2017年 YH. All rights reserved.
//

@interface YHTextFieldView : YHBaseView

@property(nonatomic,strong)UIView *bgView;

@property(nonatomic,strong)UIImageView *leftImageView;

@property(nonatomic,strong)UIView *bottomLine;

@property(nonatomic,strong)UIView *topCornerView;

@property(nonatomic,strong)UIView *bottomCornerView;

@property(nonatomic,strong)UITextField *textField;

@property(nonatomic,assign)CGFloat textFieldRightPadding;

///默认与YHCellRightPadding相等
@property(nonatomic,assign)CGFloat bottomLineRightPadding;

@property(nonatomic,assign)BOOL hiddenLeftImageView;
@property(nonatomic,assign)BOOL hiddenBottomLine;
@property(nonatomic,assign)BOOL hidenTopCorner;
@property(nonatomic,assign)BOOL hiddenBottomCorner;

-(NSString *)getText;

-(void)setFieldRightPadding:(CGFloat)padding;

-(void)setLeftImage:(UIImage *)image withSize:(CGSize)imageSize;

-(void)becomeFirstResponder;

-(void)setBgViewHiddenTopCorner:(BOOL)hidenTopCorner hiddenBottomCorner:(BOOL)hiddenBottomCorner;

@end
