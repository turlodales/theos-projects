/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NotificationEvent.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface NEventBDays : NotificationEvent {
	NSArray* _friends;
}
@property(copy, nonatomic) NSArray* friends;
+(id)eventWithFriends:(id)friends today:(BOOL)today;
-(void).cxx_destruct;
-(id)controlerForEvent:(id)event;
@end

