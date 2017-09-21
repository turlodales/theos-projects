/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "FBAuthRequest.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface FBBasicAuthRequest : XXUnknownSuperclass <FBAuthRequest> {
	NSString* _appId;
	NSArray* _permissions;
	NSString* _apiVersion;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* apiVersion;
@property(retain, nonatomic) NSArray* permissions;
@property(retain, nonatomic) NSString* appId;
+(id)requestWithAppId:(id)appId permissions:(id)permissions apiVersion:(id)version;
+(id)requestWithAppId:(id)appId permissions:(id)permissions;
-(void).cxx_destruct;
-(id)authParameters;
@end

