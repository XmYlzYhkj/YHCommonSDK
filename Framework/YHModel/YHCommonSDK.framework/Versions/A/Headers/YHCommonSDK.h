//
//  YHCommonSDK.h
//  YHCommonSDK
//
//  Created by zxl on 2018/3/22.
//  Modify by Jagtu on 2018/11/29.
//  V1.1.7.1  YHCommonDP升级优化：新增请求参数签名忽略名单、加密参数映射、解密参数映射
//  V1.1.7.7  删除YHRefreshHeader
//  V1.1.8  去掉YYModel
//  Copyright © 2018年 YH. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for YHCommonSDK.
FOUNDATION_EXPORT double YHCommonSDKVersionNumber;

//! Project version string for YHCommonSDK.
FOUNDATION_EXPORT const unsigned char YHCommonSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <YHCommonSDK/YHCommonSDK.h>

#if __has_include(<YHModel/YHModel.h>)
#import <YHModel/YHModel.h>
#endif

#if __has_include(<YYModel/YYModel.h>)
#import <YYModel/YYModel.h>
#endif

#if __has_include(<MJRefresh/MJRefresh.h>)
#import <MJRefresh/MJRefresh.h>
#endif

//model
#import <YHCommonSDK/YHBaseModel.h>
#import <YHCommonSDK/YHBaseReqModel.h>
#import <YHCommonSDK/YHBaseRespModel.h>

//vc
#import <YHCommonSDK/YHBaseViewController.h>
#import <YHCommonSDK/YHScrollVC.h>
#import <YHCommonSDK/YHBaseWhiteNavVC.h>
#import <YHCommonSDK/YHPullRefreshController.h>

//category
#import <YHCommonSDK/NSDictionary+YhSign.h>

//dp
#import <YHCommonSDK/YHCommonDP.h>

//view
#import <YHCommonSDK/YHNetErrorView.h>
#import <YHCommonSDK/YHBaseCollectionCell.h>
#import <YHCommonSDK/YHPageControl.h>
#import <YHCommonSDK/YHRefreshHeader.h>
#import <YHCommonSDK/YHScrollView.h>
#import <YHCommonSDK/YHBaseTableViewCell.h>
#import <YHCommonSDK/YHCornerCell.h>
#import <YHCommonSDK/YHBottomBtnView.h>
#import <YHCommonSDK/YHTextFieldView.h>


//pt
#import <YHCommonSDK/YHBasePresenter.h>
#import <YHCommonSDK/YHCommonPT.h>
#import <YHCommonSDK/YHBaseTabelViewPT.h>

//config
#import <YHCommonSDK/YHColor.h>
#import <YHCommonSDK/YHCommonConstant.h>

//other
#import <YHCommonSDK/YHDecryptData.h>
#import <YHCommonSDK/YHCommonHelper.h>
