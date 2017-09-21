/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "CLLocationManagerDelegate.h"
#import "BaseSectionedSettingsController.h"

@class NSString, CLLocationManager, SettingsSection, UITableViewCell;

__attribute__((visibility("hidden")))
@interface ModernGeneralSettings : BaseSectionedSettingsController <CLLocationManagerDelegate> {
	UITableViewCell* _cellPhotoUploadCompressed;
	UITableViewCell* _cellLocationSettings;
	UITableViewCell* _cellGifsAutoplay;
	UITableViewCell* _cellManageStickers;
	SettingsSection* _geoSection;
	CLLocationManager* _locationManager;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) CLLocationManager* locationManager;
@property(retain, nonatomic) SettingsSection* geoSection;
@property(retain, nonatomic) UITableViewCell* cellManageStickers;
@property(retain, nonatomic) UITableViewCell* cellGifsAutoplay;
@property(retain, nonatomic) UITableViewCell* cellLocationSettings;
@property(retain, nonatomic) UITableViewCell* cellPhotoUploadCompressed;
-(void).cxx_destruct;
-(void)locationManager:(id)manager didChangeAuthorizationStatus:(int)status;
-(void)updateLocationStatus:(int)status;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(BOOL)customizeFooterForSection:(unsigned)section;
-(void)showGifAutoplayOptions;
-(void)actionOpenSettings:(id)settings;
-(void)switchUploadPhoto:(id)photo;
-(void)render;
-(void)resetSections;
@end

