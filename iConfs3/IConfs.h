//
//  IConfs.h
//  iConfs3
//
//  Created by Eduardo Joel Pereira Beja Martins on 21/05/13.
//  Copyright (c) 2013 G10PI. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Event.h"
#import "Conference.h"

@interface IConfs : NSObject
{
    @protected
    NSMutableArray* conferences;
    NSMutableArray* allConferences;
    NSMutableArray* agenda;
}

//Subscribed conferences
@property (nonatomic) NSMutableArray* conferences;

//All conferences
@property (nonatomic) NSMutableArray* allConferences;

//User agenda
@property (nonatomic) NSMutableArray* agenda;

-(IConfs*)initiConfs: (NSArray*)aConferences;
-(BOOL)addEventToAgenda:(Event*)event;
-(BOOL)removeEventFromAgenda:(int)eventID;
-(NSArray*)getAgenda;
-(NSArray*)getAllConferences;
-(NSArray*)getMyConferences;
-(BOOL)addConference:(Conference*)c;
-(BOOL)removeConference:(int)confID;

@end
