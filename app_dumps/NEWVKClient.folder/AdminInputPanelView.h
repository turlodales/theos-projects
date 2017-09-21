/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import "ExtraInputPanelView.h"

@class HighlightedImageButton, NSString, UILabel, UIButton, NSNumber;
@protocol VKSource;

__attribute__((visibility("hidden")))
@interface AdminInputPanelView : ExtraInputPanelView {
	HighlightedImageButton* _senderButton;
	UIButton* _replyToButton;
	id<VKSource> _sender;
	id<VKSource> _replyTo;
	NSNumber* _replyToUser;
	NSNumber* _replyCommentId;
	NSString* _replyInitialText;
	UILabel* _fromLabel;
	UILabel* _replyToLabel;
	NSString* _senderName;
	NSString* _replyToTitle;
}
@property(retain, nonatomic) NSString* replyInitialText;
@property(retain, nonatomic) NSNumber* replyCommentId;
@property(retain, nonatomic) NSNumber* replyToUser;
@property(retain, nonatomic) id<VKSource> replyTo;
@property(retain, nonatomic) id<VKSource> sender;
@property(retain, nonatomic) UIButton* replyToButton;
@property(retain, nonatomic) HighlightedImageButton* senderButton;
@property(retain, nonatomic) NSString* replyToTitle;
@property(retain, nonatomic) NSString* senderName;
@property(retain, nonatomic) UILabel* replyToLabel;
@property(retain, nonatomic) UILabel* fromLabel;
-(void).cxx_destruct;
-(void)twitchSender;
-(void)resetReplyTo;
-(void)showHideAdminPanel:(BOOL)panel;
-(void)updateAdminPanelHidden:(BOOL)hidden;
-(BOOL)adminPanelHidden;
-(void)updateAdminPanel;
-(void)setReplyTo:(id)to nameDat:(id)dat;
-(void)inputEnable:(BOOL)enable;
-(void)layoutSubviews;
-(id)defaultButtonTitleColor;
-(void)setButton:(id)button titleColor:(id)color;
-(void)setupButton:(id)button;
-(void)setupLabel:(id)label;
-(id)initForComments:(BOOL)comments;
@end

