/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, AuthModel;

__attribute__((visibility("hidden")))
@interface SignupController : XXUnknownSuperclass {
	AuthModel* _data;
	NSArray* _cells;
}
@property(retain, nonatomic) NSArray* cells;
@property(retain, nonatomic) AuthModel* data;
-(void).cxx_destruct;
-(int)preferredStatusBarStyle;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view viewForFooterInSection:(int)section;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)notifyIncorrectFields:(id)fields;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
@end

