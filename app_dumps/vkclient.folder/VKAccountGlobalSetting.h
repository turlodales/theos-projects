/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKRenderable.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VKAccountGlobalSetting : VKRenderable {
	BOOL _settingAvailable;
	NSString* _settingName;
	NSString* _value;
}
@property(assign, nonatomic) BOOL settingAvailable;
@property(retain, nonatomic) NSString* value;
@property(retain, nonatomic) NSString* settingName;
-(BOOL)process:(id)process context:(id)context;
-(void)dealloc;
@end
