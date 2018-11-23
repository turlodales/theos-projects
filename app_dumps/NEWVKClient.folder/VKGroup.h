/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKSource.h"
#import "VKDomain.h"

@class VKGroupMarketInfo, NSString, NSNumber;

__attribute__((visibility("hidden")))
@interface VKGroup : VKDomain <VKSource> {
	BOOL _is_member;
	BOOL _is_admin;
	BOOL _can_message;
	NSNumber* _gid;
	NSString* _name;
	NSString* _photo;
	NSString* _screen_name;
	NSString* _activity;
	int _type;
	int _is_closed;
	int _deactivated;
	int _flags;
	unsigned _start_date;
	VKGroupMarketInfo* _marketInfo;
	int _admin_level;
	NSNumber* _source_id;
}
@property(readonly, assign, nonatomic) int sex;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) int admin_level;
@property(retain, nonatomic) VKGroupMarketInfo* marketInfo;
@property(assign, nonatomic) unsigned start_date;
@property(assign, nonatomic) BOOL can_message;
@property(assign, nonatomic) BOOL is_admin;
@property(assign, nonatomic) BOOL is_member;
@property(assign, nonatomic) int flags;
@property(assign, nonatomic) int deactivated;
@property(assign, nonatomic) int is_closed;
@property(assign, nonatomic) int type;
@property(retain, nonatomic) NSString* activity;
@property(retain, nonatomic) NSString* screen_name;
@property(retain, nonatomic) NSString* photo;
@property(retain, nonatomic) NSString* name;
@property(retain, nonatomic) NSNumber* gid;
@property(retain, nonatomic) NSNumber* source_id;
+(id)predicate:(id)predicate;
+(id)linkIcon;
-(void).cxx_destruct;
-(BOOL)disclosure;
-(id)title;
-(id)linkText;
-(id)statusString;
-(id)leaveString;
-(id)joinString;
-(id)participantKey;
-(id)typeString;
-(BOOL)process:(id)process context:(id)context;
-(void)domainOnEditCopy:(id)copy;
-(Class)cellClass;
@end
