/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol MTStatusBarOverlayDelegate <NSObject>
@optional
-(void)statusBarOverlayDidClearMessageQueue:(id)statusBarOverlay;
-(void)statusBarOverlayDidSwitchFromOldMessage:(id)statusBarOverlay toNewMessage:(id)newMessage;
-(void)statusBarOverlayDidHide;
-(void)statusBarOverlayDidRecognizeGesture:(id)statusBarOverlay;
@end

