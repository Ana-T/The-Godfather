//
//  iConfs.h
//  iConfs3
//
//  Created by Eduardo Joel Pereira Beja Martins on 16/05/13.
//  Copyright (c) 2013 G10PI. All rights reserved.
//

#ifndef iConfs3_iConfs_h
#define iConfs3_iConfs_h

#import <Foundation/NSObject.h>

@interface iConfs: NSObject

@property (nonatomic) NSArray* conferences;
@property (nonatomic) NSArray* allConferences;

@property (nonatomic) NSArray* agenda;

-(iConfs*)initiConfs: (NSArray)aConferences;
-(BOOL)addEventToAgenda:(Event*)event;
-(BOOL)removeEventFromAgenda:(int)eventID;
-(NSArray*)getAgenda;
-(NSArray*)getAllConferences;
-(NSArray*)getMyCOnferences;
-(BOOL)addConference:(Conference*);
-(BOOL)removeConference:(int)confID;
@end

#endif
