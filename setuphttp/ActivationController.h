/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BuddyController.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSURLSessionDelegate.h"
#import "NSURLSessionDataDelegate.h"
#import "RemoteUIControllerDelegate.h"
#import "ActivationFailurePageDelegate.h"

@class NSString, BuddyActivationEngine, RemoteUIController, NSMutableArray, RUIPage, NSURLSession, UILabel, UIActivityIndicatorView, NSTimer, NSURL, ActivationFailurePage;
@protocol ActivationControllerDelegate;

__attribute__((visibility("hidden")))
@interface ActivationController : XXUnknownSuperclass <NSURLSessionDelegate, NSURLSessionDataDelegate, RemoteUIControllerDelegate, ActivationFailurePageDelegate, BuddyController> {
	BuddyActivationEngine* _engine;
	RemoteUIController* _remoteUIController;
	NSMutableArray* _objectModels;
	RUIPage* _loadingPage;
	NSURLSession* _activationURLSession;
	void* _otaAssertion;
	int _activationState;
	UILabel* _statusLabel;
	UILabel* _infoLabel;
	UIActivityIndicatorView* _spinner;
	BOOL _displayTimerElapsed;
	BOOL _cellNetworkTimerElapsed;
	BOOL _nonSilentActivation;
	NSTimer* _displayTimer;
	NSTimer* _cellNetworkTimer;
	NSTimer* _ticketAcceptedTimer;
	NSTimer* _waitingForBasebandTimer;
	int _waitingForBasebandFailureCount;
	BOOL _allowAnyHTTPSCertificate;
	NSURL* _overrideActivationURL;
	ActivationFailurePage* _activationFailurePage;
	BOOL _connectionFailed;
	BOOL _connectionOTA;
	NSURL* _agreeURL;
	NSURL* _disagreeURL;
	BOOL _cdmaSelectionActivation;
	id<ActivationControllerDelegate> _delegate;
	NSURL* _activationURL;
	NSString* _contentType;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) BOOL cdmaSelectionActivation;
@property(retain, nonatomic) NSURL* disagreeURL;
@property(retain, nonatomic) NSURL* agreeURL;
@property(copy, nonatomic) NSString* contentType;
@property(retain, nonatomic) NSURL* activationURL;
@property(assign, nonatomic) __weak id<ActivationControllerDelegate> delegate;
+(BOOL)controllerNeedsToRun;
+(BOOL)isBricked;
-(void).cxx_destruct;
-(void)_userAgreedToTCs:(BOOL)tcs;
-(void)remoteUIController:(id)controller didFinishLoadWithError:(id)error;
-(void)remoteUIController:(id)controller didRemoveObjectModel:(id)model;
-(void)remoteUIController:(id)controller willPresentObjectModel:(id)model modally:(BOOL)modally;
-(void)remoteUIController:(id)controller didReceiveObjectModel:(id)model actionSignal:(unsigned*)signal;
-(BOOL)remoteUIController:(id)controller shouldLoadRequest:(id)request redirectResponse:(id)response;
-(void)tryAgainOnRemoteUIDialog;
-(void)disagreeToRemoteUIDialog;
-(void)agreeToRemoteUIDialog;
-(void)activationFailurePagePopped:(id)popped;
-(void)activationFailurePagePressedWifi:(id)wifi;
-(void)activationFailurePagePressedRetry:(id)retry;
-(void)removeFromNavHierarchy;
-(void)_updateStatusLabel;
-(void)_dismissRemoteUI;
-(void)_sendAck;
-(void)_activate;
-(void)_systemTimeUpdated;
-(void)_sanitizeSystemTime;
-(void)_waitingForBasebandTimeout;
-(void)_clearWaitingForBasebandTimer;
-(void)_checkBasebandStatusBeforeActivation;
-(void)_startActivation;
-(void)_tryActivateWithRequestMutator:(id)requestMutator;
-(void)_handleFailureWithError:(id)error;
-(void)_handleActivationData:(id)data responseHeaders:(id)headers baseURL:(id)url;
-(void)_cleanup;
-(void)_displayTimerTimeout;
-(void)viewDidLayoutSubviews;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)_activateIfNecessary;
-(void)_activationStateChanged;
-(void)_ticketAcceptedDidTimeout;
-(void)_clearTicketAcceptedTimer;
-(void)startOver;
-(void)_checkActivationFailIfBricked:(BOOL)bricked;
-(void)_clearDisplayTimer;
-(void)back:(id)back;
-(void)dealloc;
-(id)init;
-(void)_enterState:(int)state;
-(void)_fetchCloudConfig;
-(void)_tryFetchCloudConfigNote:(id)note;
-(void)_cellNetworkTimerTimeout;
-(void)_clearCellNetworkTimer;
-(void)_stopWaitingForCellNetwork;
-(void)_startWaitingForCellNetwork;
-(void)_skipPanesAccordingToCloudConfigurationDetails:(id)cloudConfigurationDetails;
-(void)_attemptDismiss;
-(void)_releaseOTAAssertion;
-(id)_carrierID;
@end

