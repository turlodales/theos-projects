/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface LoadingFooterView : XXUnknownSuperclass {
	UIActivityIndicatorView* _anim;
	UILabel* _label;
}
@property(readonly, retain, nonatomic) UILabel* label;
@property(readonly, retain, nonatomic) UIActivityIndicatorView* anim;
-(void).cxx_destruct;
-(void)useText:(id)text;
-(void)setLoading:(BOOL)loading;
-(void)layoutSubviews;
-(id)init;
@end

