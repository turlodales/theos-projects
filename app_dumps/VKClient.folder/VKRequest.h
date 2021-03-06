/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VKRequest : XXUnknownSuperclass {
	NSString* _method;
	NSDictionary* _parameters;
	id _handler;
}
@property(copy, nonatomic) id handler;
@property(retain, nonatomic) NSDictionary* parameters;
@property(retain, nonatomic) NSString* method;
+(id)executeNamed:(id)named args:(id)args;
+(id)executeNamed:(id)named argsDict:(id)dict;
+(id)executeCode:(id)code singleResult:(id)result;
+(id)executeCode:(id)code result:(id)result args:(id)args;
+(id)executeCode:(id)code result:(id)result;
+(id)execute:(id)execute args:(id)args success:(id)success failure:(id)failure;
+(id)execute:(id)execute args:(id)args handler:(id)handler;
+(id)execute:(id)execute args:(id)args;
+(id)execute:(id)execute;
+(id)executeParams:(id)params args:(id)args;
+(id)method:(id)method parameters:(id)parameters success:(id)success failure:(id)failure;
+(id)method:(id)method parameters:(id)parameters;
+(id)method:(id)method parameters:(id)parameters handler:(id)handler;
+(id)requestWithIdentifiers:(id)identifiers serviceType:(int)type params:(id)params;
+(id)requestWithIdentifiers:(id)identifiers serviceType:(int)type myIdentifier:(id)identifier params:(id)params;
+(id)lookupFriendsRequestFields;
+(id)countriesRequestWithCount:(unsigned)count needAll:(BOOL)all;
+(id)allCountriesRequest;
+(id)commonCountriesRequest;
+(id)searchPeopleRequestWithFilters:(id)filters parameters:(id)parameters;
+(id)searchPeopleRequestFields;
+(id)nearbyRequestWithParams:(id)params fields:(id)fields;
-(void).cxx_destruct;
-(id)buildCode;
-(id)failure:(id)failure success:(id)success;
-(id)success:(id)success failure:(id)failure;
-(id)handler:(id)handler;
-(id)description;
@end

