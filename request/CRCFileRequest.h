//
//  CRCFileRequest.h
//  CocoaRestClient
//
//  Created by Adam Venturella on 7/10/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CocoaRestClientAppDelegate.h"


@interface CRCFileRequest : NSObject {

}
+(void)createRequest:(NSMutableURLRequest *)request;
+ (BOOL) currentRequestIsCRCFileRequest:(CocoaRestClientAppDelegate *)application;
@end
