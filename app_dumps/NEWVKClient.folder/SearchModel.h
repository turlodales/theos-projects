/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ListModel.h"
#import "ModelObserver.h"
#import "NSObject.h"
#import "SearchModel.h"

@class NSArray, NSString, LocalSearchModel, SearchModelContext;

@protocol SearchModel <NSObject>
@property(readonly, retain, nonatomic) id<SearchModel> localSearch;
@property(readonly, assign, nonatomic) int searchRenderContext;
@property(readonly, retain, nonatomic) NSArray* searchScopes;
@property(readonly, assign, nonatomic) int searchScope;
@property(readonly, copy, nonatomic) NSString* searchQuery;
-(void)clearSearchQuery;
-(void)clearResults;
-(void)searchWithScope:(int)scope;
-(void)searchWithQuery:(id)query;
@end

__attribute__((visibility("hidden")))
@interface SearchModel : ListModel <SearchModel, ModelObserver> {
	NSString* _searchQuery;
	int _searchScope;
	int _searchRenderContext;
	LocalSearchModel* _localSearch;
}
@property(readonly, retain, nonatomic) NSArray* searchScopes;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) LocalSearchModel* localSearch;
@property(assign, nonatomic) int searchRenderContext;
@property(retain, nonatomic) SearchModelContext* lastContext;
@property(assign, nonatomic) int searchScope;
@property(copy, nonatomic) NSString* searchQuery;
-(void).cxx_destruct;
-(void)model:(id)model willStartLoadingWithContext:(id)context;
-(void)modelLoadingChanged:(id)changed;
-(void)model:(id)model updated:(id)updated;
-(id)localResults;
-(void)clearSearchQuery;
-(void)clearResults;
-(void)searchWithScope:(int)scope;
-(void)searchWithQuery:(id)query;
-(id)resultStatus;
-(id)countString;
-(unsigned)count;
-(id)updatedIndex:(id)index data:(id)data context:(id)context;
-(id)requestBuilderForContext:(id)context;
-(id)requestForContext:(id)context;
-(id)spawnContext:(id)context;
-(int)searchPageSize:(BOOL)size;
-(id)method;
-(id)withRenderContext:(int)renderContext;
@end

