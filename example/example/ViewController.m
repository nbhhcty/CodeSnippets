//
//  ViewController.m
//  example
//
//  Created by wsk on 2017/12/20.
//  Copyright © 2017年 pptv. All rights reserved.
//

#import "ViewController.h"
#import "CommandTool.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    self.view.backgroundColor = [CommandTool GetRandomUIColor];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
