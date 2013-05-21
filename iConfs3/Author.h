//
//  Author.h
//  iConfs3
//
//  Created by Eduardo Joel Pereira Beja Martins on 21/05/13.
//  Copyright (c) 2013 G10PI. All rights reserved.
//

#import "Person.h"
#import "Paper.h"

@interface Author : Person
{
 @protected
 NSMutableDictionary* papers;
}

//List of papers by this author
@property (nonatomic) NSMutableDictionary* papers;

/**
 Gets the author paper with given ID
 @param paper's ID
 @returns paper or null if the author hasn't written the paper
 */
-(Paper*)getPaper:(int)paperID;

/**
 Gets an array with all the author's papers
 @returns array with all the author's papers
 */
-(NSArray*)getAllPapers;

/**
 Add a paper to the author's collection
 @returns true if added sucsessful, false if it's already in the collection
 */
-(BOOL)addPapper:(Paper*)p;

/**
 Removes a paper to the author's collection
 @param paper's ID
 @returns true if added sucsessful, false if it's already in the collection
 */
-(BOOL)removePaper:(int)paperID;

@end
