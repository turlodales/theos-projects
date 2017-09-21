/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMNavDelegate.h"
#import "TimerTargetDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NotificationsManagerDelegate.h"
#import "VKMNavRoot.h"
#import "VKClientDelegate.h"
#import "UITabBarControllerDelegate.h"
#import "VKAPNSHandlerDelegate.h"

@class UIView, MainModel, NSString, VKAPNSManager, CaptchaPrompt, UIViewController, VKMController, TimerTarget;
@protocol MainControllerDelegate, UINavigationControllerDelegate;

__attribute__((visibility("hidden")))
@interface VKMMainController : XXUnknownSuperclass <VKAPNSHandlerDelegate, UITabBarControllerDelegate, TimerTargetDelegate, VKClientDelegate, VKMNavRoot, VKMNavDelegate, NotificationsManagerDelegate> {
	BOOL orientationDisabled;
	MainModel* _main;
	VKAPNSManager* _apns;
	id<MainControllerDelegate> _mainDelegate;
	CaptchaPrompt* _captcha;
	VKMController* _menuController;
	UIViewController* _newsController;
	UIViewController* _dialogsController;
	VKMController* _discoverController;
	TimerTarget* _discoverAutoTouch;
	id<UINavigationControllerDelegate> _navigationControllerDelegate;
	UIViewController* _feedbackController;
	UIView* _tabBarShadowView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) id<MainControllerDelegate> mainDelegate;
@property(readonly, retain, nonatomic) VKAPNSManager* apns;
@property(readonly, retain, nonatomic) MainModel* main;
@property(retain, nonatomic) UIView* tabBarShadowView;
@property(retain, nonatomic) UIViewController* feedbackController;
@property(retain, nonatomic) id<UINavigationControllerDelegate> navigationControllerDelegate;
@property(retain, nonatomic) TimerTarget* discoverAutoTouch;
@property(retain, nonatomic) VKMController* discoverController;
@property(retain, nonatomic) UIViewController* dialogsController;
@property(retain, nonatomic) UIViewController* newsController;
@property(retain, nonatomic) VKMController* menuController;
@property(retain, nonatomic) CaptchaPrompt* captcha;
+(id)rootMainControllerForSession:(id)session;
+(id)rootMainController;
-(void)timerTargetFired:(id)fired;
-(void)tabBarController:(id)controller didSelectViewController:(id)controller2;
-(BOOL)tabBarController:(id)controller shouldSelectViewController:(id)controller2;
-(void)openNewPost;
-(void)addPhotoShouldManageMenu:(BOOL)addPhoto;
-(void)activateQuickSearch;
-(void)setTabBarShadowHidden:(BOOL)hidden;
-(void)resetInitial;
-(void)checkPendingUpload;
-(void)deattach;
-(void)attach:(BOOL)attach;
-(void)logout:(BOOL)logout;
-(id)unregisterDevice;
-(void)useAPNSToken:(id)token;
-(void)apnsHandler:(id)handler runAction:(id)action;
-(void)apnsHandler:(id)handler showNotification:(id)notification;
-(void)apnsHandler:(id)handler modalController:(id)controller animated:(BOOL)animated;
-(void)apnsHandler:(id)handler openController:(id)controller;
-(void)handleAudioMessage:(id)message;
-(void)playNextAudios:(id)audios context:(int)context playlistIden:(id)iden;
-(void)handleAudio:(id)audio list:(id)list toggle:(BOOL)toggle context:(int)context playlistIden:(id)iden;
-(void)rootModalDismiss:(BOOL)dismiss;
-(void)rootModal:(id)modal animated:(BOOL)animated;
-(id)rootNavContext;
-(void)selectorSelected:(id)selected;
-(id)mainModel;
-(id)root;
-(BOOL)isRootNav:(id)nav;
-(id)actionContext;
-(id)topViewController;
-(BOOL)route:(id)route context:(id)context;
-(BOOL)route:(id)route;
-(id)navContext;
-(id)navigation;
-(id)currentNavigationController;
-(void)playerUpdated:(id)updated;
-(void)dynamicFontChanged;
-(void)notificationReachability:(id)reachability;
-(void)notificationAppActive:(id)active;
-(void)notificationActivity:(id)activity;
-(void)handleActivityUpdate:(int)update;
-(void)client:(id)client requestedTokenConfirmationWithComplete:(id)complete;
-(void)client:(id)client requestedConfirmation:(id)confirmation complete:(id)complete;
-(void)client:(id)client requestedValidation:(id)validation complete:(id)complete;
-(void)client:(id)client requestedCaptcha:(id)captcha complete:(id)complete;
-(void)clientEncounteredAuthProblem:(id)problem;
-(void)notificationsManager:(id)manager selectedEvent:(id)event;
-(void)dismissModals:(id)modals;
-(void)pushSafe:(id)safe animated:(BOOL)animated;
-(void)updateBadgesPosition;
-(void)touchTop;
-(void)runAction:(id)action;
-(void)actionShowAudioPlayer:(id)player;
-(void)setupTabBarControllers;
-(void)viewWillLayoutSubviews;
-(unsigned)supportedInterfaceOrientations;
-(void)enableOrientation;
-(void)disableOrientation;
-(BOOL)shouldAutorotate;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)dealloc;
-(id)initWithMain:(id)main;
@end

