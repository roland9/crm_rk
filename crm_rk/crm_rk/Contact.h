//
//  Contact.h
//  crm_rk
//
//  Created by RolandG on 10/11/2012.
//  Copyright (c) 2012 mapps. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Client;

@interface Contact : NSManagedObject

@property (nonatomic, retain) NSNumber * contactId;
@property (nonatomic, retain) NSString * phone;
@property (nonatomic, retain) NSString * firstName;
@property (nonatomic, retain) NSString * lastName;
@property (nonatomic, retain) Client *client;

@end
