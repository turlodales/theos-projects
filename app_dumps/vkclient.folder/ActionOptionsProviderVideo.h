/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ActionOptionsProviderActionBuilder.h"

@class VKVideo;

__attribute__((visibility("hidden")))
@interface ActionOptionsProviderVideo : ActionOptionsProviderActionBuilder {
	VKVideo* _video;
}
@property(readonly, assign, nonatomic) VKVideo* video;
+(id)video:(id)video;
-(void).cxx_destruct;
-(void)fillOptionsForBuilder:(id)builder context:(id)context;
-(BOOL)canAddToMyVideos;
-(BOOL)added;
-(id)initWithVideo:(id)video;
@end
