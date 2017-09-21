/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PHPhotoLibraryChangeObserver.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSString, NSIndexPath, PHCollectionList, NSDictionary;
@protocol VKPPAlbumsListDelegate;

@interface VKPPAlbumListController : XXUnknownSuperclass <PHPhotoLibraryChangeObserver> {
	id<VKPPAlbumsListDelegate> _delegate;
	NSString* _selectedCollectionId;
	int _supportedMediaTypes;
	NSArray* _collectionsFetchResults;
	NSArray* _collections;
	NSDictionary* _sortSubtypes;
	NSIndexPath* _selectedRow;
	PHCollectionList* _collectionList;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) int supportedMediaTypes;
@property(copy, nonatomic) NSString* selectedCollectionId;
@property(assign, nonatomic) __weak id<VKPPAlbumsListDelegate> delegate;
@property(assign, nonatomic) PHCollectionList* collectionList;
@property(retain, nonatomic) NSIndexPath* selectedRow;
@property(retain, nonatomic) NSDictionary* sortSubtypes;
@property(retain, nonatomic) NSArray* collections;
@property(retain, nonatomic) NSArray* collectionsFetchResults;
-(void).cxx_destruct;
-(void)photoLibraryDidChange:(id)photoLibrary;
-(void)dismissModal;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)localizedTitleSortOptions;
-(id)userAlbumsFetchResult;
-(id)smartAlbumsFetchResult;
-(id)itunesSyncedAlbumsFetchResult;
-(id)sharedAlbumsFetchResult;
-(void)reloadAlbumsDataAndTableView;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)dealloc;
-(id)initWithCollectionList:(id)collectionList;
-(int)preferredInterfaceOrientationForPresentation;
-(BOOL)shouldAutorotate;
-(unsigned)supportedInterfaceOrientations;
@end

