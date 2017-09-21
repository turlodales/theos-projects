/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import "DefaultHighlightButton.h"

@class UIView, VKSession, VKStoreStockItem, VKStoreProductStickerReferrerContext, ActivityIndicatorView;
@protocol VKMNavProxyDelegate;

__attribute__((visibility("hidden")))
@interface StoreStatusButton : DefaultHighlightButton {
	VKSession* _session;
	UIView* _weakLayoutParent;
	VKStoreStockItem* _item;
	int _downloadDisplayMode;
	float _fixedWidth;
	id<VKMNavProxyDelegate> _navProxyDelegate;
	ActivityIndicatorView* _activityView;
	int _loadingState;
	VKStoreProductStickerReferrerContext* _referrerContext;
}
@property(assign, nonatomic) __weak id<VKMNavProxyDelegate> navProxyDelegate;
@property(assign, nonatomic) float fixedWidth;
@property(assign, nonatomic) int downloadDisplayMode;
@property(retain, nonatomic) VKStoreStockItem* item;
@property(assign, nonatomic) UIView* weakLayoutParent;
@property(retain, nonatomic) VKSession* session;
@property(retain, nonatomic) VKStoreProductStickerReferrerContext* referrerContext;
@property(assign, nonatomic) int loadingState;
@property(retain, nonatomic) ActivityIndicatorView* activityView;
+(float)buttonWidthForTitle:(id)title;
+(UIEdgeInsets)titleDefaultEdgeInsets;
+(id)titleLabelFont;
+(id)buttonWithSession:(id)session referrerContext:(id)context;
+(void)initialize;
-(void).cxx_destruct;
-(void)attach:(id)attach;
-(void)sizeToFit;
-(void)actionAction:(id)action;
-(void)reattach;
-(void)notificationLoadingProcess:(id)process;
-(void)notificationLoading:(id)loading;
-(void)notificationStore:(id)store;
-(void)dealloc;
@end

