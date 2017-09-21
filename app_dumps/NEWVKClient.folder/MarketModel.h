/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ListModel.h"
#import "VKClient-Structs.h"

@class NSArray, MarketModelState, MarketModelFilterOptions, VKGroup;

__attribute__((visibility("hidden")))
@interface MarketModel : ListModel {
	unsigned _numberOfItemsInSections[2];
	BOOL _serverNumberOfCollectionsExceedsNumberInModel;
	BOOL _favorites;
	VKGroup* _group;
	MarketModelFilterOptions* _filterOptions;
	unsigned _currentMode;
	MarketModelState* _savedState;
}
@property(readonly, assign, nonatomic, getter=isInCollection) BOOL inCollection;
@property(readonly, assign, nonatomic, getter=isInFilterMode) BOOL inFilterMode;
@property(readonly, assign, nonatomic, getter=isInSearchMode) BOOL inSearchMode;
@property(readonly, assign, nonatomic, getter=isInDefaultMode) BOOL inDefaultMode;
@property(readonly, assign, nonatomic, getter=isFavorites) BOOL favorites;
@property(retain, nonatomic) MarketModelFilterOptions* filterOptions;
@property(assign, nonatomic) unsigned currentMode;
@property(retain, nonatomic) MarketModelState* savedState;
@property(assign, nonatomic) BOOL serverNumberOfCollectionsExceedsNumberInModel;
@property(readonly, copy, nonatomic) NSArray* collections;
@property(readonly, copy, nonatomic) NSArray* goods;
@property(retain, nonatomic) VKGroup* group;
+(id)with:(id)with filterOptions:(id)options inMode:(unsigned)mode;
-(void).cxx_destruct;
-(BOOL)shouldLoad:(id)load;
-(void)restoreState;
-(void)saveState;
-(void)resetForNewSearchQuery:(id)newSearchQuery filtering:(id)filtering sorting:(MarketSorting_t)sorting;
-(BOOL)switchToMode:(unsigned)mode;
-(unsigned)numberOfItemsInSection:(unsigned)section;
-(id)processCollections:(id)collections;
-(id)updatedIndex:(id)index data:(id)data context:(id)context;
-(id)process:(id)process;
-(id)listFromData:(id)data;
-(id)collectionsRequest;
-(BOOL)isFilteringContext;
-(BOOL)isSearchingContext;
-(id)requestForCurrentCollection;
-(id)favoritesRequestWithContext:(id)context;
-(id)marketRequestWithContext:(id)context;
-(id)requestForContext:(id)context;
-(id)request:(int)request count:(int)count;
-(id)countKey;
-(id)asFavorites;
@end

