//
//  News.h
//  iConfs3
//
//  Created by Eduardo Joel Pereira Beja Martins on 17/05/13.
//  Copyright (c) 2013 G10PI. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface News : NSObject
@property (nonatomic) NSString* title;
@property (nonatomic) NSString* text;
@property (nonatomic) NSDate* sentDate;

-(News*)initWithData: (NSString*) title text: (NSString*) t date:(NSDate*)date;
-(NSString*)getTitle;
-(NSString*)getText;
-(NSDate*)getDate;

@end
