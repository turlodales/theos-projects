/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VK_PagedRequestBase.h"

@class VK_AlbumResponse, NSString;

__attribute__((visibility("hidden")))
@interface VK_AlbumRequest : VK_PagedRequestBase {
	BOOL _shuffle;
	NSString* _albumId;
}
@property(readonly, assign, nonatomic) VK_AlbumResponse* response;
@property(assign, nonatomic) BOOL shuffle;
@property(retain, nonatomic) NSString* albumId;
-(void).cxx_destruct;
-(id)internalResponseModelMapping;
-(void)internalInitRequestParams:(id)params;
-(id)internalBuildRequestCommand;
-(void)internalValidateParams;
@end
