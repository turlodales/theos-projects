/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "FilteredPackageListController.h"
#import "Cydia-Structs.h"
#import "UISearchBarDelegate.h"


__attribute__((visibility("hidden")))
@interface SearchController : FilteredPackageListController <UISearchBarDelegate> {
	MenesObjectHandle<UISearchBar, 1> search_;
	BOOL searchloaded_;
	bool summary_;
}
-(id).cxx_construct;
-(void).cxx_destruct;
-(void)didSelectPackage:(id)package;
-(void)reloadData;
-(void)viewDidAppear:(BOOL)view;
-(id)initWithDatabase:(id)database query:(id)query;
-(bool)showsSections;
-(bool)isSummarized;
-(bool)shouldBlock;
-(bool)shouldYield;
-(void)searchBar:(id)bar textDidChange:(id)text;
-(void)searchBarSearchButtonClicked:(id)clicked;
-(void)searchBarCancelButtonClicked:(id)clicked;
-(void)searchBarButtonClicked:(id)clicked;
-(void)searchBarTextDidBeginEditing:(id)searchBarText;
-(void)usePrefix:(id)prefix;
-(void)useSearch;
-(id)termsForQuery:(id)query;
-(id)navigationURL;
-(id)referrerURL;
@end

