//
//  Session.m
//  iConfs3
//
//  Created by Eduardo Joel Pereira Beja Martins on 20/05/13.
//  Copyright (c) 2013 G10PI. All rights reserved.
//

#import "Session.h"

@implementation Session

-(Session*)initWithDataAndSpeaker:(int)eID date:(NSDate*)d title:(NSString*)t theme:(NSString*)th speaker: (Speaker*)s athor: (Author*) a{
    eventID = eID;
    date = d;
    title = t;
    theme = th;
    speaker = s;
    author = a;
    return self;
}

-(Author*)getAuthor{
    author;ß
}

@end
