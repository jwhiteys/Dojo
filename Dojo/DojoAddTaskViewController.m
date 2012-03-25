//
//  DojoAddTaskViewController.m
//  Dojo
//
//  Created by Justin Skweres on 3/24/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "DojoAddTaskViewController.h"

@implementation DojoAddTaskViewController
@synthesize titleLabel;
@synthesize taskNameTextField;
@synthesize taskSummaryTextField;
@synthesize enduranceModeLabel;
@synthesize enduranceModeSwitch;
@synthesize timePickerLabel;
@synthesize hourPicker;
@synthesize minutePicker;
@synthesize startTaskButton;
@synthesize flexibleSpacerLeft;
@synthesize fileTaskButton;
@synthesize flexibleSpacerRight;
@synthesize trashTaskButton;

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)didReceiveMemoryWarning
{
    // Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
    
    // Release any cached data, images, etc that aren't in use.
}

#pragma mark - View lifecycle

/*
// Implement loadView to create a view hierarchy programmatically, without using a nib.
- (void)loadView
{
}
*/

/*
// Implement viewDidLoad to do additional setup after loading the view, typically from a nib.
- (void)viewDidLoad
{
    [super viewDidLoad];
}
*/

- (void)viewDidUnload
{
    [self setTitleLabel:nil];
    [self setTaskNameTextField:nil];
    [self setTaskSummaryTextField:nil];
    [self setEnduranceModeLabel:nil];
    [self setEnduranceModeSwitch:nil];
    [self setTimePickerLabel:nil];
    [self setHourPicker:nil];
    [self setMinutePicker:nil];
    [self setStartTaskButton:nil];
    [self setFlexibleSpacerLeft:nil];
    [self setFileTaskButton:nil];
    [self setFlexibleSpacerRight:nil];
    [self setTrashTaskButton:nil];
    [super viewDidUnload];
    // Release any retained subviews of the main view.
    // e.g. self.myOutlet = nil;
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    // Return YES for supported orientations
    return (interfaceOrientation);
}

@end
