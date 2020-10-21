//
//  YHBaseTabelViewPT.h
//  YHMinYiTong
//
//  Created by Jagtu on 2018/6/23.
//  Copyright © 2018年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^YHScrollViewPTBlock)(UIScrollView *scrollView);

@interface YHBaseTabelViewPT : NSObject<UITableViewDelegate,UITableViewDataSource>

@property(nonatomic,weak)UITableView *tableView;

@property(nonatomic,copy)YHScrollViewPTBlock scrollBlock;

-(id)initWithView:(UITableView *)view;

@end
