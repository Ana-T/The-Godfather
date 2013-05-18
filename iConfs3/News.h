//
//  News.h
//  iConfs3
//
//  Created by Eduardo Joel Pereira Beja Martins on 18/05/13.
//  Copyright (c) 2013 G10PI. All rights reserved.
//

#ifndef iConfs3_News_h
#define iConfs3_News_h

@interface News: NSObject
{
@protected
    NSString* title;
    NSString* text;
    NSDate* sentDate;
}

@property (nonatomic) NSString* title;
@property (nonatomic) NSString* text;
@property (nonatomic) NSDate* sentDate;

-(News*)initWithData: (NSString*) t text: (NSString*) txt date:(NSDate*)date;
-(NSString*)getTitle;
-(NSString*)getText;
-(NSDate*)getDate;

@end



#endif
