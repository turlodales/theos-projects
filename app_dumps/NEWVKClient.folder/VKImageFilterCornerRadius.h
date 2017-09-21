/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import "VKImageFilter.h"


__attribute__((visibility("hidden")))
@interface VKImageFilterCornerRadius : VKImageFilter {
	float _radius;
	int _corners;
}
@property(readonly, assign, nonatomic) int corners;
@property(readonly, assign, nonatomic) float radius;
+(id)radius:(float)radius corners:(int)corners;
+(id)radius:(float)radius;
-(id)infoString;
-(void)process:(id)process inDrawingContext:(CGContextRef)drawingContext;
-(id)initWithRadius:(float)radius corners:(int)corners;
@end

