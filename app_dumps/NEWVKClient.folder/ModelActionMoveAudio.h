/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModelActionMove.h"

@class VKAudio;

__attribute__((visibility("hidden")))
@interface ModelActionMoveAudio : ModelActionMove {
}
@property(retain, nonatomic) VKAudio* target;
+(int)domainType;
-(BOOL)actionResultForData:(id)data context:(id)context;
-(id)actionRequestForContext:(id)context;
@end

