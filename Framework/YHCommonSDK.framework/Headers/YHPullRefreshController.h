//
//  YHPullRefreshController.h
//  YHRongYiTong
//
//  Created by zxl on 2017/11/20.
//  Copyright © 2017年 YH. All rights reserved.
//

#import "YHBaseViewController.h"
#import <MJRefresh/MJRefresh.h>
#import "YHRefreshHeader.h"
@interface YHPullRefreshController : YHBaseViewController


/**
 返回顶部下拉刷新

 @return header
 */
-(MJRefreshHeader *)addRefreshHeader;


/**
 返回底部footer

 @return footer
 */
-(MJRefreshFooter *)addLoadMoreFooter;

/**
 下拉刷新方法
 */
-(void)refresh;


/**
 结束下拉刷新
 */
-(void)endRefreshHeader;


/**
 加载更多方法
 */
-(void)loadMore;


/**
 停止加载更多
 */
-(void)endRefreshFooter;


/**
 增加顶部下拉刷新控件

 @param scrollView view
 */
-(void)addRefreshHeaderForView:(UIScrollView *)scrollView;


/**
 增加底部加载更多控件

 @param scrollView view
 */
-(void)addLoadMoreFooterForView:(UIScrollView *)scrollView;


/**
 重围footer状态

 @param hasNextPage hasnext
 @param scrollView scroll
 */
-(void)resetFooterWhenHasNextPage:(BOOL)hasNextPage forScrollView:(UIScrollView *)scrollView;


/**
 scroll开始下拉刷新

 @param scrollView view
 */
-(void)beginRefresh:(UIScrollView *)scrollView;


/**
 scroll结束刷新

 @param scrollView view
 */
-(void)endRefreshHeader:(UIScrollView *)scrollView;


/**
 scroll结束加载更多

 @param scrollView view
 */
-(void)endRefreshFooter:(UIScrollView *)scrollView;


/**
 隐藏footer

 @param scrollView scrollview
 @param hidden hidden
 */
-(void)hiddenFooterForScrollView:(UIScrollView *)scrollView hidden:(BOOL)hidden;

@end
