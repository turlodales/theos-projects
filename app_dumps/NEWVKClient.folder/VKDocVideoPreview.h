/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKDomain.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VKDocVideoPreview : VKDomain {
	NSString* _src;
	int _width;
	int _height;
	unsigned _file_size;
}
@property(assign, nonatomic) unsigned file_size;
@property(assign, nonatomic) int height;
@property(assign, nonatomic) int width;
@property(copy, nonatomic) NSString* src;
-(void).cxx_destruct;
-(BOOL)process:(id)process context:(id)context;
@end

