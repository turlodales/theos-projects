/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIScrollViewAccessibilityDelegate.h"
#import "VKClient-Structs.h"
#import "VKMLiveController.h"
#import "VKVideoStatsProvider.h"

@class UITableViewMiddleObjectTracker, NSString;

__attribute__((visibility("hidden")))
@interface FeedController : VKMLiveController <UIScrollViewAccessibilityDelegate, VKVideoStatsProvider> {
	UITableViewMiddleObjectTracker* _midPostTracker;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UITableViewMiddleObjectTracker* midPostTracker;
-(void).cxx_destruct;
-(id)statsForVideo:(id)video;
-(BOOL)accessibilityScroll:(int)scroll;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(int)VKMTableStyle;
-(id)renderContextForModel:(id)model;
-(id)VKMControllerStatsRef;
-(int)VKMLiveAudioContext;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)notificationViewPostTime:(id)time;
-(void)notificationTrackerResignActive:(id)active;
-(void)statsTrackViewPostTimeForPostId:(id)postId duration:(double)duration trackCode:(id)code;
-(void)statsTrackViewPostTimeForPost:(id)post duration:(double)duration;
-(void)attachPostTracker:(id)tracker;
-(void)detachPostTracker:(id)tracker;
-(void)viewDidLoad;
-(UIEdgeInsets)VKMControllerChromeInsetsAdjust:(UIEdgeInsets)adjust;
-(id)initWithMain:(id)main andModel:(id)model;
-(void)dealloc;
@end
