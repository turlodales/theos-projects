/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ProfileInfoController.h"

@class ProfileModel;

__attribute__((visibility("hidden")))
@interface UserInfoController : ProfileInfoController {
}
@property(retain, nonatomic) ProfileModel* model;
-(void)VKMTableUpdatedIndex;
-(BOOL)VKMRoute:(id)route context:(id)context;
-(void)actionProfileViewProfilePhoto:(id)photo;
-(void)actionShowActions:(id)actions;
-(id)VKMControllerStatsRef;
-(void)viewDidLoad;
-(void)updateProfile;
@end

