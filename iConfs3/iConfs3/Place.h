//
//  Place.h
//  iConfs3
//
//  Created by Eduardo Joel Pereira Beja Martins on 15/05/13.
//  Copyright (c) 2013 G10PI. All rights reserved.
//

#ifndef iConfs3_Place_h
#define iConfs3_Place_h

#import <Foundation/NSObject.h>

@interface Place: NSObject
/*{
    @protected
    (NSInteger)x;
    (NSInteger)y;
}*/
@property (nonatomic) int x;
@property (nonatomic) int y;
@property (nonatomic) NSString* logoPath;

-(Place*)initPlace: (int)xx y:(int)yy;
-(int)getX;
-(int)getY;
-(void)resetX(int)xx;
-(void)resetY(int)yy;
-(NSString*) getLogo;
@end

#endif

#endif
