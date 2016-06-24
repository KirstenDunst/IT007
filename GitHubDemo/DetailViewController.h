//
//  DetailViewController.h
//  GitHubDemo
//
//  Created by Mac on 16/6/22.
//  Copyright © 2016年 csx. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

