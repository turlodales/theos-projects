/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UploadContext.h"
#import "IVideoUploadContext.h"

@class NSString, AVAssetExportSession, VKPrivacySetting, VKVideo, NSURL, NSData, PHAsset, NSNumber;

__attribute__((visibility("hidden")))
@interface VideoUploadContext : UploadContext <IVideoUploadContext> {
	BOOL _converted;
	NSURL* _fileURL;
	VKVideo* _video;
	PHAsset* _asset;
	VKPrivacySetting* _privacy_view;
	VKPrivacySetting* _privacy_comment;
	NSNumber* _dialog_id;
	NSNumber* _album_id;
	NSData* _uploadResumeData;
	int _target;
	float _videoDuration;
	AVAssetExportSession* _exportSession;
	long long _totalBytesUploaded;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) long long totalBytesUploaded;
@property(assign, nonatomic) int target;
@property(retain, nonatomic) NSData* uploadResumeData;
@property(retain, nonatomic) NSNumber* album_id;
@property(retain, nonatomic) NSNumber* dialog_id;
@property(retain, nonatomic) VKPrivacySetting* privacy_comment;
@property(retain, nonatomic) VKPrivacySetting* privacy_view;
@property(retain, nonatomic) AVAssetExportSession* exportSession;
@property(assign, nonatomic) BOOL converted;
@property(assign, nonatomic) float videoDuration;
@property(retain, nonatomic) PHAsset* asset;
@property(retain, nonatomic) VKVideo* video;
@property(retain, nonatomic) NSURL* fileURL;
-(void).cxx_destruct;
-(void)saveVideoThumbnail;
-(id)createOperation;
-(BOOL)handleResultServerData:(id)data uploadData:(id)data2 saveData:(id)data3;
-(id)requestForSaving:(id)saving;
-(id)uploadBodyFieldName;
-(void)getAVAssetForSessionPreset:(id)sessionPreset withCompletition:(id)completition;
-(void)loadUploadData:(id)data;
-(id)requestForUploadServer;
-(void)fetchVideoMetaInfo;
-(id)withDialog:(id)dialog asset:(id)asset video:(id)video;
-(id)withPrivacyView:(id)privacyView privacyComment:(id)comment target:(int)target asset:(id)asset video:(id)video albumId:(id)anId;
-(void)cleanTemporaryFiles;
-(void)dealloc;
@end

