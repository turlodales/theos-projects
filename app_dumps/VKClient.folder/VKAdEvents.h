/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VKAdEvents : XXUnknownSuperclass {
	NSString* _iden;
	NSDictionary* _eventsMap;
}
@property(readonly, retain, nonatomic) NSDictionary* eventsMap;
@property(readonly, retain, nonatomic) NSString* iden;
+(id)iden:(id)iden events:(id)events;
-(void).cxx_destruct;
-(id)urlsForEvent:(int)event;
-(id)initWithIden:(id)iden events:(id)events;
@end
