/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VK_SearchInfoModelBase.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface VK_UsersSearchInfoModel : VK_SearchInfoModelBase {
	NSArray* _friends;
	NSArray* _other;
}
@property(retain, nonatomic) NSArray* other;
@property(retain, nonatomic) NSArray* friends;
+(id)objectMapping;
-(void).cxx_destruct;
-(BOOL)isHaveData;
@end
