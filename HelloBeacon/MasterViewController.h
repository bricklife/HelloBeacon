//
//  MasterViewController.h
//  HelloBeacon
//
//  Created by Shinichiro Oba on 2014/01/06.
//  Copyright (c) 2014年 bricklife.com. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
