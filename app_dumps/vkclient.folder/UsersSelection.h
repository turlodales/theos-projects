/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKRenderable.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface UsersSelection : VKRenderable {
	NSArray* _users;
	NSString* _title;
}
@property(retain, nonatomic) NSString* title;
@property(retain, nonatomic) NSArray* users;
-(id)mapUsers;
-(void)dealloc;
@end
