//
//  FontListViewController.h
//  Fonts
//
//  Created by 李林 on 16/2/20.
//  Copyright © 2016年 DeviL. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FontListViewController : UITableViewController

@property (copy, nonatomic) NSArray *fontNames;
@property (assign, nonatomic) BOOL showFavorites;

@end
