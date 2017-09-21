/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMCell.h"

@class UISwitch, VKAPIAppNotificationSettings;

__attribute__((visibility("hidden")))
@interface AppNotificationSettingsCell : VKMCell {
	UISwitch* _switchControl;
}
@property(retain, nonatomic) VKAPIAppNotificationSettings* domain;
@property(readonly, retain, nonatomic) UISwitch* switchControl;
+(void)prerender:(id)prerender;
-(void).cxx_destruct;
-(void)actionNotificationSettingsSwitched:(id)switched;
-(void)attach:(id)attach expectedReuse:(double)reuse;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end

