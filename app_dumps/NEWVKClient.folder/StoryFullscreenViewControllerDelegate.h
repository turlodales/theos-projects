/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol StoryFullscreenViewControllerDelegate <NSObject>
-(void)storyFullscreenViewControllerDidHideCurrentStorySource:(id)storyFullscreenViewController;
-(void)storyFullscreenViewControllerDidStartPlayingCurrentStory:(id)storyFullscreenViewController;
-(void)storyFullscreenViewController:(id)controller didDeleteCurrentStory:(id)story;
-(void)storyFullscreenViewControllerDidEndShowingSendMessagePopup:(id)storyFullscreenViewController;
-(void)storyFullscreenViewControllerWillShowSendMessagePopup:(id)storyFullscreenViewController;
-(void)storyFullscreenViewControllerDidPlayCurrentStoryToEnd:(id)storyFullscreenViewController;
@end

