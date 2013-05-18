//
//  ViewController.h
//  Menu2
//
//  Created by Ana T on 17/05/13.
//  Copyright (c) 2013 Ana T. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITableViewDataSource>{

    
        NSArray *optionsIConfs;
        NSArray *optionsConference;
        bool firstMenu;
    }
    
    //@property (strong, nonatomic) IBOutlet UITableView *tabela;
    

    
    @property (nonatomic,retain)    NSArray *optionsIConfs;
    @property (nonatomic,retain)    NSArray *optionsConference;
    @property (nonatomic,readwrite) bool firsMenu;
    
    
    @end

