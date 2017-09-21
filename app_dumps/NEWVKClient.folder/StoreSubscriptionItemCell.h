/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMCell.h"
#import "VKMImageLoaderDelegate.h"

@class NSString, VKMImageLoader;
@protocol VKImageFilter;

__attribute__((visibility("hidden")))
@interface StoreSubscriptionItemCell : VKMCell <VKMImageLoaderDelegate> {
	VKMImageLoader* _loader;
	id<VKImageFilter> _filter;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) id<VKImageFilter> filter;
@property(retain, nonatomic) VKMImageLoader* loader;
+(void)prerender:(id)prerender;
-(void).cxx_destruct;
-(void)attach:(id)attach expectedReuse:(double)reuse;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)loader:(id)loader complete:(id)complete;
-(BOOL)_showSeparatorAtTopOfSection;
-(BOOL)_shouldHideSeparator;
-(void)dealloc;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end

