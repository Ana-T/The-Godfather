//
//  Conference.h
//  iConfs3
//
//  Created by Eduardo Joel Pereira Beja Martins on 15/05/13.
//  Copyright (c) 2013 G10PI. All rights reserved.
//

#ifndef iConfs3_Conference_h
#define iConfs3_Conference_h

@interface Conference: NSObject

@property (nonatomic) NSString* logo_path;
@property (nonatomic) int confID;
@property (nonatomic) NSString* confName;
@property (nonatomic) NSMutableDictionary* events;
@property (nonatomic) NSMutableDictionary* news;
@property (nonatomic) NSMutableDictionary* authors;
@property (nonatomic) NSMutableDictionary* organizers;
@property (nonatomic) NSMutableDictionary* speakers;
@property (nonatomic) NSArray* notifications;
@property (nonatomic) NSMutableDictionary* bluePrints;
@property (nonatomic) NSArray* sessions;
@property (nonatomic) NSArray* workshops;
@property (nonatomic) NSArray* events;
@property (nonatomic) NSArray* agenda;

-(Conference*)initWithData: (int)cID name: (NSString*)n logo_path:(NSString*)lp bluePrint:(NSMutableDictionary*)bp;
-(BOOL)addAuthor:(Author*)author;
-(BOOL)removePerson:(int)personID;
-(NSMutableDictionary*)getAuthors;
-(BOOL)addOrganizer:(Organizer*)organizer;
-(BOOL)removeOrganizer:(int)personID;
-(NSMutableDictionary*)getOrganizers;
-(BOOL)addSpeaker:(Speaker*)speaker;
-(BOOL)removeSpeaker:(int)personID;
-(NSMutableDictionary*)getSpeakers;
-(BOOL)addNews:(News*)n;
-(NSMutableDictionary*)getAuthors;
-(BOOL)addNotification:(Notification*)notification;
-(NSArray*)getNotifications;
-(BOOL)addSessions:(Session*)session;
-(BOOL)removeSession:(int)eventID;
-(NSArray*)getSessions;
-(BOOL)addWorkshop:(Workshop*)workshop;
-(BOOL)removeWorkshop:(int)eventID;
-(NSArray*)getNWorkshops;
-(BOOL)addOtherEvent:(News*)event;
-(BOOL)removeOtherEvent:(int)eventID;
-(NSArray*)getAllEvents;
-(BOOL)addEventToAgenda:(Event*)event;
-(BOOL)removeEventFromAgenda:(int)eventID;
-(NSArray*)getAgenda;
-(void)changeLogoPath:(NSString*)lp;
-(void)changeConferenceName:(NSString*)n;
-(BOOL)changeBluePrint:(int)floor file_path:(NSString*);
-(BOOL)deleteBluePrint:(int)floor;
@end
#endif
