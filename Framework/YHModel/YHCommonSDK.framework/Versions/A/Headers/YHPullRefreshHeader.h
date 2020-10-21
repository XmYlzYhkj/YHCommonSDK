//
//  YHPullRefreshHeader.h
//  YHCommonSDK
//
//  Created by Jagtu on 2020/4/22.
//

#import <YHAlertSDK/YHLoadingView.h>
#if __has_include(<MJRefresh/MJRefreshStateHeader.h>)
#import <MJRefresh/MJRefreshStateHeader.h>
#else
#import "MJRefreshStateHeader.h"
#endif

NS_ASSUME_NONNULL_BEGIN

@interface YHPullRefreshHeader : MJRefreshStateHeader
{
    CAAnimationGroup * groupTwoAnimation ;
    CAAnimationGroup * groupOneAnimation ;
}
@property(nonatomic,strong)UIView *bgView;
@property(nonatomic,strong)UIImageView *pullImageView;
@property(nonatomic,strong)YHLoadingView *yhloadingView;
@property(nonatomic,assign)BOOL canFeedBack;

@end

NS_ASSUME_NONNULL_END
