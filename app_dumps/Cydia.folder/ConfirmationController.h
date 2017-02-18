/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "CydiaWebViewController.h"
#import "Cydia-Structs.h"

@class Database;

__attribute__((visibility("hidden")))
@interface ConfirmationController : CydiaWebViewController {
	Database* database_;
	MenesObjectHandle<UIAlertView, 0> essential_;
	MenesObjectHandle<NSDictionary, 0> changes_;
	MenesObjectHandle<NSMutableArray, 0> issues_;
	MenesObjectHandle<NSDictionary, 0> sizes_;
	BOOL substrate_;
}
-(id).cxx_construct;
-(void).cxx_destruct;
-(void)confirmButtonClicked;
-(void)cancelButtonClicked;
-(void)applyRightButton;
-(id)leftButton;
-(id)initWithDatabase:(id)database;
-(void)webView:(id)view didClearWindowObject:(id)object forFrame:(id)frame;
-(id)invokeDefaultMethodWithArguments:(id)arguments;
-(void)_doContinue;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)complete;
@end

