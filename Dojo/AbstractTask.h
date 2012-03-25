//
//  AbstractTask.h
//  Dojo
//
//  Created by Justin Skweres on 3/22/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Goal;

@interface AbstractTask : NSManagedObject

@property (nonatomic, retain) NSNumber * latitude;
@property (nonatomic, retain) NSNumber * longitude;
@property (nonatomic, retain) NSDate * startTime;
@property (nonatomic, retain) NSDate * endTime;
@property (nonatomic, retain) NSNumber * dingCount;
@property (nonatomic, retain) NSString * quantUnitType;
@property (nonatomic, retain) NSNumber * usesQuants;
@property (nonatomic, retain) NSNumber * quantCount;
@property (nonatomic, retain) NSNumber * productivityLevel;
@property (nonatomic, retain) Goal *goal;

@end
