/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SocialButtonsDataSource.h"

@class VKPost, NSString;

__attribute__((visibility("hidden")))
@interface PostSocialButtonsDataSource : XXUnknownSuperclass <SocialButtonsDataSource> {
	VKPost* _post;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) VKPost* post;
+(id)post:(id)post;
-(void).cxx_destruct;
-(void)actionShare:(id)share;
-(void)actionComment:(id)comment;
-(void)actionLike:(id)like;
-(BOOL)shared;
-(BOOL)liked;
-(int)numberOfShares;
-(int)numberOfComments;
-(int)numberOfLikes;
-(BOOL)canShare;
-(BOOL)canComment;
-(BOOL)canLike;
-(id)initWithPost:(id)post;
@end
