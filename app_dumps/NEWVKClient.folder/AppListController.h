/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMLiveController.h"
#import "VKClient-Structs.h"

@class AppsListModel;

__attribute__((visibility("hidden")))
@interface AppListController : VKMLiveController {
	BOOL tracked;
}
@property(retain, nonatomic) AppsListModel* model;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
@end

