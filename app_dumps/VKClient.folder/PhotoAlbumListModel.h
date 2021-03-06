/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PhotoAlbumModel.h"


__attribute__((visibility("hidden")))
@interface PhotoAlbumListModel : PhotoAlbumModel {
}
+(unsigned)countFromContext:(id)context;
-(void)handleMove:(id)move :(id)arg2;
-(void)handleReorder:(id)reorder :(id)arg2;
-(void)handleDelete:(id)aDelete :(id)arg2;
-(void)handleUpload:(id)upload :(id)arg2;
-(void)deletePhoto:(id)photo :(id)arg2;
-(void)addPhoto:(id)photo :(id)arg2;
-(void)markIndexReset:(id)reset;
-(void)registerForEvents:(id)events;
-(id)browsingContextForPhoto:(id)photo;
-(id)rowsFromPhotos:(id)photos;
-(void)discovered:(id)discovered;
-(id)itemsToAppend:(id)append to:(id)to;
-(id)process:(id)process;
-(id)countKey;
@end

