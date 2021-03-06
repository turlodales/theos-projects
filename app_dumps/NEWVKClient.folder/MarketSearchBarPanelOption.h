/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VKClient-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MarketSearchBarPanelOption : XXUnknownSuperclass {
	BOOL _showImage;
	NSString* _title;
	MarketSorting_t _option;
}
@property(readonly, assign, nonatomic, getter=shouldShowImage) BOOL showImage;
@property(readonly, copy, nonatomic) NSString* title;
@property(readonly, assign, nonatomic) MarketSorting_t option;
+(id)optionWithValue:(MarketSorting_t)value title:(id)title showImage:(BOOL)image;
-(void).cxx_destruct;
-(id)initWithOption:(MarketSorting_t)option title:(id)title showImage:(BOOL)image;
@end

