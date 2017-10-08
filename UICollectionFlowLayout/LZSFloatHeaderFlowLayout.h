//
//  LZSFloatHeaderFlowLayout.h
//  PLUSportModual
//
//  Created by wsk on 2017/10/8.
//  Copyright © 2017年 longzhu.com. All rights reserved.
//  UICollectionView实现头部漂浮的效果
/*
 在iOS9.0后UICollectionView的头部视图也能像tableView的header一样出现悬浮挂住的效果。
 
 UICollectionViewFlowLayout *flowLayout = [[UICollectionViewFlowLayout alloc] init];
 
 //header
 flowLayout.sectionHeadersPinToVisibleBounds = YES;
 
 //footer
 flowLayout.sectionFootersPinToVisibleBounds = YES;
 */

#import <UIKit/UIKit.h>

@protocol LZSFloatHeaderFlowLayoutDelegate <NSObject>

-(void)sectionDidFloat:(NSInteger)section;

@end

@interface LZSFloatHeaderFlowLayout : UICollectionViewFlowLayout
@property (nonatomic, weak) id<LZSFloatHeaderFlowLayoutDelegate> mDelegate;
@end
