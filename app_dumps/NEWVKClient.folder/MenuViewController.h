/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMLiveController.h"
#import "VKClient-Structs.h"

@class TitleMenuCell, NSArray, NSIndexPath, UITableViewCell, UserMenuCell;

__attribute__((visibility("hidden")))
@interface MenuViewController : VKMLiveController {
	NSArray* _menu;
	UserMenuCell* _cellUser;
	TitleMenuCell* _cellFriends;
	TitleMenuCell* _cellGroups;
	TitleMenuCell* _cellGames;
	TitleMenuCell* _cellPhotos;
	TitleMenuCell* _cellVideos;
	TitleMenuCell* _cellAudio;
	TitleMenuCell* _cellBookmarks;
	TitleMenuCell* _cellDocs;
	TitleMenuCell* _cellP2P;
	NSIndexPath* _skipSelect;
	UITableViewCell* _selected;
	NSArray* _notifications;
}
@property(retain, nonatomic) NSArray* notifications;
@property(retain, nonatomic) UITableViewCell* selected;
@property(retain, nonatomic) NSIndexPath* skipSelect;
@property(retain, nonatomic) TitleMenuCell* cellP2P;
@property(retain, nonatomic) TitleMenuCell* cellDocs;
@property(retain, nonatomic) TitleMenuCell* cellBookmarks;
@property(retain, nonatomic) TitleMenuCell* cellAudio;
@property(retain, nonatomic) TitleMenuCell* cellVideos;
@property(retain, nonatomic) TitleMenuCell* cellPhotos;
@property(retain, nonatomic) TitleMenuCell* cellGames;
@property(retain, nonatomic) TitleMenuCell* cellGroups;
@property(retain, nonatomic) TitleMenuCell* cellFriends;
@property(retain, nonatomic) UserMenuCell* cellUser;
@property(retain, nonatomic) NSArray* menu;
-(void).cxx_destruct;
-(void)notificationContentSizeChanged;
-(void)notificationActivity:(id)activity;
-(void)updateNotifications;
-(void)handleActivityUpdate:(int)update;
-(void)handleCellSelect:(id)select badge:(BOOL)badge reset:(BOOL)reset;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(void)tableView:(id)view willDisplayHeaderView:(id)view2 forSection:(int)section;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(id)VKMControllerStatsRef;
-(BOOL)VKMScrollViewDisablePTR;
-(void)VKMScrollViewReset;
-(BOOL)VKMControllerShowPlayer;
-(int)VKMTableSearchMode;
-(Class)VKMTableViewClass;
-(int)VKMTableStyle;
-(void)resetMenu;
-(void)actionBadge:(id)badge;
-(void)rebuildMenu;
-(void)actionFriendsBirthdays:(id)birthdays;
-(void)actionSettings:(id)settings;
-(void)viewDidLoad;
-(void)loadView;
-(id)initWithMain:(id)main andModel:(id)model;
-(void)dealloc;
@end

