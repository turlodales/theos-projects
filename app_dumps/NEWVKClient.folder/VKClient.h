/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AFHTTPClient.h"

@class NSMutableDictionary, NSMutableArray, NSString;
@protocol VKClientDelegate;

__attribute__((visibility("hidden")))
@interface VKClient : AFHTTPClient {
	BOOL tokenInvalidated;
	id<VKClientDelegate> _delegate;
	NSString* _token;
	NSMutableArray* _pending;
	NSMutableDictionary* _queuesPool;
}
@property(assign, nonatomic) __weak id<VKClientDelegate> delegate;
@property(readonly, retain, nonatomic) NSMutableDictionary* queuesPool;
@property(readonly, retain, nonatomic) NSMutableArray* pending;
@property(retain, nonatomic) NSString* token;
+(id)loginClient;
+(id)sessionClient:(id)client;
-(void).cxx_destruct;
-(BOOL)isBusyQueue:(id)queue;
-(id)process:(id)process key:(id)key;
-(void)processWithoutThrottle:(id)throttle onOperationCreated:(id)created;
-(id)process:(id)process;
-(id)process:(id)process queue:(id)queue;
-(void)handleNonPending:(id)pending;
-(void)handlePending:(id)pending queue:(id)queue;
-(void)processAllPending:(BOOL)pending queue:(id)queue;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)updateToken:(id)token;
-(void)dealloc;
-(id)initWithBaseURL:(id)baseURL;
@end

