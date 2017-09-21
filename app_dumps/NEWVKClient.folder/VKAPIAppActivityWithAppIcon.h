/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKAPIAppActivity.h"
#import "VKDomainDerived.h"

@class VKAPIAppActivity, NSString;

__attribute__((visibility("hidden")))
@interface VKAPIAppActivityWithAppIcon : VKDomainDerived <VKAPIAppActivity> {
	BOOL _showAppIcon;
}
@property(readonly, retain, nonatomic) VKAPIAppActivity* domain;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) BOOL showAppIcon;
+(id)from:(id)from showAppIcon:(BOOL)icon;
-(Class)rendererClass;
@end

