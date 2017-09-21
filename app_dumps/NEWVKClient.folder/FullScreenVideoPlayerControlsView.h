/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VideoPlayerScrubberDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "VKClient-Structs.h"

@class UIView, UIBarButtonItem, NSString, VideoPlayerErrorOverlayView, UIColor, UILabel, ToolbarButtonWithCounterItem, UIButton, UIImageView, VideoPlayerPlaybackView, UIToolbar, UINavigationBar, FinishedVideoActionsOverlayView, UIFont;
@protocol FullScreenVideoPlayerControlsViewDelegate;

__attribute__((visibility("hidden")))
@interface FullScreenVideoPlayerControlsView : XXUnknownSuperclass <VideoPlayerScrubberDelegate> {
	BOOL _canSeek;
	BOOL _openInLiveApp;
	BOOL _showActionButtonOnLandscape;
	BOOL _liked;
	BOOL _added;
	BOOL _canAdd;
	BOOL _shared;
	BOOL _showsCommentsButton;
	BOOL _showsLikeButton;
	BOOL _showsShareButton;
	BOOL _showsMoreButton;
	BOOL _showsToolbar;
	BOOL _showsTopAddButton;
	BOOL _addButtonShouldBeAtBottomInPortraitMode;
	BOOL _playPauseButtonHidden;
	BOOL _playbackViewHidden;
	BOOL _liveIndicatorHidden;
	id<FullScreenVideoPlayerControlsViewDelegate> _delegate;
	UIColor* _actionButtonTextColor;
	UIFont* _actionButtonTitleFont;
	UIButton* _actionButton;
	int _likesCount;
	int _commentsCount;
	int _sharesCount;
	NSString* _title;
	NSString* _subtitle;
	FinishedVideoActionsOverlayView* _finishedVideoActionsView;
	VideoPlayerErrorOverlayView* _errorOverlayView;
	UIBarButtonItem* _closeButtonItemTop;
	UIBarButtonItem* _addButtonItemTop;
	UIBarButtonItem* _moreButtonItemTop;
	UIBarButtonItem* _likeButtonItemTop;
	UIBarButtonItem* _shareButtonItemTop;
	ToolbarButtonWithCounterItem* _likeButtonItemBottom;
	ToolbarButtonWithCounterItem* _commentsButtonItemBottom;
	ToolbarButtonWithCounterItem* _shareButtonItemBottom;
	ToolbarButtonWithCounterItem* _addButtonItemBottom;
	UIColor* _actionButtonColor;
	UINavigationBar* _navigationBar;
	UIToolbar* _bottomToolbar;
	UIView* _bottomToolBarSeparatorLine;
	VideoPlayerPlaybackView* _playbackView;
	UIButton* _playPauseButton;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIImageView* _topScrimImageView;
	UIImageView* _bottomScrimImageView;
	UIView* _liveIndicator;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) VideoPlayerErrorOverlayView* errorOverlayView;
