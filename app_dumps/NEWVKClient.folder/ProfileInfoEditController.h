/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MOCTLabelDelegate.h"
#import "VKClient-Structs.h"
#import "UITextFieldDelegate.h"
#import "VKMTableController.h"

@class NSString, SexSelectionSegmentedControl, UITableViewHeaderFooterView, UIDatePicker, ProfileInfoModel, VKProfileInfo, MOCTLabel, ProfilePhotoAndNameCell;

__attribute__((visibility("hidden")))
@interface ProfileInfoEditController : VKMTableController <UITextFieldDelegate, MOCTLabelDelegate> {
	BOOL datePickerVisible;
	VKProfileInfo* _profileInfo;
	ProfilePhotoAndNameCell* _cellPhotoAndName;
	SexSelectionSegmentedControl* _sexControl;
	UIDatePicker* _datePicker;
	MOCTLabel* _relationshipSectionFooterLabel;
	UITableViewHeaderFooterView* _relationshipSectionFooter;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) ProfileInfoModel* model;
@property(retain, nonatomic) UITableViewHeaderFooterView* relationshipSectionFooter;
@property(retain, nonatomic) MOCTLabel* relationshipSectionFooterLabel;
@property(retain, nonatomic) UIDatePicker* datePicker;
@property(retain, nonatomic) SexSelectionSegmentedControl* sexControl;
@property(retain, nonatomic) ProfilePhotoAndNameCell* cellPhotoAndName;
@property(retain, nonatomic) VKProfileInfo* profileInfo;
+(BOOL)validProfileInfo:(id)info;
-(void).cxx_destruct;
-(void)moctlabel:(id)moctlabel linkClicked:(id)clicked;
-(void)handleRelationConfirmationWithPartnerURL:(id)partnerURL;
-(void)updateRelationshipSectionFooter;
-(BOOL)selectedNewRelationPartner;
-(BOOL)selectedSomeoneFromRelationRequests;
-(BOOL)shouldShowRelationshipSectionFooter;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view viewForFooterInSection:(int)section;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view shouldHighlightRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view titleForFooterInSection:(int)section;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(BOOL)isVisibleNameRequestSection:(int)section;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)dateVisibilityRowIndex;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(BOOL)textFieldShouldReturn:(id)textField;
-(void)actionDate:(id)date;
-(void)actionSex:(id)sex;
-(void)actionLastName:(id)name;
-(void)actionFirstName:(id)name;
-(void)actionPhoto:(id)photo;
-(void)actionDone:(id)done;
-(id)lazyDatePicker;
-(void)eraseRelationsPartnerIfNeeded;
-(void)handleProfileInfoUpdated;
-(void)model:(id)model updated:(id)updated;
-(void)VKMScrollViewRefreshLoading;
-(int)VKMNavigationBarStyle;
-(int)VKMControllerStatusBarStyle;
-(BOOL)dark;
-(void)viewDidLoad;
-(int)VKMTableStyle;
@end

