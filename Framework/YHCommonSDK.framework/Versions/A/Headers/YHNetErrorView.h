//
//  YHNetErrorView.h
//  YHRongYiTong
//
//  Created by zxl on 2017/11/13.
//  Copyright © 2017年 YH. All rights reserved.
//

#import <YHBaseSDK/YHBaseSDK.h>

@interface YHNetErrorView : YHBaseView

@property(nonatomic,strong)UIImageView *errorImageView;
    
@property(nonatomic,strong)UILabel *errorLabel;
    
@property(nonatomic,strong)UIButton *reloadBtn;//重新加载按钮
    
@property(nonatomic,strong)dispatch_block_t reloadBlock;

@end
