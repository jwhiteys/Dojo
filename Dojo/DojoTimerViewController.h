//
//  DojoTimerViewController.h
//  Dojo
//
//  Created by Justin Skweres on 3/22/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DojoTimerViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *motivationLabel;
@property (strong, nonatomic) IBOutlet UILabel *timerLabel;
@property (strong, nonatomic) IBOutlet UIButton *dingButton;
@property (strong, nonatomic) IBOutlet UIProgressView *progressIndicator;
@property (strong, nonatomic) IBOutlet UILabel *progressIndicatorLabel;


@end
