//
//  Event.m
//  HelloBeacon
//
//  Created by Shinichiro Oba on 2014/01/09.
//  Copyright (c) 2014年 bricklife.com. All rights reserved.
//

#import "Event.h"


@implementation Event

@dynamic enter;
@dynamic timeStamp;

- (NSString *)dateString
{
    NSDateFormatter *formatter = [NSDateFormatter new];
    [formatter setDateFormat:@"yyyy-MM-dd"];
    
    return [formatter stringFromDate:self.timeStamp];
}

@end
