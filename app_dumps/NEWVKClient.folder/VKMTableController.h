/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "VKClient-Structs.h"
#import "VKMScrollViewController.h"

@class VKMTableViewSearchHeaderView, NSString, ReusableViewsPool, UITableView, UIColor;

__attribute__((visibility("hidden")))
@interface VKMTableController : VKMScrollViewController <UITableViewDataSource, UITableViewDelegate> {
	UITableView* _tableView;
	UIColor* _separatorColor;
	ReusableViewsPool* _reusableViewsPool;
	VKMTableViewSearchHeaderView* _searchHeader;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, retain, nonatomic) ReusableViewsPool* reusableViewsPool;
@property(retain, nonatomic) UIColor* separatorColor;
@property(retain, nonatomic) VKMTableViewSearchHeaderView* searchHeader;
@property(retain, nonatomic) UITableView* tableView;
-(void).cxx_destruct;
-(void)redrawSectionFooters;
-(void)redrawSectionHeadersWithUppercasedTitle:(BOOL)uppercasedTitle;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)tableView:(id)view sectionForSectionIndexTitle:(id)sectionIndexTitle atIndex:(int)index;
-(id)sectionIndexTitlesForTableView:(id)tableView;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)VKMTablePerformDeselectOnViewWillAppear:(BOOL)vkmtablePerformDeselectOnView;
-(float)VKMTableCellSeparatorInsetForIndexPath:(id)indexPath;
-(void)model:(id)model updated:(id)updated;
-(void)scrollTable:(float)table;
-(void)actionSearchScopeChanged:(id)changed;
-(int)VKMControllerStatusBarStyle;
-(void)VKMTableUpdatedIndex;
-(void)VKMTableViewed:(id)viewed;
-(void)VKMTableDiscovered:(id)discovered cell:(id)cell;
-(void)VKMSetupSearchScopes:(id)scopes;
-(void)VKMScrollViewSetFooter:(id)footer;
-(void)VKMScrollViewUpdateTeaserViewInsets;
-(id)VKMScrollView;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
-(void)__setEditing:(BOOL)editing animated:(BOOL)animated;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)loadView;
-(Class)VKMTableViewClass;
-(int)VKMTableStyle;
-(void)dealloc;
-(id)initWithMain:(id)main andModel:(id)model;
@end
