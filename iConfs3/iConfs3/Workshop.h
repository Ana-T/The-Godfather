//
//  Workshop.h
//  iConfs3
//
//  Created by Eduardo Joel Pereira Beja Martins on 15/05/13.
//  Copyright (c) 2013 G10PI. All rights reserved.
//

#ifndef iConfs3_Workshop_h
#define iConfs3_Workshop_h
#import "Event.h"
#import "Speaker.h"

@interface Worskshop : Event
/*{
@protected
    (NSString*) needs;
}*/
@property (nonatomic) NSString* needs;

//-(Workshop*)initWithDataAndSpeaker:(int)eID date:(NSDate*)d title:(NSString*)t theme:(NSString*)th speaker:(Speaker*)s needs:(NSString*)n;
-(NSString*)getNeeds;
@end

#endif
