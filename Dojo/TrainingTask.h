//
//  TrainingTask.h
//  Dojo
//
//  Created by Justin Skweres on 3/22/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "AbstractTask.h"


@interface TrainingTask : AbstractTask

@property (nonatomic, retain) NSNumber * isTrainingTask;
@property (nonatomic, retain) NSNumber * goalTime;
@property (nonatomic, retain) NSNumber * actualTime;

@end
