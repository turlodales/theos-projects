/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKDomain.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VKFriendList : VKDomain {
	NSString* _name;
}
@property(retain, nonatomic) NSString* name;
+(id)list:(id)list owner:(id)owner;
-(void).cxx_destruct;
-(BOOL)process:(id)process context:(id)context;
-(void)domainOnEditCopy:(id)copy;
-(Class)cellClass;
@end

