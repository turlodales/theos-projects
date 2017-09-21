/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModelAction.h"

@class NSArray, VKIdentity;

__attribute__((visibility("hidden")))
@interface ModelActionAddAudiosToPlaylist : ModelAction {
	NSArray* _ownedAddedAudios;
	NSArray* _externalAddedAudios;
	NSArray* _allAddedAudios;
	VKIdentity* _playlistIden;
}
@property(copy, nonatomic) VKIdentity* playlistIden;
@property(retain, nonatomic) NSArray* allAddedAudios;
@property(retain, nonatomic) NSArray* externalAddedAudios;
@property(retain, nonatomic) NSArray* ownedAddedAudios;
@property(retain, nonatomic) NSArray* target;
+(int)domainType;
+(id)target:(id)target playlistIden:(id)iden;
-(void).cxx_destruct;
-(BOOL)actionResultForData:(id)data context:(id)context;
-(id)actionRequestForContext:(id)context;
-(BOOL)hudSuccessEmptyVisible;
@end

