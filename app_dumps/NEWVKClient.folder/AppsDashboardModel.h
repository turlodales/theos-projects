/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "LoadingModel.h"

@class NSMutableDictionary, NSArray, NSMutableArray, AppsDashboardModelContext;

__attribute__((visibility("hidden")))
@interface AppsDashboardModel : LoadingModel {
	NSMutableArray* _modesCache;
	unsigned _numberOfInvites;
	NSArray* _genres;
	NSMutableDictionary* _numberOfElementsForSection;
}
@property(retain, nonatomic) AppsDashboardModelContext* lastContext;
@property(readonly, copy, nonatomic) NSMutableArray* modesCache;
@property(readonly, retain, nonatomic) NSMutableDictionary* numberOfElementsForSection;
@property(copy, nonatomic) NSArray* genres;
@property(assign, nonatomic) unsigned numberOfInvites;
+(id)sectionForRequests:(id)requests totalNumberOfInvites:(out unsigned*)invites;
+(id)parseAllRequests:(id)requests;
+(unsigned)extractCountFromData:(id)data;
+(id)requests;
+(id)with:(id)with;
-(void).cxx_destruct;
-(void)reset;
-(void)rebuildIndex;
-(void)reload;
-(id)genreForSection:(int)section;
-(float)headerHeightForSection:(int)section;
-(id)showAllControlTitleForSection:(int)section;
-(void)handleMarkAsRead:(id)read withBuilder:(id)builder;
-(void)handleRemoveApp:(id)app withBuilder:(id)builder;
-(void)handleDelete:(id)aDelete withBuilder:(id)builder;
-(void)registerForEvents:(id)events;
-(id)invitesSectionTitle;
-(id)processCommonSection:(int)section data:(id)data;
-(unsigned)genreIndexBySection:(int)section;
-(id)titleForSection:(int)section presentation:(unsigned)presentation;
-(id)appDomainsGroupForData:(id)data inSection:(int)section storeCount:(BOOL)count;
-(id)itemsGroupForData:(id)data presentation:(unsigned)presentation requests:(id)requests inSection:(int)section storeCount:(BOOL)count;
-(unsigned)numberOfSectionsForMode:(unsigned)mode withGenresCount:(unsigned)genresCount;
-(id)extractGenresFromData:(id)data;
-(id)updatedIndex:(id)index data:(id)data context:(id)context;
-(id)indexForUpdatingGenresPartWithData:(id)data basedOnIndex:(id)index cache:(id)cache;
-(id)indexForUpdatingRecommendedPartWithData:(id)data basedOnIndex:(id)index cache:(id)cache;
-(id)extractAllInvitesItemFromData:(id)data shownActivitiesCount:(unsigned)count;
-(id)extractAllActivitiesItemFromData:(id)data shownActivitiesCount:(unsigned)count;
-(id)parseActivities:(id)activities;
-(id)parseInvites:(id)invites;
-(id)spawnContext:(id)context;
-(id)genreRequestKeyForGenre:(id)genre;
-(id)buildRequestsForGenres:(id)genres;
-(id)requestForContext:(id)context;
-(void)storeNumberOfElements:(unsigned)elements forSection:(int)section;
-(unsigned)numberOfElementsForSection:(int)section;
-(void)sdkNotificationDidComeIn:(id)sdkNotification;
-(void)registerCustomNotifications;
-(void)dealloc;
@end

