//
//  YHBaseTableViewCell.h
//  YHRongYiTong
//
//  Created by zxl on 2017/12/3.
//  Copyright © 2017年 YH. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YHBaseTableViewCell : UITableViewCell

-(void)initData;

-(void)createView;

-(void)addContraint NS_DEPRECATED_IOS(2_0,3_0, "use -addConstraints");

-(void)addConstraints;

+(CGFloat)getCellHeight;

@end
