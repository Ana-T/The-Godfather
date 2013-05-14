//
//  Organizer.h
//  iConfs3
//
//  Created by Eduardo Joel Pereira Beja Martins on 15/05/13.
//  Copyright (c) 2013 G10PI. All rights reserved.
//

#ifndef iConfs3_Organizer_h
#define iConfs3_Organizer_h

@interface Organizer : Person{
@protected
    NSString *cargo;
}

-(Person*)initWithData: (NSString*) n work: (NSString?) h image:(NSString*)imgPath personID: (int)pID cargo: (NSString*)c;
-(NSString*)getCargo;
-(void)setCargo:(NSString*)c;
@end




#endif
