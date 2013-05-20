//
//  ViewController.h
//  Menu2
//
//  Created by Ana T on 17/05/13.
//  Copyright (c) 2013 Ana T. All rights reserved.
//

#import <UIKit/UIKit.h>

@class iConfsScreen;

@interface ViewController : UIViewController<UITableViewDataSource>

@property (strong, nonatomic) iConfsScreen *iConfsScreen;

@property (weak, nonatomic) IBOutlet UIImageView *IconView;
@property (weak, nonatomic) IBOutlet UITableView *MenuView;
    
@end

