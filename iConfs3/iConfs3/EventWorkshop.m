//
//  EventWorkshop.m
//  iConfs3
//
//  Created by Eduardo Joel Pereira Beja Martins on 20/05/13.
//  Copyright (c) 2013 G10PI. All rights reserved.
//

#import "EventWorkshop.h"

@implementation EventWorkshop

-(EventWorkshop*)initWithDataAndSpeaker:(int)eID date:(NSDate*)d title:(NSString*)t theme:(NSString*)th speaker:(Speaker*)s needs:(NSString*)n{
    eventID = eID;
    date = d;
    title = t;
    theme = th;
    speaker = s;
    needs = n;
    return self;
}
-(NSString*)getNeeds{
    return needs;
}

@end
