//
//  DojoAddTaskViewController.h
//  Dojo
//
//  Created by Justin Skweres on 3/24/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DojoAddTaskViewController : UIViewController

//task info
@property (strong, nonatomic) IBOutlet UILabel *titleLabel;
@property (strong, nonatomic) IBOutlet UITextField *taskNameTextField;
@property (strong, nonatomic) IBOutlet UITextField *taskSummaryTextField;
@property (strong, nonatomic) IBOutlet UILabel *enduranceModeLabel;
@property (strong, nonatomic) IBOutlet UISwitch *enduranceModeSwitch;

//time pickers
@property (strong, nonatomic) IBOutlet UILabel *timePickerLabel;
@property (strong, nonatomic) IBOutlet UIPickerView *hourPicker;
@property (strong, nonatomic) IBOutlet UIPickerView *minutePicker;

//buttons
@property (strong, nonatomic) IBOutlet UIBarButtonItem *startTaskButton;
@property (strong, nonatomic) IBOutlet UIBarButtonItem *flexibleSpacerLeft;
@property (strong, nonatomic) IBOutlet UIBarButtonItem *fileTaskButton;
@property (strong, nonatomic) IBOutlet UIBarButtonItem *flexibleSpacerRight;
@property (strong, nonatomic) IBOutlet UIBarButtonItem *trashTaskButton;

@end
