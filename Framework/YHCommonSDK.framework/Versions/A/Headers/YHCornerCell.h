//
//  YHCornerCell.h
//  YHRongYiTong
//
//  Created by zxl on 2017/11/24.
//  Copyright © 2017年 YH. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YHCornerCell : UITableViewCell

@property(nonatomic,strong)UIView *bgView;

@property(nonatomic,strong)UIImageView *leftImageView;

@property(nonatomic,strong)UIImageView *rightImageView;

@property(nonatomic,strong)UILabel *leftTitleLabel;

@property(nonatomic,strong)UILabel *rightTitleLabel;

@property(nonatomic,strong)UIView *bottomLine;

@property(nonatomic,strong)UIView *topCornerView;
@property(nonatomic,strong)UIView *bottomCornerView;

-(void)initData;

-(void)createView;

-(void)addContraint NS_DEPRECATED_IOS(2_0,3_0, "use -addConstraints");
-(void)addConstraints;

-(void)setBgViewCorner;

-(void)setBgViewCornerWithRowIndex:(NSInteger )rowIndex withSectionNum:(NSInteger)num;

@end
