//
//  BirdSighting.h
//  LIghtningDesk
//
//  Created by Femi Omojola on 2/2/13.
//  Copyright (c) 2013 IdeaSynthesis LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BirdSighting : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, strong) NSDate *date;
-(id)initWithName:(NSString *)name location:(NSString *)location date:(NSDate *)date;

@end
