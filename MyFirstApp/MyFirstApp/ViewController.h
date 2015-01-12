//
//  ViewController.h
//  MyFirstApp
//
//  Created by helenwang on 1/12/15.
//  Copyright (c) 2015 helenwang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

// Methods
- (IBAction)tapToChangeGreeting:(id)sender;

// Properties
@property (weak, nonatomic) IBOutlet UILabel *greetingLabel;


@end

