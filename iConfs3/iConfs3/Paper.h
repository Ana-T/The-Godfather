//
//  Paper.h
//  iConfs3
//
//  Created by Eduardo Joel Pereira Beja Martins on 15/05/13.
//  Copyright (c) 2013 G10PI. All rights reserved.
//

#ifndef iConfs3_Paper_h
#define iConfs3_Paper_h

#import <Foundation/NSObject.h>

@interface Paper: NSObject

@property (nonatomic) int paperID;
@property (nonatomic) NSString* title;
@property (nonatomic) NSArray* authors;
@property (nonatomic) NSString* abstract;

-(Paper*)initWithData: (int) pID title:(NSString*) t authors: (NSArray*) a abstract:(NSString*)ab;
-(NSString*)getTitle;
-(NSArray*)getAuthors;
-(NSString*)getAbstract;
-(int)getID;

@end

#endif
