//
//  DetailViewController.h
//  StoreKitTest
//
//  Created by Katie Yun on 2014. 4. 29..
//  Copyright (c) 2014년 Katie Yun. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
