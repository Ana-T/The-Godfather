//
//  ViewController.m
//  Menu2
//
//  Created by Ana T on 17/05/13.
//  Copyright (c) 2013 Ana T. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController
@synthesize optionsConference;
@synthesize optionsIConfs;
@synthesize firsMenu;


- (void)awakeFromNib
{
   // self.clearsSelectionOnViewWillAppear = NO;
    self.contentSizeForViewInPopover = CGSizeMake(320.0, 600.0);
    [super awakeFromNib];
}


- (void)viewDidLoad
{
   
    optionsIConfs=[[NSArray alloc] initWithObjects:@"Add Conference",@"My Conferences", @"Personal Agenda",nil];
    
    
    optionsConference=[[NSArray alloc] initWithObjects:@"Sessions",@"Speakers",@"Locations",@"Where am I?",@"Shedule",@"Rating", nil];
    
    
     [super viewDidLoad];
    UINavigationBar *navBar = [[self navigationController] navigationBar];
    UIImage *backgroundImage = [UIImage imageNamed:@"NavigationBar"];
    [navBar setBackgroundImage:backgroundImage forBarMetrics:UIBarMetricsDefault];

	// Do any additional setup after loading the view, typically from a nib.
    
}
#pragma mark - Métodos da Tabela!

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    if (section==0) {
        return [optionsIConfs count];
    } else 
        return [optionsConference count];
    
}


- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
    UITableViewCell *cell=nil;
    NSString *id;
    if(indexPath.section==0) id=@"myCell";
    else id=@"myGroupedCell";
    cell=[tableView dequeueReusableCellWithIdentifier:@"myCell"];
    
    if(cell==nil){
    
    cell=[[UITableViewCell alloc]initWithStyle:UITableViewCellStyleDefault reuseIdentifier:@"myCell"];
    }
    if(indexPath.section==0){
   
        cell.textLabel.text=[optionsIConfs objectAtIndex:indexPath.row];
    }
    else    cell.textLabel.text=[optionsConference objectAtIndex:indexPath.row];

    return cell;

}

- (NSString *)tableView:(UITableView *)tableView titleForHeaderInSection:(NSInteger)section{

    if(section==0) return @"Menú iConfs";
    else return @"Menú Conferência";
}    // fixed font style. use custom view (UILabel) if you want something different


- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView{
    
    return 2;
    
}




@end
