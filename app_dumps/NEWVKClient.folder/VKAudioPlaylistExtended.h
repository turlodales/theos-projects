/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKRenderable.h"

@class NSString, VKAudioPlaylist;

__attribute__((visibility("hidden")))
@interface VKAudioPlaylistExtended : VKRenderable {
	NSString* _title;
	NSString* _subtitle;
	VKAudioPlaylist* _playlist;
}
@property(retain, nonatomic) VKAudioPlaylist* playlist;
@property(copy, nonatomic) NSString* subtitle;
@property(copy, nonatomic) NSString* title;
-(void).cxx_destruct;
-(BOOL)process:(id)process context:(id)context;
@end

