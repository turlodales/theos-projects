/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AudioOwnerProtocol.h"
#import "VKGroup.h"

@class NSString, NSNumber;

__attribute__((visibility("hidden")))
@interface VKAudioGroup : VKGroup <AudioOwnerProtocol> {
	NSString* _photo_200;
}
@property(readonly, assign, nonatomic) int flags;
@property(readonly, assign, nonatomic) int type;
@property(readonly, assign, nonatomic) int deactivated;
@property(readonly, assign, nonatomic) int sex;
@property(readonly, retain, nonatomic) NSString* photo;
@property(readonly, retain, nonatomic) NSString* name;
@property(readonly, retain, nonatomic) NSNumber* source_id;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(copy, nonatomic) NSString* photo_200;
-(void).cxx_destruct;
-(Class)cellClass;
-(BOOL)process:(id)process context:(id)context;
@end

