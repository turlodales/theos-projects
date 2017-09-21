/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VKClient-Structs.h"

@class MainModel, VKPPModel, VKPPService, VKPPSelector, NSDictionary, VKGiftsContext, NSNumber;
@protocol VKAPModelDelegate;

__attribute__((visibility("hidden")))
@interface VKAPModel : XXUnknownSuperclass {
	id _imageSelectionHandler;
	id _attachmentsSelectionHandler;
	id _locationAttachHandler;
	id _completeHandler;
	id _attachVideoAction;
	id _docUploadAction;
	id _graffitiUploadAction;
	id _graffitiSelectionAction;
	NSNumber* _did;
	MainModel* _main;
	VKGiftsContext* _giftContext;
	NSDictionary* _tabs;
	VKPPService* _service;
	VKPPSelector* _selector;
	VKPPModel* _vkppModel;
	int _selectedTab;
	int _initialTab;
	int _mapAttachThumbSize;
	id<VKAPModelDelegate> _delegate;
}
@property(assign, nonatomic) __weak id<VKAPModelDelegate> delegate;
@property(assign, nonatomic) int mapAttachThumbSize;
@property(retain, nonatomic) VKGiftsContext* giftContext;
@property(retain, nonatomic) MainModel* main;
@property(retain, nonatomic) NSNumber* did;
@property(copy, nonatomic) id graffitiSelectionAction;
@property(copy, nonatomic) id graffitiUploadAction;
@property(copy, nonatomic) id docUploadAction;
@property(copy, nonatomic) id attachVideoAction;
@property(copy, nonatomic) id completeHandler;
@property(copy, nonatomic) id locationAttachHandler;
@property(copy, nonatomic) id attachmentsSelectionHandler;
@property(copy, nonatomic) id imageSelectionHandler;
@property(retain, nonatomic) VKPPModel* vkppModel;
@property(retain, nonatomic) VKPPSelector* selector;
@property(retain, nonatomic) VKPPService* service;
@property(assign, nonatomic) int initialTab;
@property(assign, nonatomic) int selectedTab;
@property(retain, nonatomic) NSDictionary* tabs;
+(id)keyForTab:(int)tab;
-(void).cxx_destruct;
-(void)changeTab:(int)tab;
-(id)tabForIndex:(int)index;
-(id)getTabViewController:(int)controller;
-(BOOL)thereIsATab:(int)tab;
-(void)dismissPicker;
-(void)attachLocation:(CLLocationCoordinate2D)location withThumb:(id)thumb;
-(void)sendSelectedGraffiti:(id)graffiti;
-(void)sendGraffitiImage:(id)image;
-(void)uploadDocs:(id)docs;
-(void)attachObject:(id)object;
-(void)handleComplete:(BOOL)complete;
-(void)handleComplete;
-(void)handleCompleteNotification:(id)notification;
-(void)cancelToolbarTap;
-(void)updateToolbar;
-(void)updateNavigationTitle:(id)title;
-(void)notificationSelectLimit:(id)limit;
-(void)notificationAssetSelected:(id)selected;
-(void)dealloc;
-(void)initializeTabsWithOptions:(int)options;
-(id)initWithSelectionLimit:(unsigned)selectionLimit;
@end

