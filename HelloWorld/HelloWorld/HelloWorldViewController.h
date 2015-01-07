//
//  HelloWorldViewController.h
//  HelloWorld
//
//  Created by Helen Wang on 1/7/15.
//  Copyright (c) 2015 Helen Wang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloWorldViewController : UIViewController
<UITextFieldDelegate>
@property (weak, nonatomic) IBOutlet UILabel *label;
@property (weak, nonatomic) IBOutlet UITextField *textField;
- (IBAction)changeGreeting:(id)sender;
@property (copy, nonatomic) NSString *userName;
@end
