/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer;

@interface AFNetworkActivityIndicatorManager : XXUnknownSuperclass {
	BOOL _enabled;
	int _activityCount;
	NSTimer* _activityIndicatorVisibilityTimer;
}
@property(readonly, assign, nonatomic) BOOL isNetworkActivityIndicatorVisible;
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;
@property(readonly, assign, nonatomic, getter=isNetworkActivityIndicatorVisible) BOOL networkActivityIndicatorVisible;
@property(retain, nonatomic) NSTimer* activityIndicatorVisibilityTimer;
@property(assign, nonatomic) int activityCount;
+(id)keyPathsForValuesAffectingIsNetworkActivityIndicatorVisible;
+(id)sharedManager;
-(void).cxx_destruct;
-(void)networkRequestDidFinish:(id)networkRequest;
-(void)networkRequestDidStart:(id)networkRequest;
-(void)decrementActivityCount;
-(void)incrementActivityCount;
-(void)updateNetworkActivityIndicatorVisibility;
-(void)updateNetworkActivityIndicatorVisibilityDelayed;
-(void)dealloc;
-(id)init;
@end
