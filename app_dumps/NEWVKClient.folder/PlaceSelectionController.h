/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "CLLocationManagerDelegate.h"
#import "VKMLiveController.h"
#import "MKMapViewDelegate.h"
#import "LocationCellDelegate.h"
#import "VKClient-Structs.h"

@class UIBarButtonItem, UIView, NSString, MKMapView, CLLocation, CLLocationManager, CLGeocoder, PlacesSearchModel, NSDate;

__attribute__((visibility("hidden")))
@interface PlaceSelectionController : VKMLiveController <CLLocationManagerDelegate, MKMapViewDelegate, LocationCellDelegate> {
	BOOL autoUserTracking;
	BOOL locationAccessEnabled;
	BOOL allowInaccurate;
	CLLocationManager* _locationManager;
	UIView* _header;
	MKMapView* _mapView;
	CLLocation* _location;
	NSDate* _locationUpdate;
	CLGeocoder* _geocoder;
	UIView* _privacyView;
	UIBarButtonItem* _closeButton;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) PlacesSearchModel* model;
@property(retain, nonatomic) UIBarButtonItem* closeButton;
@property(retain, nonatomic) UIView* privacyView;
@property(retain, nonatomic) CLGeocoder* geocoder;
@property(retain, nonatomic) NSDate* locationUpdate;
@property(retain, nonatomic) CLLocation* location;
@property(retain, nonatomic) MKMapView* mapView;
@property(retain, nonatomic) UIView* header;
@property(retain, nonatomic) CLLocationManager* locationManager;
-(void).cxx_destruct;
-(void)willDismissSearchController:(id)controller;
-(void)willPresentSearchController:(id)controller;
-(void)mapView:(id)view didUpdateUserLocation:(id)location;
-(void)clearTimers;
-(void)updateInaccurate;
-(void)updateLocation;
-(id)placesSearchModel;
-(id)currentLocation;
-(void)scrollViewDidScroll:(id)scrollView;
-(id)VKMTableCreateSearchController80;
-(int)VKMTableSearchMode;
-(int)VKMControllerStatusBarStyle;
-(BOOL)VKMRoute:(id)route context:(id)context;
-(void)layoutMap;
-(void)notificationAppActive:(id)active;
-(void)updateLocationAccess;
-(void)locationManager:(id)manager didChangeAuthorizationStatus:(int)status;
-(void)updateAddress:(id)address searching:(BOOL)searching;
-(id)lazyPrivacyView;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)VKMControllerSetAutocloseButton:(id)button;
-(void)viewDidLoad;
-(BOOL)VKMScrollViewDisablePTR;
-(void)loadView;
-(void)dealloc;
-(id)initWithMain:(id)main andModel:(id)model;
@end

