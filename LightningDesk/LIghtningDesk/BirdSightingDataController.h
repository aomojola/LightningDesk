//
//  BirdSightingDataController.h
//  LIghtningDesk
//
//  Created by Femi Omojola on 2/2/13.
//  Copyright (c) 2013 IdeaSynthesis LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BirdSighting;

@interface BirdSightingDataController : NSObject

@property (nonatomic, copy) NSMutableArray *masterBirdSightingList;

- (NSUInteger)countOfList;
- (BirdSighting *)objectInListAtIndex:(NSUInteger)theIndex;
- (void)addBirdSightingWithSighting:(BirdSighting *)sighting;

@end
