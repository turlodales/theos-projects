/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UITableView, NSIndexPath, NSDate;

__attribute__((visibility("hidden")))
@interface UITableViewMiddleObjectTracker : XXUnknownSuperclass {
	UITableView* _tableView;
	NSDate* _lastDate;
	NSIndexPath* _lastIndexPath;
}
@property(retain, nonatomic) NSIndexPath* lastIndexPath;
@property(retain, nonatomic) NSDate* lastDate;
@property(readonly, assign, nonatomic) UITableView* tableView;
-(void).cxx_destruct;
-(void)start;
-(void)stop;
-(void)trackIndexPath:(id)path;
-(id)currentIndexPath;
-(void)didTrackIndexPath:(id)path duration:(double)duration;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(id)initWithTableView:(id)tableView;
-(void)dealloc;
@end
