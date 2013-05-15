//
//  Person.h
//  iConfs3
//
//  Created by Eduardo Joel Pereira Beja Martins on 14/05/13.
//  Copyright (c) 2013 G10PI. All rights reserved.
//

#ifndef iConfs3_Person_h
#define iConfs3_Person_h

#import <Foundation/NSObject.h>

@interface Person: NSObject
/*{
    @protected
    NSString *_name;
    NSString *_work;
    NSString *_imagePath;
    NSInteger personID;
}*/
@property (nonatomic) NSString* name;
@property (nonatomic) NSString* work;
@property (nonatomic) NSString* imagepath;
@property (nonatomic) int personID;

-(Person*)initWithData: (NSString*) n work: (NSString?) h image:(NSString*)imgPath personID: (int)pID;
-(NSString*)getName;
-(NSString*)getWork;
-(NSString*)getImagePath;
-(NSInteger*)getID;
@end



#endif
