/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModelContext.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface ListModelContext : ModelContext {
	int _offset;
	int _page;
	NSNumber* _total;
	int _loaded;
}
@property(assign, nonatomic) int loaded;
@property(retain, nonatomic) NSNumber* total;
@property(assign, nonatomic) int page;
@property(assign, nonatomic) int offset;
-(void).cxx_destruct;
-(BOOL)shouldLoad:(int)load;
-(void)spawnCopy:(id)copy;
@end

