//
//  ViewController.m
//  MyFirstApp
//
//  Created by helenwang on 1/12/15.
//  Copyright (c) 2015 helenwang. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)tapToChangeGreeting:(UIButton*)sender {
    self.greetingLabel.text = @"Goodbye";
}
@end
