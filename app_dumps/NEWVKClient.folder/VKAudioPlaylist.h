/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKAttachment.h"
#import "VKDomain.h"
#import "VKClient-Structs.h"

@class NSArray, NSString, VKIdentity, VKAudioThumb;
@protocol VKSource;

__attribute__((visibility("hidden")))
@interface VKAudioPlaylist : VKDomain <VKAttachment> {
	id<VKSource> _source;
	NSString* _title;
	NSString* _desc;
	int _count;
	int _type;
	unsigned _year;
	VKIdentity* _originalIden;
	VKIdentity* _followedIden;
	VKAudioThumb* _photo;
	NSArray* _thumbs;
	unsigned _createTime;
	unsigned _updateTime;
	unsigned _followers;
	unsigned _plays;
	NSString* _mainArtist;
	NSArray* _artists;
	NSArray* _genres;
}
@property(retain, nonatomic) NSArray* genres;
@property(retain, nonatomic) NSArray* artists;
@property(retain, nonatomic) NSString* mainArtist;
@property(assign, nonatomic) unsigned plays;
@property(assign, nonatomic) unsigned followers;
@property(assign, nonatomic) unsigned updateTime;
@property(assign, nonatomic) unsigned createTime;
@property(retain, nonatomic) NSArray* thumbs;
@property(retain, nonatomic) VKAudioThumb* photo;
@property(retain, nonatomic) VKIdentity* followedIden;
@property(retain, nonatomic) VKIdentity* originalIden;
@property(assign, nonatomic) unsigned year;
@property(assign, nonatomic) int type;
@property(assign, nonatomic) int count;
@property(retain, nonatomic) NSString* desc;
@property(retain, nonatomic) NSString* title;
@property(retain, nonatomic) id<VKSource> source;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(id)oid:(id)oid iid:(id)iid accessKey:(id)key;
-(void).cxx_destruct;
-(void)acceptSources:(id)sources;
-(BOOL)isCreator:(id)creator;
-(id)pickImageUrlsForSize:(CGSize)size scale:(float)scale;
-(BOOL)process:(id)process context:(id)context;
-(Class)cellClass;
-(void)domainOnEditCopy:(id)copy;
-(id)artistStr;
-(id)attributedStatus:(id)status;
-(id)attachmentButtonTitle;
-(id)attachmentIco;
-(id)attachmentImage;
-(id)attachmentStatus:(BOOL)status;
-(id)attachmentTitle;
-(id)attachmentPlaceholder;
@end

