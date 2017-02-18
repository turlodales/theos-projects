/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITabBarControllerDelegate.h"
#import "Cydia-Structs.h"
#import "CyteTabBarController.h"
#import "FetchDelegate.h"

@class Database, NSObject;
@protocol CydiaDelegate;

__attribute__((visibility("hidden")))
@interface CydiaTabBarController : CyteTabBarController <UITabBarControllerDelegate, FetchDelegate> {
	Database* database_;
	MenesObjectHandle<UIActivityIndicatorView, 0> indicator_;
	bool updating_;
	NSObject<CydiaDelegate>* updatedelegate_;
}
-(id).cxx_construct;
-(void).cxx_destruct;
-(void)setUpdateDelegate:(id)delegate;
-(void)stopSourceFetch:(id)fetch;
-(void)startSourceFetch:(id)fetch;
-(bool)isSourceCancelled;
-(BOOL)updating;
-(void)cancelPressed;
-(void)cancelUpdate;
-(void)completeUpdate;
-(void)stopUpdateWithSelector:(SEL)selector;
-(void)performUpdate;
-(void)beginUpdate;
-(id)initWithDatabase:(id)database;
-(id)navigationURLCollection;
@end

