/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UICollectionViewDataSource.h"
#import "VKMCell.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "VKClient-Structs.h"

@class NSString, NSMutableDictionary, VKAPIAppWithExpandableInfo, UIButton, UICollectionView, TextKitLabelInteractive, PlaceholderImagesGeneratingCache;

__attribute__((visibility("hidden")))
@interface AppInfoCell : VKMCell <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
	TextKitLabelInteractive* _descriptionView;
	UIButton* _expandButton;
	UICollectionView* _gallery;
	NSMutableDictionary* _images;
	PlaceholderImagesGeneratingCache* _placeholderImages;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, retain, nonatomic) VKAPIAppWithExpandableInfo* domain;
@property(readonly, retain, nonatomic) PlaceholderImagesGeneratingCache* placeholderImages;
@property(readonly, retain, nonatomic) NSString* galleryCellIdentifier;
@property(readonly, retain, nonatomic) NSMutableDictionary* images;
@property(readonly, retain, nonatomic) UICollectionView* gallery;
@property(readonly, retain, nonatomic) UIButton* expandButton;
@property(readonly, retain, nonatomic) TextKitLabelInteractive* descriptionView;
+(void)prerender:(id)prerender;
+(CGSize)maxGallerySize;
+(float)maxAvailableScreenshotHeightFromDomain:(id)domain boundedToSize:(CGSize)size;
+(CGSize)cellSizeForDomain:(id)domain;
+(id)renderedTextForDomain:(id)domain;
-(void).cxx_destruct;
-(id)screenshotAtIndex:(unsigned)index;
-(CGSize)calculateCellSizeForScreenshotSize:(CGSize)screenshotSize;
-(CGSize)collectionView:(id)view layout:(id)layout sizeForItemAtIndexPath:(id)indexPath;
-(id)applyScreenshotAtIndex:(unsigned)index toCell:(id)cell;
-(id)collectionView:(id)view cellForItemAtIndexPath:(id)indexPath;
-(int)collectionView:(id)view numberOfItemsInSection:(int)section;
-(void)attach:(id)attach expectedReuse:(double)reuse;
-(void)actionExpand:(id)expand;
-(void)layoutSubviews;
-(id)createSubviews;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end

