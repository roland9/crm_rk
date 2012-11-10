//
//  RGClientsAPIClient.h
//  MyCRM
//
//  Created by Roland on 03/11/2012.
//  Copyright (c) 2012 RG. All rights reserved.
//

#import "AFRESTClient.h"

@interface RGClientsAPIClient : AFRESTClient <AFIncrementalStoreHTTPClient>

+ (RGClientsAPIClient *)sharedClient;

@end
