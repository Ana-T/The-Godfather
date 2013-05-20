//
//  ViewController.m
//  Menu2
//
//  Created by Ana T on 17/05/13.
//  Copyright (c) 2013 Ana T. All rights reserved.
//

#import "ViewController.h"
#import "iConfsScreen.h"

@interface ViewController (){
    @protected
    NSArray *optionsConference;
    NSArray *optionsIConfs;
}

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    optionsIConfs=[[NSArray alloc] initWithObjects:@"Add Conference",@"My Conferences", @"Personal Agenda",nil];
    optionsConference=[[NSArray alloc] initWithObjects:@"Sessions",@"Speakers",@"Locations",@"Where am I?",@"Shedule",@"Rating", nil];
    
    UINavigationBar *navBar = [[self navigationController] navigationBar];
    UIImage *backgroundImage = [UIImage imageNamed:@"NavigationBar"];
    [navBar setBackgroundImage:backgroundImage forBarMetrics:UIBarMetricsDefault];
    
    self.iConfsScreen = (iConfsScreen *)[[self.splitViewController.viewControllers lastObject] topViewController];
}


#pragma mark - Métodos da Tabela!

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    if (section==0) {
        return [optionsIConfs count];
    } else 
        return [optionsConference count];
    
}


- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
    
    NSString *cellID = @"myCell";

    UITableViewCell *cell=[tableView dequeueReusableCellWithIdentifier:cellID];
    
    if (!cell) {
        cell=[[UITableViewCell alloc]initWithStyle:UITableViewCellStyleDefault reuseIdentifier:cellID];
    }
    
    if (indexPath.section==0) {
        cell.textLabel.text=[optionsIConfs objectAtIndex:indexPath.row];
    }else
        cell.textLabel.text=[optionsConference objectAtIndex:indexPath.row];
    
    cell.textLabel.textAlignment = NSTextAlignmentCenter;

    return cell;

}

- (NSString *)tableView:(UITableView *)tableView titleForHeaderInSection:(NSInteger)section{

    if(section==0) return @"Menú iConfs";
    else return @"Menú Conferência";
}    // fixed font style. use custom view (UILabel) if you want something different


- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView{
    
    return 2;
    
}

-(void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath{
    
    NSString *str;
    
    if (indexPath.section == 0) {
        str = optionsIConfs[indexPath.row];
    }else
        str = optionsConference[indexPath.row];

    self.iConfsScreen.detailItem = str;
    
}

@end
