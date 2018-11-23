/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, Brush;

__attribute__((visibility("hidden")))
@interface Bezier : XXUnknownSuperclass {
	Brush* _brush;
	NSMutableArray* _touchPoints;
	NSMutableArray* _quads;
}
@property(retain, nonatomic) Brush* brush;
@property(retain, nonatomic) NSMutableArray* quads;
@property(retain, nonatomic) NSMutableArray* touchPoints;
-(void).cxx_destruct;
-(void)drawFromPoint:(unsigned)point withUniformContext:(id)uniformContext brushImage:(id)image neonBrushCentreImage:(id)image4;
-(CGRect)calculateRect;
-(CGRect)calculateRectFromPoint:(unsigned)point;
-(CGRect)brushInsettedRect:(CGRect)rect;
-(void)addTouchPoint:(CGPoint)point touchesEndedOrCanceled:(BOOL)canceled;
-(id)init;
@end
