/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModelActionAdd.h"

@class VKDoc;

__attribute__((visibility("hidden")))
@interface ModelActionDocsAdd : ModelActionAdd {
}
@property(retain, nonatomic) VKDoc* added;
@property(retain, nonatomic) VKDoc* target;
+(int)domainType;
-(id)actionSuccessMessage:(id)message;
-(BOOL)actionResultForData:(id)data context:(id)context;
-(id)actionRequestForContext:(id)context;
@end

