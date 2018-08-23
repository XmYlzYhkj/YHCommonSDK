    //
    //  YHLoadingView.h
    //  YHHospitalAssitan
    //
    //  Created by zxl on 2017/9/19.
    //  Copyright © 2017年 YH. All rights reserved.
    //

@interface YHLoadingView : YHBaseView<CAAnimationDelegate>

@property (nonatomic, strong)UIView *leftView;

@property (nonatomic, strong)UIView * middleView;

@property (nonatomic, strong)UIView * rightView;

@property (nonatomic, strong)CAAnimationGroup *group1;

@property (nonatomic, strong)CAAnimationGroup *group2;

@property (nonatomic, strong)CAAnimationGroup *group3;

@property (nonatomic, assign)BOOL hiddenWhenStop;

-(void)startAnimation;

-(void)stopAnimating;

-(void)removeAnimation;

-(instancetype)initWithHiddleWhenStop:(BOOL)hiddleWhenStop;

@end

