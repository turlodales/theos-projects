/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKDomainDerived.h"

@class VKAPIApp, NSArray;

__attribute__((visibility("hidden")))
@interface VKAPIAppWithFriendsPlaying : VKDomainDerived {
	NSArray* _friends;
}
@property(readonly, copy, nonatomic) NSArray* friends;
@property(readonly, retain, nonatomic) VKAPIApp* domain;
+(id)from:(id)from withFriends:(id)friends;
-(void).cxx_destruct;
-(Class)cellClass;
@end

