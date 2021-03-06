/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSURL, NSString, VKClient, NSDictionary, NSNumber, UploadBatchContext;

__attribute__((visibility("hidden")))
@interface ClientBasedUploadContext : XXUnknownSuperclass {
	id _result;
	VKClient* _client;
	UploadBatchContext* _batch;
	NSString* _filename;
	NSNumber* _uploadDataSize;
	NSURL* _thumbnailURL;
	NSDictionary* _additionalParameters;
	int _error;
}
@property(assign, nonatomic) int error;
@property(retain, nonatomic) NSDictionary* additionalParameters;
@property(retain, nonatomic) NSURL* thumbnailURL;
@property(retain, nonatomic) NSNumber* uploadDataSize;
@property(retain, nonatomic) NSString* filename;
@property(retain, nonatomic) UploadBatchContext* batch;
@property(retain, nonatomic) VKClient* client;
@property(retain, nonatomic) id result;
+(id)contextWithClient:(id)client;
-(void).cxx_destruct;
-(void)cleanTemporaryFiles;
-(id)createTemporaryFileURLWithExtension:(id)extension;
-(BOOL)handleResultServerData:(id)data uploadData:(id)data2 saveData:(id)data3;
-(id)requestForSaving:(id)saving;
-(id)uploadBodyFieldName;
-(id)uploadURLToUse:(id)use;
-(void)loadUploadData:(id)data;
-(id)requestForUploadServer;
-(id)createOperation;
-(id)withBatchContext:(id)batchContext;
-(void)dealloc;
@end

