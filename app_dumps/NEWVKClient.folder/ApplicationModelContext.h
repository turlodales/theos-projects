/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "FeedModelContext.h"


__attribute__((visibility("hidden")))
@interface ApplicationModelContext : FeedModelContext {
	BOOL _wallMode;
	unsigned _requestsSectionIndex;
}
@property(assign, nonatomic) unsigned requestsSectionIndex;
@property(assign, nonatomic) BOOL wallMode;
-(void)spawnCopy:(id)copy;
@end

