/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import "VKImageFilter.h"


__attribute__((visibility("hidden")))
@interface VKImageFilterCropToFace : VKImageFilter {
	CGSize _size;
}
@property(readonly, assign, nonatomic) CGSize size;
+(id)cropToSize:(CGSize)size;
-(id)infoString;
-(void)process:(id)process inDrawingContext:(CGContextRef)drawingContext;
-(id)contextForImage:(id)image;
-(id)initWithSize:(CGSize)size;
@end

