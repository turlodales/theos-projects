/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "InputPanelViewTextViewDelegate.h"
#import "VKClient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIButton, UIColor, UIView, VKPPBadge, UIImageView, NSString, InputPanelViewTextView;
@protocol InputPanelViewDelegate;

__attribute__((visibility("hidden")))
@interface InputPanelView : XXUnknownSuperclass <InputPanelViewTextViewDelegate> {
	InputPanelViewTextView* _textPanel;
	UIButton* _toggle;
	UIImageView* _promo;
	UIButton* _send;
	VKPPBadge* _badge;
	UIImageView* _background;
	UIView* _overlay;
	id<InputPanelViewDelegate> _inputPanelDelegate;
	float _targetHeight;
	UIColor* _shadowColor;
	UIEdgeInsets _inset;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) float targetHeight;
@property(assign, nonatomic) __weak id<InputPanelViewDelegate> inputPanelDelegate;
@property(assign, nonatomic) UIEdgeInsets inset;
@property(retain, nonatomic) UIView* overlay;
@property(retain, nonatomic) UIImageView* background;
@property(retain, nonatomic) VKPPBadge* badge;
@property(retain, nonatomic) UIButton* send;
@property(retain, nonatomic) UIImageView* promo;
@property(retain, nonatomic) UIButton* toggle;
@property(retain, nonatomic) InputPanelViewTextView* textPanel;
@property(retain, nonatomic) UIColor* shadowColor;
-(void).cxx_destruct;
-(void)inputPanelViewTextViewResignFirstResponder:(BOOL)responder;
-(void)inputPanelViewTextViewBecomeFirstResponder:(BOOL)responder;
-(void)inputPanelViewTextViewAttemptToSend:(id)send;
-(void)inputPanelViewTextViewAttemptToBecomeFirstResponder:(id)becomeFirstResponder;
-(void)updateCount:(int)count animated:(BOOL)animated;
-(void)updateEmpty:(BOOL)empty;
-(void)inputEnable:(BOOL)enable;
-(void)dealloc;
-(CGRect)textPanelFrame;
-(void)layoutSubviews;
-(id)initForComments:(BOOL)comments;
-(id)initWithFrame:(CGRect)frame inset:(UIEdgeInsets)inset forComments:(BOOL)comments;
@end
