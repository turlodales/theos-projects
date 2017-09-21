/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ConfirmationCodeHandler.h"
#import "TimerTargetDelegate.h"
#import "VKClient-Structs.h"
#import "UITextFieldDelegate.h"
#import "SignupController.h"

@class NSString, UITextField, UIButton, UILabel, TimerTarget;

__attribute__((visibility("hidden")))
@interface SignupConfirmController : SignupController <TimerTargetDelegate, UITextFieldDelegate, ConfirmationCodeHandler> {
	BOOL is2FA;
	BOOL isApp2FA;
	UITextField* _codeField;
	TimerTarget* _target;
	UILabel* _footerLabel;
	UILabel* _footerSublabel;
	UIButton* _footerButton;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UIButton* footerButton;
@property(retain, nonatomic) UILabel* footerSublabel;
@property(retain, nonatomic) UILabel* footerLabel;
@property(retain, nonatomic) TimerTarget* target;
@property(retain, nonatomic) UITextField* codeField;
-(void).cxx_destruct;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(void)timerTargetFired:(id)fired;
-(void)retrySMS:(BOOL)sms;
-(void)updateTimer;
-(BOOL)is2FAWithApp;
-(BOOL)textFieldShouldReturn:(id)textField;
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;
-(void)actionNext:(id)next;
-(void)actionProblems:(id)problems;
-(void)actionCall:(id)call;
-(BOOL)handleConfirmationCode:(id)code;
-(void)notifyIncorrectFields:(id)fields;
-(void)render;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)dealloc;
@end

