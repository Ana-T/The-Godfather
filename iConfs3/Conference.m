//
//  Conference.m
//  iConfs3
//
//  Created by Eduardo Joel Pereira Beja Martins on 17/05/13.
//  Copyright (c) 2013 G10PI. All rights reserved.
//

#import "Conference.h"

@implementation Conference

-(Conference*)initWithData: (int)cID name: (NSString*)n logo_path:(NSString*)lp bluePrint:(NSMutableDictionary*)bp{
    self.confID = cID;
    self.confName = n;
    self.logo_path = lp;
    self.bluePrints = bp;
    NSMutableDictionary *authors = [[NSMutableDictionary alloc] init];
    return self;
}

-(BOOL)addAuthor:(Author*)author{
    
    NSNumber *value = [self.authors objectForKey:author.personID];
    
    if (value)
    {
        return false;
    }
    else
    {
        [self.authors setObject:author forKey:author.personID];
        return true;
    }
}


-(BOOL)removePerson:(int)personID{
    
    NSNumber *value = [self.authors objectForKey:personID];
    
    if (value)
    {
        [self.authors removeObjectForKey:personID];
        return true;
    }
    else
    {
        return false;
    }
}

-(NSArray*)getAuthors{
    return [self.authors allValues];
}

-(BOOL)addOrganizer:(Organizer*)organizer{
    
    NSNumber *value = [self.organizers objectForKey:organizer.personID];
    
    if (value)
    {
        return false;
    }
    else
    {
        [self.organizers setObject:organizer forKey:organizer.personID];
        return true;
    }
}

-(BOOL)removeOrganizer:(int)personID{
    
    NSNumber *value = [self.organizers objectForKey:personID];
    
    if (value)
    {
        [self.organizers removeObjectForKey:personID];
        return true;
    }
    else
    {
        return false;
    }
}

-(NSArray*)getOrganizers{
    return [self.organizers allValues];
}

-(BOOL)addSpeaker:(Speaker*)speaker{
    
    NSNumber *value = [self.speakers objectForKey:speaker.personID];
    
    if (value)
    {
        return false;
    }
    else
    {
        [self.speakers setObject:speakerr forKey:speaker.personID];
        return true;
    }
    
}

-(BOOL)removeSpeaker:(int)personID{
    
    NSNumber *value = [self.speakers objectForKey:personID];
    
    if (value)
    {
        [self.speakers removeObjectForKey:personID];
        return true;
    }
    else
    {
        return false;
    }

}

-(NSArray*)getSpeakers{
    return [self.organizers allValues];
}

-(BOOL)addNews:(News*)n{
    BOOL isHere = false;
    for (i=0; i<[self.news count]; i++) {
        if ([self.news objectAtIndex:i].getTitle isEqual: n.getTitle] && [self.news objectAtIndex:i].getDate isEqual: n.getDate]){
            isHere = true;
            break;
        }
    }
    if(isHere == false){
        [self.news removeObjectsAtIndexes: index];
        return true;
    }
    else return false;
}

-(NSArray*)getNews{
    return [self.news copy];
}

-(BOOL)addNotification:(Notification*)notification{
    BOOL isHere = false;
    for (i=0; i<[self.news count]; i++) {
        if ([self.notifications objectAtIndex:i].getTitle isEqual: notification.getTitle] && [self.notifications objectAtIndex:i].getDate isEqual: notification.getDate]){
            isHere = true;
            break;
        }
    }
    if(isHere == false){
        [self.notifications removeObjectsAtIndexes: index];
        return true;
    }
    else return false;
}

-(NSArray*)getNotifications{
    return [self.notifications copy];
}

-(BOOL)addSessions:(Session*)session;
-(BOOL)removeSession:(int)eventID;
-(NSArray*)getSessions;
-(BOOL)addWorkshop:(Workshop*)workshop;
-(BOOL)removeWorkshop:(int)eventID;
-(NSArray*)getNWorkshops;
-(BOOL)addOtherEvent:(News*)event;
-(BOOL)removeOtherEvent:(int)eventID;
-(NSArray*)getAllEvents;
-(void)changeLogoPath:(NSString*)lp;
-(void)changeConferenceName:(NSString*)n;
-(BOOL)changeBluePrint:(int)floor file_path:(NSString*);
-(BOOL)deleteBluePrint:(int)floor;


@end
