/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MessagesListModel.h"

@class NSDate, NSNumber;

__attribute__((visibility("hidden")))
@interface ChatListModel : MessagesListModel {
	BOOL checking;
	NSNumber* _did;
	NSDate* _till;
}
@property(readonly, retain, nonatomic) NSNumber* did;
@property(retain, nonatomic) NSDate* till;
-(void).cxx_destruct;
-(void)typing;
-(void)touchTyping;
-(id)messageDataFromData:(id)data;
-(void)updateStoreWithData:(id)data messages:(id)messages previousMID:(id)mid lastPage:(BOOL)page complete:(id)complete;
-(void)loadMessagesWithOffset:(int)offset count:(int)count startMID:(int)mid success:(id)success failure:(id)failure;
-(void)fetchMessagesAfterMID:(id)mid limit:(int)limit complete:(id)complete;
-(id)added:(id)added;
-(id)removed:(id)removed;
-(id)updated:(id)updated;
-(BOOL)isSameModel:(id)model;
-(id)initWithDialogId:(id)dialogId session:(id)session usersModel:(id)model;
@end