@property(readonly, assign, nonatomic) FinishedVideoActionsOverlayView* finishedVideoActionsView;
@property(assign, nonatomic) BOOL liveIndicatorHidden;
@property(assign, nonatomic) BOOL playbackViewHidden;
@property(assign, nonatomic) BOOL playPauseButtonHidden;
@property(copy, nonatomic) NSString* subtitle;
@property(copy, nonatomic) NSString* title;
@property(assign, nonatomic) BOOL addButtonShouldBeAtBottomInPortraitMode;
@property(assign, nonatomic) BOOL showsTopAddButton;
@property(assign, nonatomic) BOOL showsToolbar;
@property(assign, nonatomic) BOOL showsMoreButton;
@property(assign, nonatomic) BOOL showsShareButton;
@property(assign, nonatomic) BOOL showsLikeButton;
@property(assign, nonatomic) BOOL showsCommentsButton;
@property(assign, nonatomic) int sharesCount;
@property(assign, nonatomic) int commentsCount;
@property(assign, nonatomic) int likesCount;
@property(assign, nonatomic, getter=isShared) BOOL shared;
@property(assign, nonatomic) BOOL canAdd;
@property(assign, nonatomic, getter=isAdded) BOOL added;
@property(assign, nonatomic, getter=isLiked) BOOL liked;
@property(assign, nonatomic) BOOL showActionButtonOnLandscape;
@property(retain, nonatomic) UIFont* actionButtonTitleFont;
@property(retain, nonatomic) UIColor* actionButtonTextColor;
@property(assign, nonatomic) BOOL openInLiveApp;
@property(assign, nonatomic) BOOL canSeek;
@property(readonly, assign, nonatomic) BOOL scrubbing;
@property(assign, nonatomic) float scrubberBufferProgressValue;
@property(assign, nonatomic) float scrubberValue;
@property(copy, nonatomic) NSString* rightDurationLabelText;
@property(copy, nonatomic) NSString* leftDurationLabelText;
@property(assign, nonatomic) unsigned playPauseButtonMode;
@property(assign, nonatomic) __weak id<FullScreenVideoPlayerControlsViewDelegate> delegate;
@property(retain, nonatomic) UIButton* actionButton;
@property(retain, nonatomic) UIView* liveIndicator;
@property(retain, nonatomic) UIImageView* bottomScrimImageView;
@property(retain, nonatomic) UIImageView* topScrimImageView;
@property(retain, nonatomic) UILabel* subtitleLabel;
@property(retain, nonatomic) UILabel* titleLabel;
@property(retain, nonatomic) UIButton* playPauseButton;
@property(retain, nonatomic) VideoPlayerPlaybackView* playbackView;
@property(retain, nonatomic) UIView* bottomToolBarSeparatorLine;
@property(retain, nonatomic) UIToolbar* bottomToolbar;
@property(retain, nonatomic) UINavigationBar* navigationBar;
@property(retain, nonatomic) UIColor* actionButtonColor;
@property(retain, nonatomic) ToolbarButtonWithCounterItem* addButtonItemBottom;
@property(retain, nonatomic) ToolbarButtonWithCounterItem* shareButtonItemBottom;
@property(retain, nonatomic) ToolbarButtonWithCounterItem* commentsButtonItemBottom;
@property(retain, nonatomic) ToolbarButtonWithCounterItem* likeButtonItemBottom;
@property(retain, nonatomic) UIBarButtonItem* shareButtonItemTop;
@property(retain, nonatomic) UIBarButtonItem* likeButtonItemTop;
@property(retain, nonatomic) UIBarButtonItem* moreButtonItemTop;
@property(retain, nonatomic) UIBarButtonItem* addButtonItemTop;
@property(retain, nonatomic) UIBarButtonItem* closeButtonItemTop;
-(void).cxx_destruct;
-(void)videoPlayerScrubberDidEndScrubbing:(id)videoPlayerScrubber;
-(void)videoPlayerScrubberWillBeginScrubbing:(id)videoPlayerScrubber;
-(id)createPlayPauseButton;
-(id)createScrimImageViewFlipped:(BOOL)flipped autoresizingMask:(unsigned)mask;
-(id)createCounterButtonItemWithImageNamed:(id)imageNamed selectedImageName:(id)name;
-(id)createCounterButtonItemWithImageNamed:(id)imageNamed;
-(id)createLabelWithFont:(id)font textColor:(id)color numberOfLines:(int)lines;
-(id)createBarButtonItemWithImageNamed:(id)imageNamed;
-(id)createNavigationBarWithFrame:(CGRect)frame;
-(id)createToolBarWithFrame:(CGRect)frame;
-(void)setActionButtonColor:(id)color corner:(float)corner;
-(void)setActionButtonHidden:(BOOL)hidden withTitle:(id)title;
-(void)setScrubberValue:(float)value animated:(BOOL)animated;
-(void)handleErrorRetryButtonTap:(id)tap;
-(void)handleFinishedVideoViewButtonAction:(id)action;
-(void)handlePlaybackScrubberValueChanged:(id)changed;
-(void)handlePlayPauseButtonTap:(id)tap;
-(void)handleAddButtonTap:(id)tap;
-(void)handleShareButtonTap:(id)tap;
-(void)handleCommentsButtonTap:(id)tap;
-(void)handleLikeButtonTap:(id)tap;
-(void)handleMoreButtonTap:(id)tap;
-(void)handleCloseButtonTap:(id)tap;
-(void)handleBarButtonItemTap:(id)tap;
-(void)openLiveInVKLiveAppAction:(id)vkliveAppAction;
-(void)updateAlpha:(float)alpha hideActionButtonAndTitle:(BOOL)title;
-(void)setPlaybackViewHidden:(BOOL)hidden animated:(BOOL)animated;
-(void)setPlayPauseButtonHidden:(BOOL)hidden animated:(BOOL)animated;
-(void)layoutForInterfaceOrientation:(int)interfaceOrientation;
-(void)updateToolbars;
-(void)setNeedsUpdateToolBars;
-(void)configureToolbarsForInterfaceOrientation:(int)interfaceOrientation animated:(BOOL)animated;
-(void)layoutSubviews;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)initializeActionButton;
-(void)initializeLiveIndicator;
-(void)initializeErrorOverlayView;
-(void)initializeFinishedVideoUI;
-(void)initializePlayback;
-(void)initializeTitleAndSubtitleLabels;
-(void)initializeToolbars;
-(void)initializeBarItems;
-(void)initializeScrims;
-(void)initializeSubviews;
-(void)initialize;
-(id)initWithFrame:(CGRect)frame;
@end

