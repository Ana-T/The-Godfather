//
//  Author.m
//  iConfs3
//
//  Created by Eduardo Joel Pereira Beja Martins on 21/05/13.
//  Copyright (c) 2013 G10PI. All rights reserved.
//

#import "Author.h"

@implementation Author

-(Paper*)getPaper:(int)paperID{
    NSNumber *value = [papers objectForKey:[NSNumber numberWithInteger: paperID]];
    
    if (value)
    {
        return ((Paper*)[papers objectForKey:[NSNumber numberWithInteger: paperID]]);
    }
    else
    {
        return NULL;
    }
}

-(NSArray*)getAllPapers{
    return [papers allValues];
}

-(BOOL)addPapper:(Paper*)p{
    NSNumber *value = [papers objectForKey:[NSNumber numberWithInteger: p.getID]];
    
    if (value)
    {
        return false;
    }
    else
    {
        [papers setObject:p forKey:[NSNumber numberWithInteger: p.getID]];
        return true;
    }
}

-(BOOL)removePaper:(int)paperID{
    NSNumber *value = [papers objectForKey:[NSNumber numberWithInteger: paperID]];
    
    if (value)
    {
        [papers removeObjectForKey:[NSNumber numberWithInteger: paperID]];
        return true;
    }
    else
    {
        return false;
    }
}

@end
