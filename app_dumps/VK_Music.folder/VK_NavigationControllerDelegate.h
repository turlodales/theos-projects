/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UINavigationControllerDelegate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VK_NavigationControllerDelegate : XXUnknownSuperclass <UINavigationControllerDelegate> {
	BOOL _interactivePopGestureRecognizerEnabled;
	BOOL _canPushNextViewController;
	id _onViewControllerDidShowBlock;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(copy, nonatomic) id onViewControllerDidShowBlock;
@property(readonly, assign, nonatomic) BOOL canPushNextViewController;
@property(assign, nonatomic) BOOL interactivePopGestureRecognizerEnabled;
-(void).cxx_destruct;
-(id)navigationController:(id)controller animationControllerForOperation:(int)operation fromViewController:(id)viewController toViewController:(id)viewController4;
-(void)navigationController:(id)controller didShowViewController:(id)controller2 animated:(BOOL)animated;
-(void)navigationController:(id)controller willPushViewController:(id)controller2 animated:(BOOL)animated;
-(void)configure;
-(id)init;
@end
