/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import "VKMSearchController.h"
#import "VKMLoaderDelegate.h"

@class LoadingFooterView, VKMLoader, MainModel, NSString;

__attribute__((visibility("hidden")))
@interface DialogsSearchController : VKMSearchController <VKMLoaderDelegate> {
	BOOL _allowMessages;
	BOOL _shouldDismiss;
	BOOL _messages;
	MainModel* _main;
	VKMLoader* _loader;
	VKMLoader* _nextLoader;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL shouldDismiss;
@property(assign, nonatomic) BOOL allowMessages;
@property(retain, nonatomic) MainModel* main;
@property(retain, nonatomic) LoadingFooterView* footer;
@property(retain, nonatomic) VKMLoader* nextLoader;
@property(retain, nonatomic) VKMLoader* loader;
@property(assign, nonatomic) BOOL messages;
-(void).cxx_destruct;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(id)modelAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)searchDisplayController:(id)controller didShowSearchResultsTableView:(id)view;
-(void)searchDisplayControllerWillBeginSearch:(id)searchDisplayController;
-(void)searchDisplayController:(id)controller willUnloadSearchResultsTableView:(id)view;
-(void)searchDisplayController:(id)controller didLoadSearchResultsTableView:(id)view;
-(BOOL)searchDisplayController:(id)controller shouldReloadTableForSearchScope:(int)searchScope;
-(BOOL)searchDisplayController:(id)controller shouldReloadTableForSearchString:(id)searchString;
-(void)load:(id)load;
-(void)loaderUpdated:(id)updated;
-(void)loaded;
-(void)updateFooter;
-(void)cancel;
-(void)customizeSearchBar:(id)bar;
-(void)dealloc;
@end

