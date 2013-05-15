//
//  Room.h
//  iConfs3
//
//  Created by Eduardo Joel Pereira Beja Martins on 15/05/13.
//  Copyright (c) 2013 G10PI. All rights reserved.
//

#ifndef iConfs3_Room_h
#define iConfs3_Room_h

@interface Room: Place

@property (nonatomic) NSString* name;

-(Room*)initEA: (int)xx y:(int)yy name:(NSString*)n;
-(NSString*)getName;
-(void)setName: (NSString*)n;

@end

#endif
