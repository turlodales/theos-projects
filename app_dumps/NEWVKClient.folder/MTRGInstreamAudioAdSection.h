/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MTRGSection.h"

@class NSArray, NSMutableArray;

@interface MTRGInstreamAudioAdSection : MTRGSection {
	NSMutableArray* _audioSections;
}
@property(readonly, assign, nonatomic) NSArray* audioSections;
-(void).cxx_destruct;
-(unsigned)bannersCount;
-(id)audioSectionByName:(id)name;
-(id)initWithType:(id)type name:(id)name;
@end

