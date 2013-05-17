//
//  Notification.h
//  iConfs3
//
//  Created by Eduardo Joel Pereira Beja Martins on 16/05/13.
//  Copyright (c) 2013 G10PI. All rights reserved.
//

#ifndef iConfs3_Notification_h
#define iConfs3_Notification_h

@interface Notification: NSObject

@property (nonatomic) NSString* title;
@property (nonatomic) NSString* text;
@property (nonatomic) NSDate* sentDate;

-(Notification*)initWithData: (NSString*) title text: (NSString*) t date:(NSDate*)date;
-(NSString*)getTitle;
-(NSString*)getText;
-(NSDate*)getDate;

@end

#endif
