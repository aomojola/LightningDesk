//
//  HPMFlipsideViewController.h
//  LightningDesk
//
//  Created by Femi Omojola on 1/22/13.
//  Copyright (c) 2013 IdeaSynthesis LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HPMFlipsideViewController;

@protocol HPMFlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(HPMFlipsideViewController *)controller;
@end

@interface HPMFlipsideViewController : UIViewController

@property (weak, nonatomic) IBOutlet id <HPMFlipsideViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end
