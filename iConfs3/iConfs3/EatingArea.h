//
//  EatingArea.h
//  iConfs3
//
//  Created by Eduardo Joel Pereira Beja Martins on 15/05/13.
//  Copyright (c) 2013 G10PI. All rights reserved.
//

#ifndef iConfs3_EatingArea_h
#define iConfs3_EatingArea_h

@interface EatingArea: Place

@property (nonatomic) NSString* name;

-(EatingArea*)initEA: (int)xx y:(int)yy name:(NSString*)n;
-(NSString*)getName;
-(void)setName: (NSString*)n;

@end

#endif
