//
//  Client.h
//  crm_rk
//
//  Created by RolandG on 10/11/2012.
//  Copyright (c) 2012 mapps. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Client : NSManagedObject

@property (nonatomic, retain) NSNumber * clientId;
@property (nonatomic, retain) NSString * country;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSManagedObject *contacts;

@end
