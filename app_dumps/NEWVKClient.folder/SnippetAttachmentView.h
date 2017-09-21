/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AbstractMessagesAttachmentView.h"
#import "VKClient-Structs.h"

@class VKMImageView, UIButton, UILabel, UIImageView;
@protocol VKAttachment;

__attribute__((visibility("hidden")))
@interface SnippetAttachmentView : AbstractMessagesAttachmentView {
	UILabel* _titleLabel;
	UILabel* _statusLabel;
	UIImageView* _icoImageView;
	VKMImageView* _imageView;
	id<VKAttachment> _attachment;
	UIButton* _hollowButton;
}
@property(retain, nonatomic) UIButton* hollowButton;
@property(retain, nonatomic) id<VKAttachment> attachment;
@property(retain, nonatomic) VKMImageView* imageView;
@property(retain, nonatomic) UIImageView* icoImageView;
@property(retain, nonatomic) UILabel* statusLabel;
@property(retain, nonatomic) UILabel* titleLabel;
-(void).cxx_destruct;
-(void)reuse;
-(void)render:(id)render reuse:(double)reuse;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
@end

