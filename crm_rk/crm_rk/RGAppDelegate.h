//
//  RGAppDelegate.h
//  crm_rk
//
//  Created by RolandG on 10/11/2012.
//  Copyright (c) 2012 mapps. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RGAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
