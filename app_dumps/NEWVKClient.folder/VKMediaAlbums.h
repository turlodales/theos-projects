/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKTitleable.h"
#import "VKDomainDerived.h"

@class NSString, NSNumber;

__attribute__((visibility("hidden")))
@interface VKMediaAlbums : VKDomainDerived <VKTitleable> {
	BOOL _video;
	NSNumber* _oid;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL video;
@property(retain, nonatomic) NSNumber* oid;
+(id)owner:(id)owner video:(BOOL)video;
-(void).cxx_destruct;
-(BOOL)disclosure;
-(id)title;
-(Class)rendererClass;
@end
