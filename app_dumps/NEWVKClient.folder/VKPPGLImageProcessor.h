/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VKClient-Structs.h"

@class NSMutableDictionary, VKPPGLFilter, NSArray, NSObject, EAGLContext;
@protocol OS_dispatch_queue;

@interface VKPPGLImageProcessor : XXUnknownSuperclass {
	NSObject<OS_dispatch_queue>* queue;
	NSArray* _filters;
	VKPPGLFilter* _filterNormal;
	EAGLContext* _context;
	NSMutableDictionary* _filtersMap;
	NSMutableDictionary* _filtersPositions;
	NSMutableDictionary* _filtersContexts;
	NSMutableDictionary* _sourceTextures;
}
@property(readonly, retain, nonatomic) VKPPGLFilter* filterNormal;
@property(readonly, retain, nonatomic) NSArray* filters;
@property(readonly, retain, nonatomic) NSMutableDictionary* sourceTextures;
@property(readonly, retain, nonatomic) NSMutableDictionary* filtersContexts;
@property(readonly, retain, nonatomic) NSMutableDictionary* filtersPositions;
@property(readonly, retain, nonatomic) NSMutableDictionary* filtersMap;
@property(retain, nonatomic) EAGLContext* context;
-(id)processImageForKey:(id)key outputSize:(CGSize)size filterName:(id)name block:(id)block;
-(void)invalidateAllTextures;
-(void)invalidateTexture:(id)texture;
-(int)indexOfFilter:(id)filter;
-(id)filterWithName:(id)name;
-(int)maxImageSize;
-(void)notificationMemoryWarning:(id)warning;
-(void)unload;
-(void)async:(id)async;
-(void)sync:(id)sync;
-(void)perform:(/*function-pointer*/ void*)perform block:(id)block;
-(void)inContext:(id)context;
-(void)dealloc;
-(id)initWithFiltersBundle:(id)filtersBundle;
@end

