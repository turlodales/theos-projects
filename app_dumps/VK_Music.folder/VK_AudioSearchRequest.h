/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VK_SearchRequestBase.h"

@class VK_AudioSearchResponse;

__attribute__((visibility("hidden")))
@interface VK_AudioSearchRequest : VK_SearchRequestBase {
	BOOL _byPerformer;
}
@property(readonly, assign, nonatomic) VK_AudioSearchResponse* response;
@property(assign, nonatomic) BOOL byPerformer;
-(id)internalResponseModelMapping;
-(id)internalBuildRequestCommand;
-(void)internalInitRequestParams:(id)params;
@end
