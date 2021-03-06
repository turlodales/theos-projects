/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AsyncOperation.h"

@class ClientBasedUploadContext;

__attribute__((visibility("hidden")))
@interface ClientBasedUploadOperation : AsyncOperation {
	ClientBasedUploadContext* _context;
}
@property(retain, nonatomic) ClientBasedUploadContext* context;
-(void).cxx_destruct;
-(void)phaseSaveServer:(id)server upload:(id)upload;
-(void)phaseUploadServer:(id)server;
-(id)client;
-(void)runAsync;
@end

