/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "CAAnimationDelegate.h"
#import "UIScrollViewDelegate.h"
#import "VKClient-Structs.h"
#import "VKMController.h"

@class UIView, NSString, NSArray, UIPageControl, UIScrollView, UIImageView;

__attribute__((visibility("hidden")))
@interface MenuTourController : VKMController <UIScrollViewDelegate, CAAnimationDelegate> {
	BOOL _navigationAnimationStarted;
	BOOL _transtionAnimationStarted;
	BOOL _menuAnimationStarted;
	BOOL _pageControlAnimationStarted;
	UIScrollView* _scrollView;
	UIPageControl* _pageControl;
	NSArray* _miniViews;
	UIView* _miniMenuView;
	UIView* _miniNewsView;
	UIView* _miniNotificationsView;
	UIView* _miniMessagesView;
	UIView* _miniDiscoverView;
	UIView* _transitionMenuView;
	UIView* _menuView;
	UIImageView* _menuLine1Icon;
	UIImageView* _menuLine2Icon;
	UIImageView* _menuLine3Icon;
	UIImageView* _discoverIcon;
	UIImageView* _notificationsIcon;
	UIImageView* _notificationsCounterIcon;
	float _startTransitionAnimationTime;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL pageControlAnimationStarted;
@property(assign, nonatomic) BOOL menuAnimationStarted;
@property(assign, nonatomic) BOOL transtionAnimationStarted;
@property(assign, nonatomic) BOOL navigationAnimationStarted;
@property(assign, nonatomic) float startTransitionAnimationTime;
@property(retain, nonatomic) UIImageView* notificationsCounterIcon;
@property(retain, nonatomic) UIImageView* notificationsIcon;
@property(retain, nonatomic) UIImageView* discoverIcon;
@property(retain, nonatomic) UIImageView* menuLine3Icon;
@property(retain, nonatomic) UIImageView* menuLine2Icon;
@property(retain, nonatomic) UIImageView* menuLine1Icon;
@property(retain, nonatomic) UIView* menuView;
@property(retain, nonatomic) UIView* transitionMenuView;
@property(retain, nonatomic) UIView* miniDiscoverView;
@property(retain, nonatomic) UIView* miniMessagesView;
@property(retain, nonatomic) UIView* miniNotificationsView;
@property(retain, nonatomic) UIView* miniNewsView;
@property(retain, nonatomic) UIView* miniMenuView;
@property(retain, nonatomic) NSArray* miniViews;
@property(retain, nonatomic) UIPageControl* pageControl;
@property(retain, nonatomic) UIScrollView* scrollView;
-(void).cxx_destruct;
-(void)scrollViewDidEndDecelerating:(id)scrollView;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(void)notificationAppResignActive:(id)active;
-(void)notificationAppBecomeActive:(id)active;
-(void)actionPageControlValueChanged:(id)changed;
-(void)actionCloseTour;
-(void)actionScrollToNextPage;
-(void)removeAnimations;
-(void)startAnimations;
-(id)createViewWithGradientStyle:(int)gradientStyle;
-(id)createMiniViewWithGradientStyle:(int)gradientStyle iconName:(id)name;
-(id)gradientColorsForStyle:(int)style;
-(void)addGradientToView:(id)view style:(int)style mini:(BOOL)mini;
-(id)menuLineAnimationForStartPoint:(CGPoint)startPoint;
-(void)setupPageControlForScrollView:(id)scrollView;
-(float)navigationCenterY;
-(void)startDiscoverAnimation;
-(void)startNotificationsAnimation;
-(void)removeTransitionAnimation;
-(void)startTransitionAnimation;
-(void)removeMenuAnimation;
-(void)startMenuAnimation;
-(void)removeNavigationAnimation;
-(void)startNavigationAnimation;
-(int)preferredStatusBarStyle;
-(int)VKMNavigationBarStyle;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidLoad;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
-(void)dealloc;
@end

