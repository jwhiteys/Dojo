//
//  Subject.h
//  Dojo
//
//  Created by Justin Skweres on 3/22/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Subject : NSManagedObject

@property (nonatomic, retain) NSSet *goals;
@end

@interface Subject (CoreDataGeneratedAccessors)

- (void)addGoalsObject:(NSManagedObject *)value;
- (void)removeGoalsObject:(NSManagedObject *)value;
- (void)addGoals:(NSSet *)values;
- (void)removeGoals:(NSSet *)values;

@end
