//
//  RGClientsIncrementalStore.m
//  MyCRM
//
//  Created by Roland on 03/11/2012.
//  Copyright (c) 2012 RG. All rights reserved.
//

#import "RGClientsIncrementalStore.h"
#import "RGClientsAPIClient.h"


@implementation RGClientsIncrementalStore


+ (void)initialize {
    [NSPersistentStoreCoordinator registerStoreClass:self forStoreType:[self type]];
}

+ (NSString *)type {
    return NSStringFromClass(self);
}

+ (NSManagedObjectModel *)model {
    return [[NSManagedObjectModel alloc] initWithContentsOfURL:[[NSBundle mainBundle] URLForResource:@"crm_rk" withExtension:@"xcdatamodeld"]];
}


- (id <AFIncrementalStoreHTTPClient>)HTTPClient {
    return [RGClientsAPIClient sharedClient];
}



@end
