/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSURL, AVAssetWriterInput, NSDictionary, NSObject, AVAssetWriter;
@protocol OS_dispatch_queue, MovieRecorderDelegate;

__attribute__((visibility("hidden")))
@interface MovieRecorder : XXUnknownSuperclass {
	int _status;
	NSObject<OS_dispatch_queue>* _writingQueue;
	NSURL* _URL;
	AVAssetWriter* _assetWriter;
	BOOL _haveStartedSession;
	opaqueCMFormatDescription* _audioTrackSourceFormatDescription;
	NSDictionary* _audioTrackSettings;
	AVAssetWriterInput* _audioInput;
	opaqueCMFormatDescription* _videoTrackSourceFormatDescription;
	CGAffineTransform _videoTrackTransform;
	NSDictionary* _videoTrackSettings;
	AVAssetWriterInput* _videoInput;
	id<MovieRecorderDelegate> _delegate;
	NSObject<OS_dispatch_queue>* _delegateCallbackQueue;
}
+(id)cannotSetupInputError;
-(void).cxx_destruct;
-(void)teardownAssetWriterAndInputs;
-(BOOL)setupAssetWriterVideoInputWithSourceFormatDescription:(opaqueCMFormatDescription*)sourceFormatDescription transform:(CGAffineTransform)transform settings:(id)settings error:(id*)error;
-(BOOL)setupAssetWriterAudioInputWithSourceFormatDescription:(opaqueCMFormatDescription*)sourceFormatDescription settings:(id)settings error:(id*)error;
-(void)transitionToStatus:(int)status error:(id)error;
-(void)appendSampleBuffer:(opaqueCMSampleBuffer*)buffer ofMediaType:(id)mediaType;
-(void)dealloc;
-(void)finishRecording;
-(void)appendAudioSampleBuffer:(opaqueCMSampleBuffer*)buffer;
-(void)appendVideoPixelBuffer:(CVBufferRef)buffer withPresentationTime:(XXStruct_pwHToB)presentationTime;
-(void)appendVideoSampleBuffer:(opaqueCMSampleBuffer*)buffer;
-(void)prepareToRecord;
-(void)addAudioTrackWithSourceFormatDescription:(opaqueCMFormatDescription*)sourceFormatDescription settings:(id)settings;
-(void)addVideoTrackWithSourceFormatDescription:(opaqueCMFormatDescription*)sourceFormatDescription transform:(CGAffineTransform)transform settings:(id)settings;
-(id)initWithURL:(id)url delegate:(id)delegate callbackQueue:(id)queue;
@end

