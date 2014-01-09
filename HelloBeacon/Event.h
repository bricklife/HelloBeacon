//
//  Event.h
//  HelloBeacon
//
//  Created by Shinichiro Oba on 2014/01/09.
//  Copyright (c) 2014年 bricklife.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Event : NSManagedObject

@property (nonatomic, retain) NSNumber * enter;
@property (nonatomic, retain) NSDate * timeStamp;

- (NSString *)dateString;

@end
