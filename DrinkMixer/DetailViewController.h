//
//  DetailViewController.h
//  DrinkMixer
//
//  Created by Jake Tackett on 6/10/13.
//  Copyright (c) 2013 Jake Tackett. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
