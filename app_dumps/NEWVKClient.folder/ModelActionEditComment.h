/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModelActionEdit.h"

@class VKComment, VKIdentity;

__attribute__((visibility("hidden")))
@interface ModelActionEditComment : ModelActionEdit {
	VKIdentity* _parentIdentity;
}
@property(retain, nonatomic) VKIdentity* parentIdentity;
@property(retain, nonatomic) VKComment* target;
+(int)domainType;
-(void).cxx_destruct;
-(BOOL)actionResultForData:(id)data context:(id)context;
-(id)actionRequestForContext:(id)context;
@end

