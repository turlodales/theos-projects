/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VKClient-Structs.h"

@class RecentOrderList;
@protocol MasksCacheDelegate;

__attribute__((visibility("hidden")))
@interface MasksCache : XXUnknownSuperclass {
	id<MasksCacheDelegate> _delegate;
	RecentOrderList* _cacheTrakingList;
}
@property(assign, nonatomic) __weak id<MasksCacheDelegate> delegate;
@property(retain, nonatomic) RecentOrderList* cacheTrakingList;
+(void)initialize;
-(void).cxx_destruct;
-(void)cleanCachedMasksNotPresentedInTrackingList;
-(id)cachedMasksPaths;
-(id)directoryPathForMask:(id)mask;
-(id)cachedMasksDirectoryPath;
-(NSRange)calculateInfo;
-(id)jsonPathForMaskIfCached:(id)maskIfCached;
-(void)clearAll;
-(BOOL)addNewMask:(id)mask zipPath:(id)path;
-(void)hoistExistedMask:(id)mask;
-(id)init;
@end
