//
//  Conference.h
//  iConfs3
//
//  Created by Eduardo Joel Pereira Beja Martins on 17/05/13.
//  Copyright (c) 2013 G10PI. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Author.h"
#import "Organizer.h"
#import "Speaker.h"
#import "News.h"
#import "Notification.h"

@interface Conference : NSObject

@property (nonatomic) NSString* logo_path;
@property (nonatomic) int confID;
@property (nonatomic) NSString* confName;
@property (nonatomic) NSMutableDictionary* events;
@property (nonatomic) NSMutableArray* news;
@property (nonatomic) NSMutableDictionary* authors;
@property (nonatomic) NSMutableDictionary* organizers;
@property (nonatomic) NSMutableDictionary* speakers;
@property (nonatomic) NSMutableArray* notifications;
@property (nonatomic) NSMutableDictionary* bluePrints;
@property (nonatomic) NSMutableArray* sessions;
@property (nonatomic) NSMutableArray* workshops;
@property (nonatomic) NSMutableArray* eventsList;

/**
 Initializes a new Conference object
 @param cID id of the conference
 @param n Name fo the conference
 @param logo_path the path to the corresponding conference logo
 @param bp list of path to the blueprints of the conference floors
 @returns a newly initialized object
 */
-(Conference*)initWithData: (int)cID name: (NSString*)n logo_path:(NSString*)lp bluePrint:(NSMutableDictionary*)bp;

/**
 Adds an author to the conference
 @param author author to add
 @returns true if the author has been added, false if it already is in the conference
 */
-(BOOL)addAuthor:(Author*)author;

/**
 Removes an author to the conference
 @param personID author's ID to remove
 @returns true if the author has been removed, false if wasn't on the conference
 */
-(BOOL)removePerson:(int)personID;

/**
 Returns an non-mutable array with all the authors from the conference
 @returns array of authors
 */
-(NSArray*)getAuthors;

/**
 Adds an organizer to the conference
 @param organizer organizer to add
 @returns true if the organizer has been added, false if it already is in the conference
 */
-(BOOL)addOrganizer:(Organizer*)organizer;

/**
 Removes an organizer to the conference
 @param personID organizer's ID to remove
 @returns true if the organizer has been removed, false if wasn't on the conference
 */
-(BOOL)removeOrganizer:(int)personID;

/**
 Returns an non-mutable array with all the organizers from the conference
 @returns array of organizers
 */
-(NSArray*)getOrganizers;

/**
 Adds a speaker to the conference
 @param speaker speaker to add
 @returns true if the speaker has been added, false if it already is in the conference
 */
-(BOOL)addSpeaker:(Speaker*)speaker;

/**
 Removes a speaker to the conference
 @param personID speaker's ID to remove
 @returns true if the speaker has been removed, false if wasn't on the conference
 */
-(BOOL)removeSpeaker:(int)personID;

/**
 Returns an non-mutable array with all the speakers from the conference
 @returns array of speakers
 */
-(NSArray*)getSpeakers;

/**
 Adds news to the conference
 @param n news to add
 @returns true if the news have been added, false it had already been added
 */
-(BOOL)addNews:(News*)n;

/**
 Returns an non-mutable array with all the news from the conference
 @returns array of news
 */
-(NSArray*)getNews;

/**
 Adds a notification to the conference
 @param notification notification to add
 @returns true if the notification has been added, false it had already been added
 */
-(BOOL)addNotification:(Notification*)notification;

/**
 Returns an non-mutable array with all the notifications from the conference
 @returns array of notifications
 */
-(NSArray*)getNotifications;
-(BOOL)addSessions:(Session*)session;
-(BOOL)removeSession:(int)eventID;
-(NSMutableArray*)getSessions;
-(BOOL)addWorkshop:(Workshop*)workshop;
-(BOOL)removeWorkshop:(int)eventID;
-(NSMutableArray*)getNWorkshops;
-(BOOL)addOtherEvent:(News*)event;
-(BOOL)removeOtherEvent:(int)eventID;
-(NSMutableArray*)getAllEvents;
-(void)changeLogoPath:(NSString*)lp;
-(void)changeConferenceName:(NSString*)n;
-(BOOL)changeBluePrint:(int)floor file_path:(NSString*);
-(BOOL)deleteBluePrint:(int)floor;

@end
