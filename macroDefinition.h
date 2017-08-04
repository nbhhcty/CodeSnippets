//
//  macroDefinition.h
//  customTableView
//
//  Created by pptv on 2017/8/4.
//  Copyright © 2017年 pptv. All rights reserved.
//

#ifndef macroDefinition_h
#define macroDefinition_h

// 解决循环引用
#define WeakObj(o)      autoreleasepool{} __weak typeof(o) o##Weak = o;
#define StrongObj(o)    autoreleasepool{} __strong typeof(o) o = o##Weak;

#endif /* macroDefinition_h */
