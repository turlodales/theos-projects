/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ListModel.h"

@class AudioAudiosSpecialBlock;

__attribute__((visibility("hidden")))
@interface AudioCatalogModel : ListModel {
	AudioAudiosSpecialBlock* _audiosSpecialBlock;
}
@property(retain, nonatomic) AudioAudiosSpecialBlock* audiosSpecialBlock;
-(void).cxx_destruct;
-(void)actionModelActionAddAudio:(id)audio :(id)arg2;
-(void)registerForEvents:(id)events;
-(id)updatedIndex:(id)index data:(id)data context:(id)context;
-(id)requestForContext:(id)context;
@end
