/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Component5Controller.h"

@class TextComponent, TextComponentNode, TextKitLabelInteractive;

__attribute__((visibility("hidden")))
@interface TextComponentController : Component5Controller {
}
@property(retain, nonatomic) TextComponentNode* node;
@property(assign, nonatomic) __weak TextKitLabelInteractive* view;
@property(retain, nonatomic) TextComponent* component;
+(id)createView;
-(void)component:(id)component didUpdateState:(id)state toState:(id)state3 animated:(BOOL)animated;
@end
