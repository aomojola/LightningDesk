//
//  HPMDetailViewController.h
//  LIghtningDesk
//
//  Created by Femi Omojola on 2/2/13.
//  Copyright (c) 2013 IdeaSynthesis LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HPMDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
