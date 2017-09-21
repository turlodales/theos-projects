/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MenuCell.h"
#import "BadgedCell.h"

@class NSString, UIButton;

__attribute__((visibility("hidden")))
@interface TitleMenuCell : MenuCell <BadgedCell> {
	UIButton* _badge;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UIButton* badge;
+(id)image:(id)image statId:(id)anId title:(id)title select:(id)select;
-(void).cxx_destruct;
-(void)badgeTarget:(id)target selector:(SEL)selector;
-(void)setBadgeValue:(unsigned)value;
-(void)setSelected:(BOOL)selected animated:(BOOL)animated;
-(void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;
-(void)updateShadow;
@end

