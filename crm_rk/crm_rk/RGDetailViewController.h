//
//  RGDetailViewController.h
//  crm_rk
//
//  Created by RolandG on 10/11/2012.
//  Copyright (c) 2012 mapps. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RGDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
