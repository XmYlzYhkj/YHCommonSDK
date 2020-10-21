//
//  YHCommonHelper.h
//  YHRongYiTong
//
//  Created by zxl on 2017/11/20.
//  Copyright © 2017年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YHCommonHelper : NSObject

+ (BOOL)isAppFirstLaunch;

+ (BOOL)isNewVersion;

+ (CGSize)getSizeWithStr:(NSString *)textStr font:(UIFont *)font inWidth:(CGFloat)inwidth;

+(CGSize)getSizeWithAttributeStr:(NSAttributedString *)attributestr inWidth:(CGFloat) width;

+ (void)setUserDefaults:(id)object forKey:(NSString *)key;

+(id)getUserDefaultsObjectByKey:(NSString *)key;

+(void)removeUserDefaultsObjectForKey:(NSString *)key;

+(BOOL)isNil:(id)obj;

+(BOOL)isNilOrEmpty:(id)obj;

+(BOOL)isPureFloat:(NSString*)string;
+(BOOL)isPureInt:(NSString*)string;


/**
 把文件转化成字符串
 
 @param fileName 文件名
 @param type 后缀
 @return str
 */
+(NSString *)getFileInBoundleWithName:(NSString *)fileName withType:(NSString *)type;

/**
 清除系统webview缓存
 */
+(void)clearWebviewCache;


/**
 复制
 
 @param copyData 复制文字
 @param info 复制成功后提示文字
 */
+(void)copyCode:(NSString *)copyData info:(NSString *)info;


/**
 获取root vc
 
 @return vc
 */
+(UIViewController *)getRootVC;


/**
 获取当前导航控制器
 
 @return nil
 */
+(UINavigationController *)getCurrentNav;

+(UIViewController *)getCurrentVcByResponder;

+(UIViewController *)getCurrentVc;



/*
 进入下一个控制器
 */
+(void)gotoNextVC:(UIViewController *)controller;


/**
 多个对象定时动画
 
 @param objects 对象数组
 @param endFramesYArray 对角最终Y坐标
 */
+(void)showAnimationWithObectsArray:(NSMutableArray *)objects withFramesYArray:(NSMutableArray *)endFramesYArray;


/**
 多个对象定时动画
 
 @param objects 对象数组
 @param endFramesXArray 对角最终X坐标
 */
+(void)showAnimationWithObectsArray:(NSMutableArray *)objects withFramesXArray:(NSMutableArray *)endFramesXArray;

/**
 获取APP唯一标识
 
 @return 设备id
 */
+(NSString *)getDeviceId;


/**
 替换字符串
 
 @param currentStr str
 @param oldString str
 @param newString new
 @return newstr
 */
+ (NSString *)replaceTheStr:(NSString *)currentStr oldString:(NSString *)oldString newString:(NSString *)newString;

@end
