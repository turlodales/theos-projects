/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "Cydia-Structs.h"


__attribute__((visibility("hidden")))
@interface CydiaRelation : NSObject {
	MenesObjectHandle<NSString, 0> relationship_;
	MenesObjectHandle<NSMutableArray, 0> clauses_;
}
+(BOOL)isKeyExcludedFromWebScript:(const char*)webScript;
+(id)_attributeKeys;
-(id).cxx_construct;
-(void).cxx_destruct;
-(void)addClause:(id)clause;
-(id)clauses;
-(id)relationship;
-(id)attributeKeys;
-(id)initWithIterator:(DepIterator*)iterator;
@end

