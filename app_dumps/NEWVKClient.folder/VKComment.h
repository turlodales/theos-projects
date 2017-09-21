/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import "VKDomain.h"

@class VKText, NSString, VKCommentIdentity, VKAttachmentsRender, VKAttachments, NSNumber;
@protocol VKSource;

__attribute__((visibility("hidden")))
@interface VKComment : VKDomain {
	BOOL _can_edit;
	BOOL _separatorDisabled;
	BOOL _separatorFull;
	BOOL _last;
	NSNumber* _from;
	unsigned _date;
	VKText* _text;
	VKAttachments* _attachments;
	NSNumber* _reply_to_user;
	NSNumber* _reply_to_comment;
	NSString* _name_dat;
	NSString* _reply_name_dat;
	VKAttachmentsRender* _attachmentsRender;
	id<VKSource> _source;
	id<VKSource> _reply_source;
	XXStruct_rOmXFC _likes;
}
@property(assign, nonatomic) BOOL last;
@property(assign, nonatomic) BOOL separatorFull;
@property(assign, nonatomic) BOOL separatorDisabled;
@property(retain, nonatomic) id<VKSource> reply_source;
@property(retain, nonatomic) id<VKSource> source;
@property(retain, nonatomic) VKAttachmentsRender* attachmentsRender;
@property(retain, nonatomic) NSString* reply_name_dat;
@property(retain, nonatomic) NSString* name_dat;
@property(retain, nonatomic) NSNumber* reply_to_comment;
@property(retain, nonatomic) NSNumber* reply_to_user;
@property(assign, nonatomic) BOOL can_edit;
@property(assign, nonatomic) XXStruct_rOmXFC likes;
@property(retain, nonatomic) VKAttachments* attachments;
@property(retain, nonatomic) VKText* text;
@property(assign, nonatomic) unsigned date;
@property(retain, nonatomic) NSNumber* from;
@property(retain, nonatomic) VKCommentIdentity* iden;
+(id)commentromFeedback:(id)feedback parentIdentity:(id)identity overrideOwner:(id)owner;
+(int)domainCommentType;
-(void).cxx_destruct;
-(void)updateLikes:(id)likes user:(BOOL)user;
-(id)commentStatus;
-(void)acceptSources:(id)sources;
-(void)useAttachments:(id)attachments;
-(BOOL)process:(id)process context:(id)context;
-(BOOL)valid;
-(Class)rendererClass;
-(void)domainOnEditCopy:(id)copy;
@end

