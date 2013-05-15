//
//  Session.h
//  iConfs3
//
//  Created by Eduardo Joel Pereira Beja Martins on 15/05/13.
//  Copyright (c) 2013 G10PI. All rights reserved.
//

#ifndef iConfs3_Session_h
#define iConfs3_Session_h

@interface Session : Event
/*{
    @protected
    (Author*) author;
}*/
@property (nonatomic) Author* author;

-(Session*)initWithDataAndSpeaker:(int)eID date:(NSDate*)d title:(NSString*)t theme:(NSString*)th speaker: (Speaker*)s athor: (Author*) a;
-(Author*)getAuthor;
@end



#endif
