/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MREvent.h"


@interface MRPurchaseEvent : MREvent {
}
+(BOOL)fillDictionaryWithProduct:(id)product transaction:(id)transaction dictionary:(id)dictionary;
+(BOOL)isCorrectProduct:(id)product transaction:(id)transaction;
+(id)purchaseEventWithProduct:(id)product transaction:(id)transaction params:(id)params;
-(id)asJsonDictionary;
-(id)initWithWithProduct:(id)product transaction:(id)transaction params:(id)params;
@end

