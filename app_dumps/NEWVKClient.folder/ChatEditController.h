/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMLiveController.h"
#import "MessagesModelObserver.h"
#import "VKClient-Structs.h"

@class ChatEditHeaderView, NSString, ChatEditModel, NSDate;

__attribute__((visibility("hidden")))
@interface ChatEditController : VKMLiveController <MessagesModelObserver> {
	BOOL _realEditing;
	ChatEditHeaderView* _header;
	NSDate* _ownUpdate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) ChatEditModel* model;
@property(assign, nonatomic) BOOL realEditing;
@property(retain, nonatomic) NSDate* ownUpdate;
@property(retain, nonatomic) ChatEditHeaderView* header;
-(void).cxx_destruct;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view shouldIndentWhileEditingRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;
-(id)chatUserAtIndexPath:(id)indexPath;
-(float)VKMTableCellSeparatorInsetForIndexPath:(id)indexPath;
-(BOOL)VKMRoute:(id)route context:(id)context;
-(void)actionPhoto:(id)photo;
-(void)setupImageView:(BOOL)view;
-(void)VKMTableUpdatedIndex;
-(void)viewDidLoad;
-(int)VKMTableStyle;
-(void)modelUpdatedDialogsData:(id)data;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
-(void)dealloc;
-(id)initWithMain:(id)main andModel:(id)model;
@end

