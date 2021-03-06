/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModelObserver.h"
#import "VKMCell.h"

@class NSString, VKAudioQueuePlayer;
@protocol AudioCellDelegate;

__attribute__((visibility("hidden")))
@interface AudioCellBase : VKMCell <ModelObserver> {
	VKAudioQueuePlayer* _player;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<AudioCellDelegate> delegate;
@property(retain, nonatomic) VKAudioQueuePlayer* player;
-(void).cxx_destruct;
-(void)model:(id)model willStartLoadingWithContext:(id)context;
-(void)modelLoadingChanged:(id)changed;
-(void)model:(id)model updated:(id)updated;
-(void)reportQuick:(BOOL)quick;
-(BOOL)isPlayingAudio;
-(BOOL)isCurrentAudio;
-(id)audio;
-(void)update;
-(void)playerChangedItem:(id)item;
-(void)playerUpdated:(id)updated;
-(BOOL)selected;
-(void)dealloc;
@end

