//
//  Event.h
//  iConfs3
//
//  Created by Eduardo Joel Pereira Beja Martins on 18/05/13.
//  Copyright (c) 2013 G10PI. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Speaker.h"

@interface Event : NSObject
{
@protected
    NSDate* date;
    NSString* title;
    NSString* theme;
    Speaker* speaker;
    BOOL userVoted;
    int vote;
    int rating;
    int eventID;
}
//@property (nonatomic) NSDate* date;
//@property (nonatomic) NSString* title;
//@property (nonatomic) NSString* theme;
//@property (nonatomic) Speaker* speaker;
//@property (nonatomic) BOOL userVoted;
//@property (nonatomic) int vote;
//@property (nonatomic) int rating;
//@property (nonatomic) int eventID;

-(Event*)initWithData:(int)eID date:(NSDate*)d title:(NSString*)t theme:(NSString*)th;
-(Event*)initWithDataAndSpeaker:(int)eID date:(NSDate*)d title:(NSString*)t theme:(NSString*)th speaker: (Speaker*)s;
-(void)vote:(int)vote;
-(NSString*)getTitle;
-(int)getID;
-(NSString*)getTheme;
-(Speaker*)getSpeaker;
-(void)setSpeaker:(Speaker*)s;
-(int)getVote;
-(void)rate:(int)r;
-(void)getRate;
-(NSDate*)getDate;
-(void)setDate:(NSDate*)d;

@end
