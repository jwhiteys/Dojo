//
//  DojoTimerViewController.m
//  Dojo
//
//  Created by Justin Skweres on 3/22/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "DojoTimerViewController.h"

@implementation DojoTimerViewController
@synthesize motivationLabel=_motivationLabel;
@synthesize timerLabel=_timerLabel;
@synthesize dingButton=_dingButton;
@synthesize progressIndicator=_progressIndicator;
@synthesize progressIndicatorLabel=_progressIndicatorLabel;

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
    [self setMotivationLabel:nil];
    [self setTimerLabel:nil];
    [self setDingButton:nil];
    [self setProgressIndicator:nil];
    [self setProgressIndicatorLabel:nil];
    [super viewDidUnload];
    // Release any retained subviews of the main view.
    // e.g. self.myOutlet = nil;
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    // Return YES for supported orientations
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}

@end
