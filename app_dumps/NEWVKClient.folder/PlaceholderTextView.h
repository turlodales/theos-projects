/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITextViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "VKClient-Structs.h"

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface PlaceholderTextView : XXUnknownSuperclass <UITextViewDelegate> {
	NSString* _placeholder;
	UILabel* _textPlaceholder;
	id<UITextViewDelegate> _parentDelegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* placeholder;
@property(assign, nonatomic) __weak id<UITextViewDelegate> parentDelegate;
@property(retain, nonatomic) UILabel* textPlaceholder;
-(void).cxx_destruct;
-(id)forwardingTargetForSelector:(SEL)selector;
-(BOOL)respondsToSelector:(SEL)selector;
-(id)methodSignatureForSelector:(SEL)selector;
-(void)textViewDidChange:(id)textView;
-(void)setFont:(id)font;
-(void)setTextContainerInset:(UIEdgeInsets)inset;
-(void)setDelegate:(id)delegate;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
@end

