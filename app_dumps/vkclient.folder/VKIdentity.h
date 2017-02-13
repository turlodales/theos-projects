/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "vkclient-Structs.h"
#import "NSCopying.h"

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface VKIdentity : XXUnknownSuperclass <NSCopying> {
	int _type;
	NSNumber* _oid;
	NSNumber* _iid;
	NSString* _access_key;
	NSString* _context;
}
@property(retain, nonatomic) NSString* context;
@property(retain, nonatomic) NSString* access_key;
@property(retain, nonatomic) NSNumber* iid;
@property(retain, nonatomic) NSNumber* oid;
@property(assign, nonatomic) int type;
+(id)parse:(id)parse withType:(int)type;
+(id)type:(int)type oid:(id)oid iid:(id)iid;
-(BOOL)isOwner:(id)owner;
-(id)titleShort;
-(id)title;
-(BOOL)isEqualToIdentity:(id)identity;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)zone;
-(BOOL)isEqual:(id)equal;
-(id)description;
-(void)dealloc;
@end
