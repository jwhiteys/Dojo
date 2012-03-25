//
//  EnduranceTask.h
//  Dojo
//
//  Created by Justin Skweres on 3/22/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "AbstractTask.h"


@interface EnduranceTask : AbstractTask

@property (nonatomic, retain) NSNumber * isEnduranceTask;
@property (nonatomic, retain) NSNumber * totalTime;

@end
