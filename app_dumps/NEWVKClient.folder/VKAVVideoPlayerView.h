/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VKClient-Structs.h"

@class NSURL, AVPlayerLayer, AVAsset, AVPlayerItem, NSObject, AVPlayer;
@protocol OS_dispatch_queue, VKVideoPlayerViewDelegate;

__attribute__((visibility("hidden")))
@interface VKAVVideoPlayerView : XXUnknownSuperclass {
	BOOL _looped;
	BOOL _pausedByParent;
	BOOL _isDisplaying;
	AVPlayerLayer* _playerLayer;
	int _outputType;
	id<VKVideoPlayerViewDelegate> _delegate;
	int _state;
	AVPlayer* _player;
	NSObject<OS_dispatch_queue>* _stateQueue;
	AVPlayerItem* _currentItem;
	AVAsset* _loadingAsset;
	id _playerPeriodicObserver;
	NSURL* _currentURL;
}
@property(assign, nonatomic) BOOL looped;
@property(assign, nonatomic) __weak id<VKVideoPlayerViewDelegate> delegate;
@property(readonly, assign, nonatomic) int outputType;
@property(readonly, assign, nonatomic) AVPlayerLayer* playerLayer;
@property(assign, nonatomic) BOOL isDisplaying;
@property(assign, nonatomic) BOOL pausedByParent;
@property(copy) NSURL* currentURL;
@property(retain, nonatomic) AVPlayer* player;
@property(retain, nonatomic) id playerPeriodicObserver;
@property(retain, nonatomic) AVAsset* loadingAsset;
@property(retain, nonatomic) AVPlayerItem* currentItem;
@property(assign, nonatomic) int state;
@property(readonly, assign, nonatomic) NSObject<OS_dispatch_queue>* stateQueue;
-(void).cxx_destruct;
-(BOOL)isFailed;
-(BOOL)isReadyForDisplay;
-(void)playerItemDidReachEnd:(id)playerItem;
-(void)preroll;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)unregisterForKVOWithItem:(id)item;
-(void)registerForKVOWithItem:(id)item;
-(void)playerReady:(id)ready;
-(void)__displayPlayerIfNeeded:(id)needed;
-(void)displayPlayerIfNeeded:(id)needed;
-(void)replaceURL:(id)url;
-(id)autoloadedKeys;
-(void)togglePlay;
-(void)dropPlayer;
-(void)drop;
-(BOOL)empty;
-(id)videoGravity;
-(void)setVideoGravity:(id)gravity;
-(BOOL)isPlaying;
-(void)stop;
-(void)play;
-(void)reuse;
-(void)registerTimeObserverIfNeeded;
-(void)layoutSublayersOfLayer:(id)layer;
-(void)onMainQueue:(id)queue;
-(void)onQueue:(id)queue;
-(id)initWithFrame:(CGRect)frame type:(int)type;
-(void)dealloc;
@end

