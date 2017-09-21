/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VKClient-Structs.h"
#import "UIScrollViewDelegate.h"

@class NSString, NSArray, AutopagingScrollViewDelegate, PlaceholderImagesGeneratingCache, NSTimer;

__attribute__((visibility("hidden")))
@interface AutopagingGalleryView : XXUnknownSuperclass <UIScrollViewDelegate> {
	BOOL _autopagingEnabled;
	NSArray* _imageURLs;
	NSArray* _imageViews;
	NSTimer* _autoscrollTimer;
	AutopagingScrollViewDelegate* _wrappingDelegate;
	PlaceholderImagesGeneratingCache* _placeholderImageCache;
	double _autopagingInterval;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(copy, nonatomic) NSArray* imageURLs;
@property(assign, nonatomic, getter=isAutopagingEnabled) BOOL autopagingEnabled;
@property(readonly, retain, nonatomic) PlaceholderImagesGeneratingCache* placeholderImageCache;
@property(retain, nonatomic) AutopagingScrollViewDelegate* wrappingDelegate;
@property(readonly, assign, nonatomic) float pageWidth;
@property(readonly, assign, nonatomic) unsigned currentPage;
@property(retain, nonatomic) NSTimer* autoscrollTimer;
@property(readonly, assign, nonatomic) double autopagingInterval;
@property(copy, nonatomic) NSArray* imageViews;
-(void).cxx_destruct;
-(unsigned)itemIndexForPoint:(CGPoint)point;
-(void)loadImageAtPage:(unsigned)page;
-(void)layoutSubviews;
-(id)imageViewAtIndex:(unsigned)index ofSize:(CGSize)size;
-(id)bindURLs:(id)urls toImageViews:(id)imageViews;
-(id)imageViewsWithCurrentNumber:(unsigned)currentNumber requiredNumber:(unsigned)number withSize:(CGSize)size;
-(id)attachFakesToImageViews:(id)imageViews withSize:(CGSize)size;
-(void)setupImages;
-(CGPoint)replacingContentOffsetForPageIndex:(unsigned)pageIndex;
-(CGPoint)contentOffsetForPageIndex:(unsigned)pageIndex;
-(BOOL)scrollToNextItem;
-(BOOL)shouldHaveCarousel;
-(BOOL)shouldAutopage;
-(void)tick:(id)tick;
-(void)stopAutopagingTimer;
-(id)createScheduledTimer;
-(void)startAutopagingTimer;
-(id)delegate;
-(void)setDelegate:(id)delegate;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame autopagingInterval:(double)interval;
@end

