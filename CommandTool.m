//
//  CommandTool.m
//  example
//
//  Created by wsk on 2017/12/20.
//  Copyright © 2017年 pptv. All rights reserved.
//

#import "CommandTool.h"

@implementation CommandTool

static inline UIColor *GetRandomUIColor() {
    CGFloat r = arc4random() % 255;
    CGFloat g = arc4random() % 255;
    CGFloat b = arc4random() % 255;
    UIColor * color = [UIColor colorWithRed:r/255
                                      green:g/255
                                       blue:b/255
                                      alpha:1.0f];
    return color;
}


/**
 获取随机的颜色
 @return 随机颜色UIColor
 */
+(UIColor*)GetRandomUIColor {
    return GetRandomUIColor();
}
@end
