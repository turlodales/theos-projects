/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModelAction.h"

@class VKPrivacySetting, NSArray;

__attribute__((visibility("hidden")))
@interface ModelActionSetPrivacy : ModelAction {
	NSArray* _privacyValue;
	NSArray* _preparedValue;
}
@property(retain, nonatomic) VKPrivacySetting* target;
@property(copy, nonatomic) NSArray* preparedValue;
@property(copy, nonatomic) NSArray* privacyValue;
+(int)domainType;
-(void).cxx_destruct;
-(BOOL)actionResultForData:(id)data context:(id)context;
-(id)actionRequestForContext:(id)context;
-(id)init;
-(id)setupPreparedValue:(id)value;
-(id)setupNewValue:(id)value;
@end

